#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
unordered_map<string, int> a;
bool cmp(pair<std::string, int>& x, pair<std::string, int>& y){
    return x.first.compare(y.first) > 0;
}
int main(){
    int n;
    std::string s1, s2;
    
    std::cin >> n;
    for(int i = 0; i<n; i++){
        std::cin >> s1 >> s2;
        if(s2.compare("enter")==0) a[s1];
        else a.erase(s1);
    }
    vector<pair<std::string, int>> a2(a.begin(), a.end());
    sort(a2.begin(), a2.end(), cmp);
    for(auto& p : a2)
        std::cout << p.first << "\n";
}
