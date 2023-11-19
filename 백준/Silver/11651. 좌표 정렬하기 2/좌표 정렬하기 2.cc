#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    vector<pair<int, int>> a;
    std::cin >> n;
    int b, c;
    for(int i = 0; i<n; i++){
        std::cin >> c >> b;
        a.push_back({b,c});
    }
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        printf("%d %d\n", a[i].second, a[i].first);
    }
    
}
