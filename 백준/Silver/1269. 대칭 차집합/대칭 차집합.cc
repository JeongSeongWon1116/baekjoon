#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
map<int, int> a;
map<int, int> b;
vector<int> c;

int main(){
    ios::sync_with_stdio(false);
    int n,m, x;
    scanf("%d %d", &n, &m);
    int count = 0;
    int result;
    for(int i = 0; i<n; i++){
        scanf("%d", &x);
        a[x]++;
    }
    for(int i = 0; i<m; i++){
        scanf("%d", &x);
        b[x]++;
        if(a[x]>0) count++;
    }
    result = n+m - count *2;
    printf("%d", result);
}
