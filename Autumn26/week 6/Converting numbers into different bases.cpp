#include <iostream>
#include <vector>
bool digits_in_base(int num, int base, std::vector<int>& digits){
    if(base < 2 || base > 16) return false;
    while(num > 0){
        digits.push_back(num%base);
        num = num/base;
    }
    return true;
}
void print_digits_as_number(std::vector<int> digits){
    for(int i = digits.size()-1; i >= 0;i--){
        if(digits[i]>9) std::cout << static_cast<char>(digits[i]+65-10);
        else std::cout << digits[i];
    }
    std::cout << std::endl;
}

int main() {
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}