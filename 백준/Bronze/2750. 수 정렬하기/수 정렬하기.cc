#include <iostream>
bool check(int a, int b){
    return a>b;
}
int main(){
    int n;
    int a[1000];
    std::cin >> n;
    for(int i = 0; i<n; i++){
        std::cin >> a[i];
    }
    int temp;
    for(int j = 0 ; j<n-1; j++){
        for(int i = 0; i<n-1; i++){
            if(check(a[i], a[i+1])){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d\n", a[i]);
    }
    
}
