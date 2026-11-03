#include <iostream>
#include <cmath>
bool valid_chess_moves(int a, int b, int c, int d){
    if((abs(c-a)+abs(d-b) == 3)&&(c-a != 0)&&(d-b != 0)&&(c<=8)&&(d<=8)&&(c>=1)&&(d>=1)){
        return true;
    }
    return false;
}
int main(){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if(valid_chess_moves(a,b,c,d)){
        std::cout << "valid" << std::endl;
    }
    else std::cout << "invalid" << std::endl;
}