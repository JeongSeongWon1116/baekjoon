//
//  main.cpp
//  baekjoon
//
//  Created by SeongWon Jeong on 1/2/24.
//

#include <iostream>
int factorial(int n);
int main(int argc, const char * argv[]) {
    int n, k, result;
    scanf("%d %d", &n, &k);
    result = factorial(n) / factorial(n-k) / factorial(k);
    printf("%d", result);
}
int factorial(int n){
    int result = 1;
    if(n<=1) return 1;
    else result *= n*factorial(n-1);
    
    return result;
}
