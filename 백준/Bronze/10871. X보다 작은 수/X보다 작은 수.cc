#include <iostream>
int main(){
    int x, n;
    int a;
    std::cin >> n >> x;
    for(int i = 0; i<n; i++){
        std:: cin >> a;
        if(a<x) std::cout << a << " ";
    }
    
}
