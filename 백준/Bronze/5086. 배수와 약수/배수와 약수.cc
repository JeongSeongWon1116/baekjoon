#include <iostream>
int main(){
    int a, b;
    while(true){
        scanf("%d %d", &a, &b);
        if(a==0 && b== 0) break;
        if(a>b){
            if(a%b == 0) printf("multiple");
            else printf("neither");
        }
        else{
            if(b%a == 0) printf("factor");
            else printf("neither");
        }
        printf("\n");
    }
    
}