#include <iostream>
int main(){
    int a = 10;
    int b = 3;
    int interme;
    int count = 0;
    std::cout << "we want to perform the integer division of " << a << " by " << b << std::endl;
    while(a>b){
        count++;
        std::cout << std::endl;
        interme = a - b;
        std::cout << a << " is greater than " << b << " so we subtract " <<  b << " from " << a << std::endl;
        std::cout << "we get " << interme << std::endl;
        a = interme;
    }
    
    std::cout << a << " is not greater than " << b << " so we terminate the loop" << std::endl;
    std::cout << "the quotient is the number of subtractions (" << count << ")" << std::endl;
    std::cout << "the remainder is the number we have left at the end (" << a << ")" << std::endl;
}