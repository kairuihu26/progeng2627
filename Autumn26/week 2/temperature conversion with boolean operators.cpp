#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;

    const double F_to_C1 = 5.0/9.0;
    const double F_to_C2 = 32;

    std::cin >> temp_in >> unit_in;

    bool valid_unit = true;

    if((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        temp_out = (temp_in - F_to_C2) * F_to_C1;
    }
    else if( (unit_in == "c") || (unit_in == "C") ){
        unit_out = "F";
        temp_out = temp_in / F_to_C1 + F_to_C2;
    }
    else{
        valid_unit = false;
    }


    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}