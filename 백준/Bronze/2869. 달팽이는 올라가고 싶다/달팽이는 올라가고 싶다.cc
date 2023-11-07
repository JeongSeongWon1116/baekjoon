#include <iostream>
int main(){
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int i = a;
    int count = 0;
    if(i>=v) count = 0;
    else{
        v -= a;
        count = v / (a-b);
        if(v%(a-b)!=0) count++;
    }
    printf("%d", count+1);
    
}