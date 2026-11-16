#include <iostream>

unsigned long catalan_number(int n){
    unsigned long sum = 0;
    if(n == 0){
        return 1;
    }
    for(int i = 0; i < n; i++){
        sum += catalan_number(i) * catalan_number(n - i - 1);
    }
    return sum;
}

std::vector<unsigned long> catalan_numbers(int n){
    std::vector<unsigned long> result;
    for(int i = 0; i < n ; i++){
        result.push_back(catalan_number(i));
    }
    return result;
}
int main(){
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}
