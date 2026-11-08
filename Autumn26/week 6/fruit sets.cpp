#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout);
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout);
int search_vector(std::string s, const std::vector<std::string>& vin);

int main(){
    std::string filename1, filename2, tmp1, tmp2;
    std::cin >> filename1 >> filename2;
    std::ifstream file1, file2;
    std::ofstream uni, inter;
    std::vector <std::string> v1,v2,vuni, vinter;

    file1.open(filename1);
    while(file1 >> tmp1){
        v1.push_back(tmp1);
    }
    file1.close();

    file2.open(filename2);
    while(file2 >> tmp2){
        v2.push_back(tmp2);
    }
    file2.close();

    union_vector(v1, v2, vuni);
    intersection_vector(v1, v2, vinter);

    uni.open("union.txt");
    for(int i = 0; i < vuni.size();i++){
        uni << vuni[i] << std::endl;
    }
    uni.close();
    
    inter.open("intersection.txt");
    for(int i = 0; i < vinter.size();i++){
        inter << vinter[i] << std::endl;
    }
    inter.close();
}
int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i<vin.size(); i++){
        if(s == vin[i]) return i;
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(int j = 0; j < vin2.size();j++){
        if(search_vector(vin2[j], vin1) == -1){
            vout.push_back(vin2[j]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int j = 0; j < vin2.size();j++){
        if(search_vector(vin2[j], vin1) != -1){
            vout.push_back(vin2[j]);
        }
    }
}