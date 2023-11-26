#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int a, b, c, d, e;
    map<int, int> x, y, f, g;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    int copy_b = b;
    int copy_d = d;
    int j = 2;
    int result = 1;
    
    while(b>=j){
        if(b%j==0){
            b /= j;
            x[j]++;
            result *=j;
        }
        else j++;
    }
    j = 2;
    while(d>=j){
        if(d%j==0){
            d /= j;
            y[j]++;
            if(x[j]<y[j]) result *= j;
        }
        else j++;
    }
    a =a* (result/copy_b);
    c =c* (result/copy_d);
    e = a + c;
    int result_a = e, result_b = result;
    j = 2;
    while(e>=j){
        if(e%j==0){
            e /= j;
            f[j]++;
        }
        else j++;
    }
    j = 2;
    while(result>=j){
        if(result%j==0){
            result /= j;
            g[j]++;
            if(f[j]>0){
                if(f[j]-g[j]>=0) {
                    result_a /= j;
                    result_b /= j;
                }
            }
        }
        else j++;
    }
    printf("%d %d", result_a, result_b);
}
