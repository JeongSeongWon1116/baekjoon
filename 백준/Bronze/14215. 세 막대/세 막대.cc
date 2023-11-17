#include <iostream>
int main(){
    int a, b, c;
    int max[3] = {0};
    std::cin >> a >> b >> c;
    if(a>b){
        if(a>c){
            if(b>c){
                max[0] = a;
                max[1] = b;
                max[2] = c;
            }
            else{
                max[0] = a;
                max[1] = c;
                max[2] = b;
            }
                
        }
        else{
            max[0] = c;
            max[1] = a;
            max[2] = b;
        }
    }
    else{
        if(b>c){
            if(a>c){
                max[0] = b;
                max[1] = a;
                max[2] = c;
            }
            else{
                max[0] = b;
                max[1] = c;
                max[2] = a;
            }
        }
        else{
            max[0] = c;
            max[1] = b;
            max[2] = a;
        }
        
    }
    if(max[0]>=(a+b+c - max[0])){
        printf("%d", (max[1] + max[2])*2 -1);
        
    }
    else if((a == b) && (b==c)){
        printf("%d", max[1]*2 + max[2]);
    }
    else if((a==b) || (b==c) || (c==a)){
        printf("%d", max[1]*2 + max[2]);
    }
    else{
        printf("%d", max[0] + max[1] + max[2]);
    }
    
}
