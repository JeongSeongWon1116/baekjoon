#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<string, int> a;
int main(){
    int n,m;
    int count = 0;
    std::string s;
    std::cin >> n >> m;
    for(int i = 0; i<n; i++){
        std::cin >> s;
        a[s]++;
    }
    for(int i = 0; i<m; i++){
        std::cin >> s;
        if(a[s] != 0) count++;
    }
    std::cout << count;
}
