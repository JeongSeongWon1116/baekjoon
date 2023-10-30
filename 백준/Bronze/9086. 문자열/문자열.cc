#include <iostream>
int main(){
    int n;
    std::cin>>n;
    std::string s;
    for(int i = 0; i<n; i++){
        std::cin >> s;
        printf("%c%c\n", s.at(0), s.at(s.size()-1));
    }
}

