#include <iostream>
void next_binary(std::vector<int>& number);
int largest_gap(std::vector<std::vector<int>> matrix);

int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 0, 0, 1, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 1, 1, 0},
        {0, 0, 1, 1, 1},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0}
    };

    int gap = largest_gap(matrix);

    std::cout << "Largest gap: " << gap << std::endl;

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

int largest_gap(std::vector<std::vector<int>> matrix){
    int counter = 0;
    for(int i = 0; i < matrix.size();i++){
        int tmp_counter = 0;
        next_binary(matrix[i]);
        for(;matrix[i] < matrix[i+1];next_binary(matrix[i])){
            tmp_counter++;
        }
        counter = std::max(counter,tmp_counter);
    }
    return counter;
}