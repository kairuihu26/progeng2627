#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void sort_three_numbers(double& s1, double& s2, double& s3){
    if(s1 > s3){
        double tmp;
        tmp = s3;
        s3 = s1;
        s1 = tmp;
    }
    if(s2 > s3){
        double tmp;
        tmp = s3;
        s3 = s2;
        s2 = tmp;
    }
    if(s1 > s2){
        double tmp;
        tmp = s2;
        s2 = s1;
        s1 = tmp;
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}