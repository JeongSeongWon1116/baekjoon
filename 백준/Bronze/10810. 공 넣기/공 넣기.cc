#include <iostream>
int main(){
    int n, m;
    int a[101] = {0};
    std::cin >> n >> m;
    int b, c, d;
    for(int i = 0; i<m; i++){
        std::cin >> b >> c >> d;
        for(int j = b ; j <= c; j++){
            a[j] = d;
        }
    }
    for(int i = 1; i<=n;i++){
        printf("%d ", a[i]);
    }
}
