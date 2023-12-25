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
typedef pair<int, int> p;

int main(){
    ios::sync_with_stdio(false);
    int n, a, b;
    p k, j;
    std::deque<p> deque;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        deque.push_back(make_pair(a, i+1));
    }
    k = deque.front();
    deque.pop_front();
    printf("1 ");
    while(!deque.empty()){
        b = k.first;
        if(b>0){
            for(int i = 0; i <b-1; i++){
                j = deque.front();
                deque.pop_front();
                deque.push_back(j);
            }
            k = deque.front();
            deque.pop_front();
        }
        else{
            b = abs(b);
            for(int i = 0; i <b-1; i++){
                j = deque.back();
                deque.pop_back();
                deque.push_front(j);
            }
            k = deque.back();
            deque.pop_back();
        }
        printf("%d ", k.second);
    }
}
