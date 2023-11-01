#include <iostream>
int main(){
    std::string s;
    int n;
    std::cin >> n;
    int check = 0;
    for(int j = 0; j<n; j++){
        std::cin >> s;
        
        int a[26] = {0};
        for(int i = 0; i<s.size()-1; i++){
            if(a[s.at(i)-'a'] != 0) {
                check++;
                break;
            }
            if(a[s.at(i+1)-'a'] != 0) {
                check++;
                break;
            }
            if(s.at(i) == s.at(i+1)){
                continue;
            }
            else{
                a[s.at(i)-'a']++;
            }
        }
        
    }
    printf("%d", n - check);
}
