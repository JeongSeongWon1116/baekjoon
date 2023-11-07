#include <iostream>
int main(){
    int a;
    
    while(true){
        int x=0;
        int i = 1;
        scanf("%d", &a);
        if(a == -1) break;
        while(true){
            if(i>=a) break;
            if(a%i==0){
                x+=i;
            }
            i++;
        }
        i=1;
        if(x == a) {
            printf("%d = %d", a, i);
            i++;
            while(true){
                if(i>=a) break;
                if(a%i==0){
                    printf(" + %d", i);
                }
                i++;
            }
        }
        else printf("%d is NOT perfect.", a);
        printf("\n");
    }
}