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
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n, a;
    std::queue<int> queue;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        queue.push(i);
    }
    while(true){
        if(queue.size()==1) break;
        queue.pop();
        a = queue.front();
        queue.pop();
        queue.push(a);
    }
    printf("%d", queue.front());
}
