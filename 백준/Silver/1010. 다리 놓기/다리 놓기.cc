//
//  main.cpp
//  baekjoon
//
//  Created by SeongWon Jeong on 1/2/24.
//

#include <iostream>
double factorial(double n);
int main(int argc, const char * argv[]) {
    int n, k, t;
    double result;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d %d", &k, &n);
        result = factorial(n) / factorial(n-k) / factorial(k);
        printf("%.lf\n", result);
    }
    
}
double factorial(double n){
    double result = 1;
    if(n<=1) return 1;
    else result *= n*factorial(n-1);
    
    return result;
}
