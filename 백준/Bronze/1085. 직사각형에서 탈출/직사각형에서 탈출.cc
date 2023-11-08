#include <iostream>
int main(){
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    int min = 1000;
    if(min>x) min = x;
    if(min>y) min = y;
    if(w-x<min) min = w - x;
    if(h-y<min) min = h-y;
    
    printf("%d", min);
}

