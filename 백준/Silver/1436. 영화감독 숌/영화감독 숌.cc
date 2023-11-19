#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int count = 0;
    int result = 0;
    int ck = 0;
    int i = 666;
    int k;
    while(true){
        ck = 0;
        k = i;
        while(k>0){
            if(k%10 == 6) ck++;
            else ck = 0;
            if(ck == 3) break;
            k /=10;
        }
        if(ck >=3){
            count ++;
        }
        if(count == n){
            result = i;
            break;
        }
        i++;
    }
    printf("%d", result);
}
