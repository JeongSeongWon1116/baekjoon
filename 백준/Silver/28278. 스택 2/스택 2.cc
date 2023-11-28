#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <math.h>
#include <stack>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    std::stack<int> stack;
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        switch(a){
            case 1:
                scanf("%d", &b);
                stack.push(b);
                break;
            case 2:
                if(stack.empty()) printf("-1\n");
                else {
                    printf("%d\n", stack.top());
                    stack.pop();
                }
                break;
            case 3:
                printf("%d\n", (int)stack.size());
                break;
            case 4:
                if(stack.empty()) printf("1\n");
                else printf("0\n");
                break;
            case 5:
                if(stack.empty()) printf("-1\n");
                else {
                    printf("%d\n", stack.top());
                }
                break;
            default:
                break;
        }
    }
    
}
