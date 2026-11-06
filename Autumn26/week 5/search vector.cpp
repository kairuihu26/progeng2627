#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin);

int main(){
    std::vector<int> vi;
    int n = -3;
    vi = {1, 7, 3, 4, 2, -2, 19};
    std::cout << search_vector(n, vi) << std::endl;
    std::cout << vi[search_vector(n, vi)] << std::endl;
}
int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n) return i;
    }
    return -1;
}