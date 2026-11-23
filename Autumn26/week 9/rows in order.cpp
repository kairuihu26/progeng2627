#include <iostream>
void next_binary(std::vector<int>& number);
bool rows_in_order(std::vector<std::vector<int>> matrix, int& row);
int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {0, 1, 1, 0, 1},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 1, 0}
    };

    int row = -1;

    if (rows_in_order(matrix, row)) {
        std::cout << "Rows are in order" << std::endl;
    } else {
        std::cout << "Rows are not in order" << std::endl;
        std::cout << "First incorrect row: " << row << std::endl;
    }

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

bool rows_in_order(std::vector<std::vector<int>> matrix, int& row){
    for(int i = 0; i < matrix.size();i++){
        next_binary(matrix[i]);
        if(matrix[i] != matrix[i+1]){
            row = i + 1;
            return false;
        }
    }
    row = -1;
    return true;
}