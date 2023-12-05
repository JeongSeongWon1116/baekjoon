#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <math.h>
#include <stack>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n, a, b= 1;
    std::stack<int> stack;
    bool ck = true;
    int input[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        input[i] = a;
    }
    int j = 0;
    while(j<n){
        ck = true;
        a = input[j];
        if(a==b) {
            ck = false;
            b++;
        }
        if(!stack.empty()){
            while(!stack.empty()){
                if(stack.top()==b) {
                    b++;
                    stack.pop();
                    ck = false;
                }
                else break;
            }
        }
        if(ck){
            stack.push(a);
        }
        j++;
    }
    ck = true;
    while(!stack.empty()){
        if(stack.top()==b) {
            b++;
            stack.pop();
            ck = false;
        }
        else break;
    }
    if(b==n+1) printf("Nice");
    else printf("Sad");
}
