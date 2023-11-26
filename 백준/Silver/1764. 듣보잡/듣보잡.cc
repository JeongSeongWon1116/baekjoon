#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
map<std::string, int> a;
vector<std::string> b;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    std::cin >> n >> m;
    std::string x;
    for(int i = 0 ; i<n; i++){
        std::cin >> x;
        a[x]++;
    }
    
    for(int i = 0; i<m;i ++){
        std::cin >> x;
        a[x]++;
        if(a[x] > 1) b.push_back(x);
    }
    int size = (int)b.size();
    sort(b.begin(), b.end());
    std::cout << size << "\n";
    for(int i = 0; i<size; i++){
        std::cout << b[i] << "\n";
    }
}
