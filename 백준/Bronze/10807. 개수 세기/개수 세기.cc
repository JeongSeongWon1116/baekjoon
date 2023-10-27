#include <iostream>
int main(){
    int a[201] = {0};
    int n;
    int x;
    int v;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> x;
        x += 100;
        a[x]++ ;
    }
    std::cin >> v;
    v += 100;
    std::cout << a[v];
    
}
