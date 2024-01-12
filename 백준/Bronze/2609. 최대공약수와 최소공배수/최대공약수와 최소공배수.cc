#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <math.h>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
typedef pair<int, int> ii;

int main(){
    ios::sync_with_stdio(false);
    int n, m, gap;
    int resultn = 1, resultm = 1;
    int min, max;
    scanf("%d %d", &n, &m);
    std::map<int, int> ndivisor;
    std::map<int, int> mdivisor;
    int i = 2;
    while(i<=n){
        if(n%i==0){
            n /= i;
            ndivisor[i]++;
        }
        else{
            i++;
        }
    }
    int j = 2;
    while(j<=m){
        if(m%j==0){
            m /= j;
            mdivisor[j]++;
        }
        else{
            j++;
        }
    }
    if(i>j) max = i;
    else max = j;
    for(int k = 2; k<=max; k++){
        if(ndivisor[k]==0){
            resultm *= pow(k, mdivisor[k]);
            continue;
        }
        else if(mdivisor[k] == 0) {
            resultm *= pow(k, ndivisor[k]);
            continue;
        }
        gap = ndivisor[k] - mdivisor[k];
        if(gap == 0){
            resultn *= pow(k, ndivisor[k]);
            resultm *= pow(k, ndivisor[k]);
        }
        else if(gap >0){
            resultn *= pow(k, mdivisor[k]);
            resultm *= pow(k, ndivisor[k]);
        }
        else{
            resultn *= pow(k, ndivisor[k]);
            resultm *= pow(k, mdivisor[k]);
        }
            
        
    }
    printf("%d\n%d", resultn, resultm);
}
