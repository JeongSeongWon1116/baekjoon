#include <iostream>
int main(){
    int m=0, n=0;
    int a[9][9];
    int max = 0;
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            std::cin >> a[i][j];
            if(max< a[i][j]){
                max = a[i][j];
                m = i;
                n = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", m+1,n+1);
    
}
