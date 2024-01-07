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
    int n, result = 0;
    std::string s;
    std::map<std::string, int> map;
    std::cin >> n;
    for(int i = 0; i<n; i++){
        std::cin >> s;
        if(s.compare("ENTER")==0){
            result += map.size();
            map.clear();
        }
        else{
            map[s]++;
        }
    }
    result += map.size();
    printf("%d", result);
}
