#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int count = 1;
    int a = 1;
    while(true){
        if(a>=n) break;
        a += 6*count;
        count++;
    }
    printf("%d", count);
}