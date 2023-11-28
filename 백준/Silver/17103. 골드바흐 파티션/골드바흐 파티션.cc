#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <math.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n, a;
    std::vector<bool> p(1000001, true);
    p[0] = false;
    p[1] = false;
    // 소수들의 배수들을 제거 하는 작업.
    for(int i = 2; i<1000000; i++){
        if(p[i]){
            int j = 2;
            while(i*j <= 1000000){
                p[i*j] = false;
                j++;
            }
        }
    }
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        int count = 0;
        int j = 2;
        int k;
        while(j<=(a/2)){
            if(p[j]) {
                k = a-j;
                if(p[k]) count++;
            }
            j++;
        }
        printf("%d\n", count);
    }
    
}
