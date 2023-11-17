#include <iostream>
int main(){
    int a;
    std::cin >> a;
    int i = 1;
    long sum = 0;
    while(i < a){
        sum += i;
        i++;
    }
    std::cout << sum << "\n" << "2";
}