#include <iostream>
int main(){
    std::string s1, s2;
    std::cin >> s1 >> s2;
    char temp;
    temp = s1.at(0);
    s1.at(0) = s1.at(2);
    s1.at(2) = temp;
    temp = s2.at(0);
    s2.at(0) = s2.at(2);
    s2.at(2) = temp;
    int a, b;
    a = stoi(s1);
    b = stoi(s2);
    if(a>b) printf("%d",a);
    else printf("%d", b);
}

