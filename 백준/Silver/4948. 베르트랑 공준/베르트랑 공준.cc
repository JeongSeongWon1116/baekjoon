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
    unsigned int n,m, a, j;
    int count = 0;
    while(true){
        scanf("%u", &a);
        if(a==0) break;
        n = a+1;
        m = 2*a;
        count = 0;
        while(n<=m){
            if(n==1){
                n++;
                continue;
            }
            j = 2;
            while(sqrt(n) >= j){
                if(n%j==0) break;
                else j++;
                if(j%2==0) j++;
            }
            if(sqrt(n) < j){
                count++;
            }
            n++;
        }
        printf("%d\n", count);
    }
    
}
