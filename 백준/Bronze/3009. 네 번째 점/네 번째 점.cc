#include <iostream>
int main(){
    int a[1000] = {0};
    int c[1000] = {0};
    int i = 0;
    int b;
    int d;
    while(i<3){
        std::cin>>b >> d;
        a[b-1]++;
        c[d-1]++;
        i++;
    }
    for(i = 0; i<1000;i++){
        if(a[i]==0) continue;
        if(a[i] % 2 == 1) printf("%d ", i+1);
    }
    for(i = 0; i<1000;i++){
        if(c[i]==0) continue;
        if(c[i] % 2 == 1) printf("%d ", i+1);
    }
}