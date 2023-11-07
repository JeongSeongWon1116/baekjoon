#include <iostream>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int x=0;
    int i = 1;
    int count = 0;
    int result=0;
    while(true){
        x = a%i;
        if(x==0) count ++;
        if(count==b) {
            result = i;
            break;
        }
        if(i>a){
            break;
        }
        i++;
    }
    printf("%d", result);
}