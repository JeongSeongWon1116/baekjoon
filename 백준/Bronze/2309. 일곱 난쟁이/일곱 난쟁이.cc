#include <iostream>
#include <map>
#include <string.h>
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
    std::vector<int> v;
    std::vector<int> a;
    int n;
    for(int i = 0; i<9; i++){
        scanf("%d", &n);
        v.push_back(n);
    }
    int hund = 100;
    for(int j=0; j<8; j++){
        for(int k = j+1; k<9; k++){
            hund = 100;
            a.clear();
            for(int i = 0; i<9; i++){
                if(i == k || i == j) continue;
                a.push_back(v[i]);
                hund -= v[i];
                
            }
            if(hund == 0) break;
        }
        if(hund == 0) break;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i< 7; i++){
        printf("%d\n", a[i]);
    }
    
}

