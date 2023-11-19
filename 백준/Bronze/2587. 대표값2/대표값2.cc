#include <iostream>
bool check(int a, int b){
    return a>b;
}
int main(){
    int a[5];
    double sum = 0;
    for(int i = 0; i<5; i++){
        std::cin >> a[i];
        sum += a[i];
    }
    int temp;
    for(int j = 0 ; j<5-1; j++){
        for(int i = 0; i<5-1; i++){
            if(check(a[i], a[i+1])){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("%d\n%d",  (int)sum/5, a[2]);
    
}
