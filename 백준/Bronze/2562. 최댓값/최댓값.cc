#include <iostream>
int main(){
    int max;
    int a;
    int count = 1;
    std::cin >> max;
    for(int i = 0; i<8; i++){
        std::cin >> a;
        if(a>max){
            max = a;
            count = i+2;
        }
    }
    std::cout << max <<std::endl;
    std::cout << count;
}
