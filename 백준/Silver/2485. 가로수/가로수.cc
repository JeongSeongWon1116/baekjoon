#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n,a;
    scanf("%d", &n);
    int x[100000];
    int z = 1;
    int dif[100000];
    std::set<int> result;
    scanf("%d", &a);
    x[0] = a;
    bool cheak = false;
    for(int i = 1; i<n; i++){
        scanf("%d", &a);
        x[i] = a;
        dif[i-1] = (x[i] - x[i-1]);
    }
    int j = 2;
    while(dif[0]>=j){
        cheak = false;
        for(int i = 0; i<n-1; i++){
            if(dif[i] % j == 0){
                cheak = true;
            }
            else {
                cheak  = false;
                break;
            }
        }
        if(cheak) {
            z *= j;
            for(int i = 0; i<n-1; i++){
                dif[i] /= j;
            }
        }
        else{
            j++;
        }
    }
    
    printf("%d", (x[n-1] - x[0])/z + 1 - n);
    
}
