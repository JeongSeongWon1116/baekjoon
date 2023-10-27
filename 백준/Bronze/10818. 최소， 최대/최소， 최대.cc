#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int max;
    int min;
    std::cin >> max;
    min = max;
    int a;
    for(int i = 0; i<n-1; i++){
        std::cin >> a;
        if(a>max) max = a;
        if(a<min) min = a;
    }
    std::cout << min <<" "<<max;
}
