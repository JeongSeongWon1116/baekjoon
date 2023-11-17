#include <iostream>
int main(){
    int sum = 0;
    int a;
    for(int i = 0; i<5; i++){
        std::cin >> a;
        sum += a * a;
    }
    printf("%d", sum % 10);
}
