#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a;
int main(){
    int n;
    scanf("%d", &n);
    int b;
    for(int i = 0; i<n; i++){
        scanf("%d", &b);
        a.push_back(b);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        printf("%d\n", a[i]);
    }
    
}