#include <iostream>
int main(){
    int t;
    std::cin >> t;
    int c;
    int q[t];
    int d[t];
    int n[t];
    int p[t];
    for(int i = 0; i <t; i++){
        std::cin >> c;
        
        q[i] = c/25;
        c %=25;
        d[i] = c/10;
        c %=10;
        n[i] = c/5;
        c%=5;
        p[i] = c;
    }
    for(int i = 0; i<t; i++){
        printf("%d %d %d %d\n", q[i], d[i], n[i], p[i]);
    }
}

