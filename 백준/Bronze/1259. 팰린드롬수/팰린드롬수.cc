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
typedef pair<int, int> p;

int main(){
    ios::sync_with_stdio(false);
    int n;
    int d;
    bool ck;
    while(true){
        int k[5] = {0};
        scanf("%d", &n);
        if(n == 0) break;
        d = (int)log10(n);
        if(d==0) printf("yes\n");
        else{
            ck = true;
            for(int i = 0; i<=d; i++){
                k[i] = n / pow(10,(d-i));
                n -= k[i] * pow(10,(d-i));
            }
            for(int i = 0; i<=d; i++){
                if(k[i] == k[d-i]) ck = true;
                else{
                    ck = false;
                    printf("no\n");
                    break;
                }
            }
            if(ck) printf("yes\n");
        }
    }
}
