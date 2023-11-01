#include <iostream>
int main(){
    int max = 0;
    char a[6][17] = {'\0'};
    std::string s;

    for(int i = 0; i<5; i++){
        getline(std::cin, s);
        if(max< s.size()) max = (int)s.size();
        for(int j = 0; j<s.size(); j++){
            a[i][j] = s[j];
        }
    }
    for(int i = 0; i<max;i++){
        for(int j = 0; j<5; j++){
            if(a[j][i] == '\0')continue;
            printf("%c",a[j][i]);
        }
    }
}
