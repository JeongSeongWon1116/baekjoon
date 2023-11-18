#include <iostream>
double det(int a[2][2]);
int main(){
    int a[2][2], b[2];
    int a1[2][2];
    int x, y;
    std::cin >> a[0][0] >> a[0][1] >> b[0] >> a[1][0] >> a[1][1] >>b[1];
    double d = det(a);
    double d1, d2;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            a1[i][j] = a[i][j];
            a1[i][0] = b[i];
        }
    }
    d1 = det(a1);
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            a1[i][j] = a[i][j];
            a1[i][1] = b[i];
        }
    }
    d2 = det(a1);
    
    x = d1/d;
    y = d2/d;
    
    printf("%d %d",x,y);
}
double det(int a[2][2]){
    
    return a[0][0] * a[1][1] - a[1][0]*a[0][1];
}
