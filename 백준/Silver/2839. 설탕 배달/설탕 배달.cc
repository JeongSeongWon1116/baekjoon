#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int i = 0;
    int j = 0;
    int result  = 0;
    i = 0;
    for(; i<1668; i++){
        j = 0;
        for(;j<1001; j++){
            result = i*3 + j *5;
            if(result==n){
                printf("%d", i+j);
                return 0;
            }
            if(result>n)break;
        }
    }
    printf("-1");
    
    
}
