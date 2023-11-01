#include <iostream>
int main(){
    int a[100][100] = {0};
    int b;
    int m, n;
    std::cin >> b;
    int sum = 0;
    for(int i = 0; i<b; i++){
        std::cin >> m >> n;
        for(int j = m-1; j<m+9; j++){
            for(int k = n-1; k<n+9; k++){
                if(a[j][k] == 0) a[j][k] = 1;
            }
        }
    }
    for(int j = 0; j<100; j++){
        for(int k = 0; k<100; k++){
            if(a[j][k] == 1) sum++;
        }
    }
    printf("%d", sum);
}
