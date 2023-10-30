#include <iostream>
int main(){
    int a[30] = {0};
    int n;
    for(int i =0; i<28; i++){
        std::cin >> n;
        a[--n]++;
    }
    for(int i = 0; i<30; i++){
        if(a[i] ==0) printf("%d\n", i+1);
    }
}
