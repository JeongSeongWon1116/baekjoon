//
//  main.cpp
//  baekjoon
//
//  Created by SeongWon Jeong on 1/3/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n, a;
    int max = 0;
    int min = 1000000;
    scanf("%d", &n);
    if(n == 1){
        scanf("%d", &a);
        printf("%d", a*a);
        return 0 ;
    }
    for(int i = 0;i<n; i++){
        scanf("%d", &a);
        if(a>max){
            max = a;
        }
        if(a<min) min = a;
    }
    printf("%d", max*min);
    
}

