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
    char s[6];
    for(int i = 0; i<n; i++){
        scanf("%s", s);
        if(strcmp(s, "push")==0){
            scanf("%d", &a);
            queue.push(a);
        }
        else if(strcmp(s,"pop")==0){
            if(queue.empty()) printf("-1\n");
            else{
                a = queue.front();
                queue.pop();
                printf("%d\n", a);
            }
        }
        else if(strcmp(s,"size")==0){
            printf("%d\n", (int)queue.size());
        }
        else if(strcmp(s,"empty")==0){
            printf("%d\n", queue.empty());
        }
        else if(strcmp(s,"front")==0){
            if(queue.empty()) printf("-1\n");
            else{
                a = queue.front();
                printf("%d\n", a);
            }
        }
        else if(strcmp(s,"back")==0){
            if(queue.empty()) printf("-1\n");
            else{
                a = queue.back();
                printf("%d\n", a);
            }
        }
    }
}
