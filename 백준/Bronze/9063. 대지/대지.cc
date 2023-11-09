#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int x[n], y[n];
    int minx = 10000, miny = 10000, maxx = -10000, maxy = -10000;
    bool a = true;
    bool b = true;
    for(int i = 0; i<n; i++){
        std::cin >> x[i] >> y[i];
        if(minx>x[i]) minx= x[i];
        if(miny>y[i]) miny = y[i];
        if(maxx<x[i]) maxx = x[i];
        if(maxy<y[i]) maxy = y[i];
    }
    for(int i = 0; i < n-1; i++){
        if(x[i] == x[i+1] && a){
            continue;
        }
        else{
            a = !a;
            break;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(y[i] == y[i+1] && b){
            continue;
        }
        else{
            b = !b;
            break;
        }
    }
    if(a || b){
        printf("0");
    }
    else{
        printf("%d",(maxx - minx) * (maxy - miny));
    }
}

