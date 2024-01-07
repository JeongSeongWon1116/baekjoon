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
    int n, a, freq = 0;
    double sum = 0;
    std::map<int, int> freq_map;
    int mid;
    int min = 4001;
    int max = -4001;
    std::map<int, int> map;
    std::map<int, int>::iterator it;
    std::map<int, int>::iterator it2;
    scanf("%d", &n);
    
    for(int i = 0 ; i < n; i++){
        scanf("%d", &a);
        sum += a;
        if(a>max) max = a;
        if(a<min) min = a;
        map[a]++;
        if(map[a]>freq) {
            freq_map.clear();
            freq_map[a]++;
            freq = map[a];
        }
        else if(map[a] == freq){
            freq_map[a]++;
        }
    }
    it = map.begin();
    it2 = freq_map.begin();
    mid = n/2;
    for(int i = 0; i<mid; i++){
        if(it->second > 1) {
            it->second--;
            continue;
        }
        it++;
    }
    printf("%d\n", (int)round(sum/n));
    printf("%d\n", it->first);
    if(freq_map.size() == 1) printf("%d\n", it2->first);
    else{
        it2++;
        printf("%d\n", it2->first);
    }
//    printf("%d\n", freq_num_second);
    printf("%d", max-min);
}
