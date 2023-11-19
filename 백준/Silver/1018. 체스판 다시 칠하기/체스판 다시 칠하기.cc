#include <iostream>
int main(){
    int m,n;
    char a[50][50];
    int bi, bj;
    int count = 0;
    int min = 64;
    std::cin >> m >> n;
    for(int i = 0; i<m; i++){
        for(int j = 0; j <n; j++){
            std::cin >> a[i][j];
        }
    }
    for(int k = 0; k<=m-8; k++){
        for(int l = 0; l<= n-8; l++){
            for(int o = 0; o<2; o++){
                count = 0;
                for(int j = 0; j <8; j++){
                    for(int i = 0; i<8; i++){
                        if(o==1){
                            // 홀수 위치
                            if((i+j)%2==0){
                                if(a[i+k][j+l]!='B') count++;
                            }
                            // 짝수 위치
                            else{
                                if(a[i+k][j+l]=='B') count++;
                            }
                        }
                        else{
                            // 홀수 위치
                            if((i+j)%2==0){
                                if(a[i+k][j+l]=='B') count++;
                            }
                            // 짝수 위치
                            else{
                                if(a[i+k][j+l]!='B') count++;
                            }
                        }
                    }
                }
                if(min>count){
                    min = count;
                    bi = k;
                    bj = l;
                }
            }
            
        }
    }
    printf("%d", min);
}
