#include <iostream>
#include <string>
#include <vector>
void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
);

std::vector<std::string> transpose(std::vector<std::string> grid);

void update(std::vector<std::string>& solution, std::vector<std::string> words, std::vector<bool>& flags);

int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    int rows = grid.size();
    int cols = grid[0].length();
    int wordsnums = words.size();
    std::vector<bool> flag(wordsnums, false);

    std::vector<std::string> horizontal = grid;
    update(horizontal, words, flag);

    std::vector<std::string> vertical = transpose(grid);
    update(vertical, words, flag);
    vertical = transpose(vertical);

    solution = grid;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(horizontal[i][j] != '#' || vertical[i][j] != '#'){
                solution[i][j] = grid[i][j];
            } else {
                solution[i][j] = '#';
            }
        }
    }

    for(int i = 0; i < wordsnums; i++){
        if(!flag[i]){
            not_found.push_back(words[i]);
        }
    }
}

std::vector<int> find_positions(std::string str, std::string target, bool& flag){
    std::vector<int> result;
    int pos = 0;
    while(pos + (int)target.size() <= (int)str.size()){
        if(str.substr(pos, target.size()) == target){
            result.push_back(pos);
            pos ++;
        }
        else{
            pos++;
        }
    }
    if(result.size() != 0){
        flag = true;
    }
    return result;
}

std::vector<std::string> transpose(std::vector<std::string> grid){
    std::vector<std::string> result;
    for(int i = 0 ; i < grid[0].size();i++){
        std::string col;
        for(int j = 0; j < grid.size();j++){
            col.append(grid[j].substr(i, 1));
        }
        result.push_back(col);
    }
    return result;
}

void update(std::vector<std::string>& solution, std::vector<std::string> words, std::vector<bool>& flags){
    int rows = solution.size();
    int cols = solution[0].length();
    int wordsnums = words.size();
    for(int i = 0; i < rows; i++){
        std::string original = solution[i];
        std::vector<bool> covered(cols, false);
        for(int j = 0; j < wordsnums ; j++){
            bool flag = false;
            std::vector<int> positions = find_positions(original, words[j], flag);  
            if(flag){
                flags[j] = true;
                for(int p = 0; p < (int)positions.size(); p++){
                    for(int m = 0; m < (int)words[j].size(); m++){
                        covered[positions[p] + m] = true;
                    }
                }
            }
        }
        std::string result = "";
        for(int c = 0; c < cols; c++){
            if(covered[c]) {
                result += original[c];
            } else {
                result += '#';
            }
        }
        solution[i] = result;
    }
}