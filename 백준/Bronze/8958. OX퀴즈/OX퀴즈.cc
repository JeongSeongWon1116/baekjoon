#include <iostream>
int main(){
    int n;
    scanf("%d", &n);
    std::string s;
    int count = 0;
    bool still = false;
    int sum = 0;
    for(int i = 0; i<n; i++){
        std::cin >> s;
        count = 0;
        sum = 0;
        for(int j = 0; j<s.size();j++){
            if(s[j] == 'O') count++;
            else count = 0;
            sum += count;
        }
        printf("%d\n", sum);
    }
}
