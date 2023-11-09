#include <iostream>
int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a+b+c != 180){
        printf("Error");
    }
    else if((a == b) && (b==c)){
        printf("Equilateral");
    }
    else if((a==b) || (b==c) || (c==a)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}

