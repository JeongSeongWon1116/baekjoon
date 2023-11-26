#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
unordered_map<int, int> a;
unordered_map<int, string> a1;
int main(){
    ios::sync_with_stdio(false);
    int n,m;
    scanf("%d", &n);
    int x;
    for(int i = 0; i<n; i++){
        scanf("%d", &x);
        a[x]++;
    }
    scanf("%d", &m);
    for(int i = 0; i<m; i++){
        scanf("%d", &x);
        printf("%d ", a[x]);
    }
}
