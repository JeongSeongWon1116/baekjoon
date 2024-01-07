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
    std::string s1, s2;
    std::map<std::string, int> map;
    std::map<std::string,int>::iterator it;
    map["ChongChong"]++;
    std::cin >> n;
    for(int i = 0; i<n; i++){
        std::cin >> s1 >> s2;
        it = map.find(s1);
        if (it != map.end()){
            map[s2]++;
        }
        it = map.find(s2);
        if (it != map.end()){
            map[s1]++;
        }
              
    }
    result =(int)map.size();
    printf("%d", result);
}
