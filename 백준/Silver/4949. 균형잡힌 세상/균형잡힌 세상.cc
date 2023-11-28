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
    std::string s;
    bool ck;
    while(true){
        std::getline(std::cin, s);
        if(!s.compare(".")) break;
        std::stack<int> stack1;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                stack1.push(1);
                ck = true;
            }
            else if(s[i] == '['){
                stack1.push(2);
                ck = false;
            }
            else if(s[i] == ')'){
                if(stack1.empty()){
                    std::cout << "no\n";
                    goto End;
                }
                if(stack1.top() != 1){
                    std::cout << "no\n";
                    goto End;
                }
                stack1.pop();
            }
            else if(s[i] == ']'){
                if(stack1.empty()){
                    std::cout << "no\n";
                    goto End;
                }
                if(stack1.top() != 2){
                    std::cout << "no\n";
                    goto End;
                }
                stack1.pop();
            }
        }
        if(stack1.empty()) std::cout << "yes\n";
        else std::cout << "no\n";
        
    End:;
    }
}
