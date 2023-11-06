#include <iostream>
#include <cmath>
int main(){
    std::string s;
    int radix;
    std::cin >> s >> radix;
    long result = 0;
    int length = (int)s.size();
    int a;
    int j = 0;
    if(radix > 10){
        for(int i = length -1 ; i>=0; i--){
            a = s[i] - '0';
            if(a>9){
                a = a +'0' -'A' + 10;
            }
            result += a * pow(radix, j);
            j++;
        }
    }
    else if(radix == 10) result = std::stoi(s);
    else{
        for(int i = length -1 ; i>=0; i--){
            a = s[i] - '0';
            result += a * pow(radix, j);
            j++;
        }
    }
    printf("%ld", result);
}
