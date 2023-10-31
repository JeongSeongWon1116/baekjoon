#include <iostream>
int main(){
    std::string s;
    std::cin >> s;
    int l = (int)s.size();
    bool a = false;
    for(int i = 0; i<s.size();i++){
        if(i>=l/2) break;
        if(s.at(i) == s.at(l-i-1)){
            a = true;
        }
        else{
            a = false;
            break;
        }
    }
    if(l == 1) a = true;
    printf("%d", a);
}
