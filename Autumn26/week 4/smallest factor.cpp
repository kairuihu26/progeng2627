#include <iostream>
#include <cmath>
int smallest_factor(int n){
    for(int i = 2; i <= (int)(std::sqrt(n)) ; i++){
        if(n%i == 0) return i;
    }
    return n;
}
int main(){
    int n;
    std::cin >> n;
    std::cout << smallest_factor(n) << std::endl;
}