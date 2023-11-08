#include <iostream>
int main(){
    int n=0, m=1;
    std::cin >> n >> m;
    int min = 100000;
    int avg = 0;
    int i;
    int x;
    bool c = false;
    while(n<=m){
        i = 1;
        x = 0;
        while(true){
            if(i>n) break;
            if(n%i==0) x++;
            i++;
        }
        if(x==2){
            c = true;
            avg += n;
            if(n<min) min = n;
        }
        n++;
    }
    if(c){
        printf("%d\n%d", avg, min);
    }
    else{
        printf("-1");
    }
}