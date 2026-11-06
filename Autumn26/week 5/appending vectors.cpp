#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout);
int main(){
    std::vector<int> v1, v2, vo;
    v1 = {1, 7, 3, 4};
    v2 = {2, -2, 19};
    append_vectors(v1, v2, vo);
    for(int i = 0; i < vo.size(); i++){
        std::cout << vo[i] << std::endl;
    }
}
void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}