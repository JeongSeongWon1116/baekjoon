#include <iostream>
int main(){
    int a;
    std::cin >> a;
    int i;
    for(i = 0; i<a; i++){
        for(int j = a-2-i; j>=0; j--) printf(" ");
        for(int j = 2*i+1;j>0; j--) printf("*");
        printf("\n");
    }
    for(int j = 0; j<a-1; j++){
        for(int k = 0; k<j+1; k++) printf(" ");
        for(int k = (a-j-1)*2-1;k>0;k--){
            printf("*");
        }
        printf("\n");
    }
}
