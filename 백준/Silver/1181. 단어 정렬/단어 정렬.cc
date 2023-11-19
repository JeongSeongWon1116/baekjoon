#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    std::cin >> n;
    std::vector<std::string> arr;
    std::vector<std::string> result_arr;
    
    std::string s;
    for(int i = 0; i<n; i++){
        std::cin >> s;
        arr.push_back(s);
    }
    for(int i = 1; i<=50; i++){
        std::vector<std::string> sort_arr;
        for(int j = 0; j<n; j++){
            if((int)arr[j].size() == i){
                sort_arr.push_back(arr[j]);
            }
        }
        sort(sort_arr.begin(), sort_arr.end());
        for(int j = 0; j<sort_arr.size();j++){
            result_arr.push_back(sort_arr[j]);
        }
    }
    std::cout << result_arr[0];
    std::cout<<"\n";
    for(int i = 1; i<n; i++){
        if(!result_arr[i].compare(result_arr[i-1])){
            continue;
        }
        std::cout << result_arr[i];
        std::cout<<"\n";
    }
    
}
