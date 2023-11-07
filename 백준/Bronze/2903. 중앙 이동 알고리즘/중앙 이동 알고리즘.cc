#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int dot = 2;
    for(int i = 1; i<=n;i ++){
        dot = dot*2 -1;
    }
    printf("%d", dot*dot);
}