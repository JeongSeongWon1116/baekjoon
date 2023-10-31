#include <iostream>
int main(){
    std::string s;
    std::cin >> s;
    int a[26] ={0};
    int max = 0;
    bool c = false;
    int count = 0;
    for(int i =0;i<s.size();i++){
        s[i] = toupper(s[i]);
        a[s.at(i)-'A']++;
    }
    for(int i = 0; i<26; i++){
        if(a[i]>max) {
            max = a[i];
            c = true;
            count = i;
        }
        else if(a[i] == max) c= false;
    }
    if(c){
        printf("%c", count + 'A');
    }
    else{
        printf("?");
    }
}
