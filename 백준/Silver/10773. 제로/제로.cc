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
    int n, a;
    int result = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        if(a==0){
            result -= stack.top();
            stack.pop();
        }
        else {
            stack.push(a);
            result += a;
        }
    }
    printf("%d", result);
    
}
