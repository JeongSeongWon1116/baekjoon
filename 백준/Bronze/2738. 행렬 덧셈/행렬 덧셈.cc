#include <iostream>
int main(){
    int m, n;
    std::cin >> m >> n;
    int a[m][n], b[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            std::cin >> a[i][j];
        }
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            std::cin >> b[i][j];
        }
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}
