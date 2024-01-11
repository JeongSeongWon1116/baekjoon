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
    int k = 0;
    if(sel.empty()) k = 0;
    else{
        k = sel[sel.size()-1];
    }
    if(m==1){
        if(sel.empty()){
            for(int i = 0; i<n; i++){
                printf("%d\n", i+1);
            }
        }
        else{
            
            for(int i = k; i<n;i++){
                sel.push_back(i);
                
                permutation(m-1, n, set, sel);
                sel.pop_back();
                
            }
        }
    }
    else if (m==0){
        for(int i =0; i<sel.size();i++){
            printf("%d ", sel[i] + 1);
        }
        printf("\n");
    }
    else{

        for(int i = k; i<n;i++){
            sel.push_back(i);
            
            permutation(m-1, n, set, sel);
            sel.pop_back();
            
            
            
        }
    }
}
