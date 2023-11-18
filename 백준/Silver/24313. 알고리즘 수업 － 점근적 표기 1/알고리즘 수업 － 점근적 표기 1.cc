#include <iostream>
int main(){
    int a1, a0, c, n0;
    std::cin >> a1 >> a0>> c>> n0;
    int n;
    for(n = n0; n<=100;n++){
        if(a1 * n + a0 > n * c){
            printf("0");
            return 0;
        }
    }
    printf("1");
}
