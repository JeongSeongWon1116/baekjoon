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
    
    int n;
    std::string s;
    std::cin >> n;
    for(int i = 0; i<n; i++){
        std::cin >> s;
        std::stack<int> stack;
        for(int j = 0; j<s.size();j++){
            if(s[j] == '('){
                stack.push(1);
            }
            if(s[j] == ')'){
                if(stack.empty()){
                    std::cout << "NO" << "\n";
                    goto End;
                }
                stack.pop();
            }
        }
        if(stack.empty()) std::cout << "YES" << "\n";
        else std::cout << "NO" << "\n";
    End:;
    }
    
    
}
