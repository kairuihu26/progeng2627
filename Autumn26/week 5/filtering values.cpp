#include <iostream>
#include <vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout);

int main(){
    std::vector<double> vi, vo;
    double t = 5.632;
    vi = {1, 7, 3, 4, 2, -2, 19};
    filter_v(vi, t, vo);
    for(int i = 0; i < vo.size(); i++){
        std::cout << vo[i] << std::endl;
    }
}
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t) vout.push_back(vin[i]);
    }
}