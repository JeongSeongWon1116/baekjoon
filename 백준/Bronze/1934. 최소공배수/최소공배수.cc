#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int a, b, n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);
        map<int, int> x;
        map<int, int> y;
        int j = 2;
        int result = 1;
        while(a>=j){
            if(a%j == 0) {
                a/=j;
                x[j]++;
                result *=j;
            }
            else j++;
        }
        j = 2;
        while(b>=j){
            if(b%j == 0) {
                b/=j;
                y[j]++;
                if(x[j]<y[j]) result *=j;
            }
            else j++;
        }
        printf("%d\n", result);
        
    }
}
