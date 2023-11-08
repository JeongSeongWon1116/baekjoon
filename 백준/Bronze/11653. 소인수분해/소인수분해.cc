#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int i = 2;
    if(n == 1) {
        return 0;
    }
    while(true){
        if(n%i == 0){
            n /=i;
            printf("%d\n", i);
        }
        else{
            i++;
        }
        if(i>n) break;
    }
}

