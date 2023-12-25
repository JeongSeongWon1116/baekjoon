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
    int n, a;
    std::map<int, int> map;
    scanf("%d", &n);
    for(int i = 0 ; i<n; i++){
        scanf("%d", &a);
        map[a]++;
    }
    scanf("%d", &n);
    for(int i = 0 ; i<n; i++){
        scanf("%d", &a);
        if(map[a]>=1){
            printf("1\n");
        }
        else printf("0\n");
    }
}
