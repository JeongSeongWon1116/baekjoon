#include <iostream>
int main(){
    char a[26] = {0};
    std::string s;
    std::cin >> s;
    for(int i = 0; i<26; i ++){
        a[i] = -1;
    }
    for(int i = 0; i<s.size(); i++){
        if(a[s.at(i)-'a'] == -1) a[s.at(i)-'a'] = i;
    }
    for(int i = 0; i<26; i ++){
        printf("%d ", a[i]);
    }
}

