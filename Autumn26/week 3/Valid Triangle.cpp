#include <iostream>
#include <cmath>

int main(){
    double a, b, c;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    if((a + b > c) && (c + b > a) && (a + c > b)){
        if((a == c) || (c == a) || (a == b)){
            if((a == b) && (b == c)){
                std::cout << "the triangle is equilateral" << std::endl;
            }
            else{
                std::cout << "the triangle is isosceles" << std::endl;
            }
        }
        else{
            std::cout << "the triangle is scalene" << std::endl;
        }
        std::cout << "the perimeter is " << a+b+c << std::endl;
        std::cout << "the area is " << std::sqrt(0.5*(a+b+c)*(0.5*(a+b+c)-a)*(0.5*(a+b+c)-b)*(0.5*(a+b+c)-c)) << std::endl;
    }
    else{
        std::cout << "invalid" << a+b+c << std::endl;
    }
}