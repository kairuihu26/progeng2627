#include <iostream>
#include <vector>

int scale_product(const std::vector<double> a, const std::vector<double> b){
    double result = 0;
    for(int i = 0; i < a.size(); i++){
        result += a[i]*b[i];
    }
    return result;
}

std::vector<double> extract_column(const std::vector<std::vector<double>> matrix, const int n){
    std::vector<double> col;
    for(int i = 0;i < matrix.size();i++){
        col.push_back(matrix[i][n]);
    }
    return col;
}

std::vector<std::vector<double>> matrices_product(const std::vector<std::vector<double>> a, const std::vector<std::vector<double>> b){
    std::vector<std::vector<double>> result;
    for(int i = 0;i < a.size();i++){
        std::vector<double> row;
        for(int j = 0;j < b[0].size();j++){
            row.push_back(scale_product(a[i],extract_column(b,j)));
        }
        result.push_back(row);
    }
    return result;
}
int main(){
    std::vector<std::vector<double>> x={{1,7,3},{1,2,3},{1,2,1.5}};
    std::vector<std::vector<double>> y={{3,2,1},{3,3,1},{3,2,1}};
    std::vector<std::vector<double>> result=matrices_product(x,y);
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[0].size();j++){
            std::cout << result[i][j] << " , ";
        }
        std::cout << std::endl;
    }
}