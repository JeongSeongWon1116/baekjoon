#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<int, int> a;
int main(){
    
    int n, m, x;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        a[x]++;
    }
    std::cin >> m;
    for(int i = 0; i<m; i++){
        scanf("%d", &x);
        if(a[x] !=0) {
            printf("1 ");
        }
        else printf("0 ");
    }
}
