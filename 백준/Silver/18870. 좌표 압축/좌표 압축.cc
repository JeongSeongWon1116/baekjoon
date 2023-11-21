#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int x;
    int count =0;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    std::cin >> n;
    
    
    for(int i = 0 ; i<n; i++){
        std::cin >> x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    b.push_back({get<1>(a[0]), 0});
    for(int i = 1; i <n; i++){
        if(get<0>(a[i-1])==get<0>(a[i])){
            count++;
        }
        b.push_back({get<1>(a[i]), i-count});
    }
    sort(b.begin(), b.end());
    for(int i = 0; i <n; i++){
        printf("%d ", get<1>(b[i]));
    }
}
