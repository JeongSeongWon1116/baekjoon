#include <iostream>
int main(){
    int a[42] = {0};
    int n;
    for(int i =0; i<10; i++){
        std::cin >> n;
        n = n % 42;
        a[n]++;
    }
    int count = 0;
    for(int i = 0; i<42; i++){
        if(a[i] !=0){
            count++;
        }
    }
    std::cout << count <<std::endl;
}

