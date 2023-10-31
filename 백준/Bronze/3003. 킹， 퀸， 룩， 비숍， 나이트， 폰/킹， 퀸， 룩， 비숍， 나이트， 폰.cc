#include <iostream>
int main(){
    int a[6];
    int b[6];
    int c[6] = {1, 1, 2, 2, 2, 8};
    for(int i = 0; i<6; i++){
        std::cin >> a[i];
        b[i] = c[i]-a[i];
    }
    for(int i = 0; i<6; i++){
        printf("%d ", b[i]);
    }
}
