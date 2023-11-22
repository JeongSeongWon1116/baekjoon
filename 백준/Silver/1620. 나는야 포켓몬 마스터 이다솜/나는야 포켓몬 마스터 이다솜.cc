#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
unordered_map<string, int> a;
unordered_map<int, string> a1;
int main(){
    ios::sync_with_stdio(false);
    int n,m;
    scanf("%d %d", &n, &m);
    char s[21];
    int k;
    for(int i = 0; i<n; i++){
        scanf("%s", s);
        a[s] = i;
        a1[i] = s;
    }
    for(int i = 0; i<m; i++){
        scanf("%s", s);
        if(s[0]>='0' && s[0]<='9') printf("%s\n", a1[atoi(s)-1].c_str());
        else {
            printf("%d\n", a[s] +1);
        }
        
    }
}
