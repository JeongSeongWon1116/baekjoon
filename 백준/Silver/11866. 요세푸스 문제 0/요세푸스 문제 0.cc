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
    int n, a, k, b;
    int count = 0;
    std::queue<int> queue;
    scanf("%d %d", &n, &k);
    for(int i = 1; i<=n; i++){
        queue.push(i);
    }
    a = 1;
    printf("<");
    while(!queue.empty()){
        if(a==k) {
            b = queue.front();
            queue.pop();
            printf("%d", b);
            a = 0;
            count++;
            if(count != n) printf(", ");
        }
        else{
            b = queue.front();
            queue.pop();
            queue.push(b);
        }
        a++;
    }
    printf(">");
}
