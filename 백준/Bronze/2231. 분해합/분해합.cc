#include <iostream>

int main(){
    int n;
    scanf("%d", &n);
    int a = 0;

    for(int i = 0; i<10;i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k< 10 ;k++){
                for(int l = 0; l <10 ; l++){
                    for(int m = 0; m<10; m++){
                        for(int o = 0; o<10; o++){
                            a = 0;
                            a = i + j + k + l +m +o+m*10 +o+ i *100000 + j * 10000 + k * 1000 + l*100;
                            if(n == a) {
                                if(i==0){
                                    if(j==0){
                                        if(k==0){
                                            if(l==0){
                                                if(m==0){
                                                    printf("%d",o);
                                                }
                                                else{
                                                    printf("%d%d",m,o);
                                                }
                                            }
                                            else{
                                                printf("%d%d%d",l,m,o);
                                            }
                                        }
                                        else{
                                            printf("%d%d%d%d",k,l,m,o);
                                        }
                                    }
                                    else{
                                        printf("%d%d%d%d%d", j,k,l,m,o);
                                    }
                                    
                                }
                                else{
                                    printf("%d%d%d%d%d%d", i, j, k, l,m,o);
                                    
                                }
                                return 0;
                            }
                        }
                    }
                    
                }
            }
        }
    }
    printf("0");
}
