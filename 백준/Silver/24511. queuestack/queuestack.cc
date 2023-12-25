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
    std::vector<int> vec;
    std::deque<int> queue;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        vec.push_back(a);
    }
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        if(vec[i]==0){
            queue.push_back(a);
        }
    }
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        queue.push_front(a);
        printf("%d ", queue.back());
        queue.pop_back();
    }
}
