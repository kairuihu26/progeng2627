#include <iostream>
#include <cmath>
int smallest_factor(int n){
    for(int i = 2; i <= (int)(std::sqrt(n)) ; i++){
        if(n%i == 0) return i;
    }
    return n;
}
int main(){
    int a, b;
    std::cin >> a >> b;
    for(int j = a; j <= b; j++){
        if(smallest_factor(j)==j){
            std::cout << j << std::endl;
        }
    }
    return 0;
}