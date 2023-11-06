#include <iostream>
int main(){
    long radix;
    int decimal;
    std::cin >> decimal >> radix;
    char a[100];
    int i = 0;
    while(decimal >= radix){
        a[i]= decimal % radix;
        decimal /= radix;
        i++;
    }
    a[i]= decimal;
    
    for(;i>=0;i--){
        if(a[i] <10){
            printf("%c", a[i]+48);
        }
        else{
            
            printf("%c", a[i]+55);
        }
    }
}

