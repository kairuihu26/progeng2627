#include <iostream>
void next_binary(std::vector<int>& number);
int main() {
    std::vector<int> number = {0, 1, 1, 1, 1};

    next_binary(number);

    for (int i = 0; i < number.size(); i++) {
        std::cout << number[i];
    }

    std::cout << std::endl;

    return 0;
}

void next_binary(std::vector<int>& number){
    bool c = true;
    for(int i = number.size()-1; i >=0; i--){
        if(c){
            if(number[i] == 1){
                number[i] = 0;
            }
            else{
                c = false;
                number[i] = 1;
            }
        }
    }
}