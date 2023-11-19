#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
int main(){
    int n;
    vector<tuple<int, int ,std::string>> a;
    std::cin >> n;
    int b;
    std::string s;
    for(int i=0; i < n; i++){
        std::cin >> b >> s;
        a.push_back(make_tuple(b,i,s));
    }
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        std::cout << get<0>(a[i]) << " " << get<2>(a[i]) << "\n";
    }
    
}
