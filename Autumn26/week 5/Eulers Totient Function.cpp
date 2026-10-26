#include <iostream>
#include <algorithm>
int gcd(int a, int b){
    if (a<b){
        std::swap(a,b);
    }
    if(b==0) return a;
    return gcd(a%b, b);
}
int euler_totient(int n){
    int counter = 0;
    for(int i=0; i<n;i++){
        if(gcd(i,n)==1){
            counter++;
        }
    }
    return counter;
}
int totient_sum(int n, int &depth) {
    if (n <= 1) return n;
    ++depth;
    return n+totient_sum(euler_totient(n), depth);
}
int main(){
    int depth = 0;
    std::cout << (gcd(9,5)) << std::endl;
    std::cout << (euler_totient(30)) << std::endl;
    std::cout << (totient_sum(17,depth)) << std::endl;
    std::cout << depth << std::endl;
    return 0;
}