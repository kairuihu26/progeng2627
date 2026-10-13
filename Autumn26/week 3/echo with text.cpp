#include <iostream>
#include <string>

int main(){
    std::string s;
    while (std::cin >> s){
        if (s == "STOP"){
            break;
        }
        std::cout << s << std::endl;
    }
    return 0;
}