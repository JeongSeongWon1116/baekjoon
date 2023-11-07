#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int i = 2;
    int a = 1;
    int x,y;
    while(true){
        if(a>=n)break;
        a += i;
        i++;
    }
    if(i%2==1){
        y = a-n+1;
        x = i -y;
    }
    else{
        x = a-n+1;
        y = i -x;
    }
    printf("%d/%d",x,y);
}