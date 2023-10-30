#include <iostream>
int main(){
    int n, m;
    int a[101] = {0};
    std::cin >> n >> m;
    int b, c;
    int temp;
    for(int i = 1; i<=n;i++){
        a[i] = i;
    }
    for(int i = 0; i<m; i++){
        std::cin >> b >> c;
        temp = a[b];
        a[b] = a[c];
        a[c] = temp;
    }
    for(int i = 1; i<=n;i++){
        printf("%d ", a[i]);
    }
}
