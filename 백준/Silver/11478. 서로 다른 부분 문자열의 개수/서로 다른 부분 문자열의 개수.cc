#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
//map<std::string, int> a;

int main(){
    ios::sync_with_stdio(false);
    std::string x, y;
    std::cin >> x;
    std::set<std::string> a;
    int n =(int)x.size();
    for(int i = 0; i<n;i++){
        y = "";
        for(int j = i; j<n;j++){
            y += x[j];
            a.insert(y);
        }
    }
    std::cout << a.size();
}
