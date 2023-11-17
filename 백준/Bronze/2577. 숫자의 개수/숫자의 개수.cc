#include <iostream>
int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    int result = a * b * c;
    std::string s = std::to_string(result);
    int n[10] = {0};
    for(int i = 0; i<s.size();i++){
        n[s[i] - '0']++;
    }
    for(int i = 0; i<10; i++){
        std::cout << n[i]<<std::endl;;
    }
}
