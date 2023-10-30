#include <iostream>
int main(){
    int n;
    std::string s;
    std::cin >> n >> s;
    int sum = 0;
    
    for(int i = 0; i<n; i++){
        sum += s.at(i) - '0';
    }
    printf("%d", sum);
}
