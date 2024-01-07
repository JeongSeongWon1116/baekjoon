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
int main(){
    ios::sync_with_stdio(false);
    int n,m;
    std::string s;
    std::map<std::string, int> map;
    std::cin >> n >> m;
    for(int i = 0 ;i<n; i++){
        std::cin >> s;
        if(s.length() >= m) map[s]++;
    }
    std::vector<p> vec(map.begin(), map.end());
    sort(vec.begin(), vec.end(), [](p a, p b){
        if(a.second == b.second) {
            if(a.first.size() == b.first.size()) return a.first < b.first;
            return a.first.size() > b.first.size();
        }
        return a.second > b.second;
    });
    for(p it : vec){
        std::cout << it.first << "\n";
    }
    
}
