#include <iostream>
int main(){
    int a, b, c;
    int max = 0;
    while(true){
        std::cin >> a >> b >> c;
        max = a;
        if(a==0 && b==0 && c==0) break;
        if(max<b) max = b;
        if(max<c) max = c;
        if(max>=(a+b+c - max)){
            printf("Invalid\n");
        }
        else if((a == b) && (b==c)){
            printf("Equilateral\n");
        }
        else if((a==b) || (b==c) || (c==a)){
            printf("Isosceles\n");
        }
        else{
            printf("Scalene\n");
        }
    }
}

