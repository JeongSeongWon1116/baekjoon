#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int a;
    int count = 0;
    int x = 0;
    int i = 0;
    for(int j = 0; j<n; j++){
        std::cin >> a;
        i = 0;
        x= 0;
        while(true){
            i++;
            if(a%i == 0) x++;
            if(i>a) break;
            
        }
        if(x == 2) count++;
    }
    printf("%d", count);
}