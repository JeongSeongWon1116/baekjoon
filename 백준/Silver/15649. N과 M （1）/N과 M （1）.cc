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
typedef pair<std::string, int> p;
void permutation(int m, int n, std::set<int> set, std::vector<int> sel);
int main(){
    ios::sync_with_stdio(false);
    int n, m;
    std::set<int> set;
    std::vector<int> sel;
    scanf("%d %d", &n, &m);
    permutation(m, n, set, sel);
}
void permutation(int m, int n, std::set<int> set, std::vector<int> sel){
    if(m==1){
        if(sel.empty()){
            for(int i = 0; i<n; i++){
                printf("%d\n", i+1);
            }
        }
        else{
            std::set<int>::iterator iter;
            for(int i = 0; i<n;i++){
                iter = set.find(i);
                if(iter != set.end()) continue;
                for(int j = 0; j<sel.size(); j++){
                    printf("%d ", sel[j]+1);
                }
                printf("%d\n", i+1);
            }
        }
    }
    else{
        std::set<int>::iterator iter;
        for(int i = 0; i<n;i++){
            iter = set.find(i);
            if(iter != set.end()) continue;
            else{
                sel.push_back(i);
                set.insert(i);
                permutation(m-1, n, set, sel);
                sel.pop_back();
                set.erase(i);
            }
            
        }
    }
}
