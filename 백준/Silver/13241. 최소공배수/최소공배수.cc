#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    long long int a, b;
    map<int, int> x, y;
    scanf("%lld %lld", &a, &b);
    int j = 2;
    long long int result = 1;
    while(a>=j){
        if(a%j==0){
            a /= j;
            x[j]++;
            result *=j;
        }
        else j++;
    }
    j = 2;
    while(b>=j){
        if(b%j==0){
            b /= j;
            y[j]++;
            if(x[j]<y[j]) result *= j;
        }
        else j++;
    }
    printf("%lld", result);
}
