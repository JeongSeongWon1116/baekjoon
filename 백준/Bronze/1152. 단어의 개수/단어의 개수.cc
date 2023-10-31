#include <iostream>
int main(){
    std::string s;
    int count = 0;
    getline(std::cin, s);
    for(int i = 1; i<s.size()-1;i++){
        if(s.at(i)==' ') count++;
    }
    if(s.size() == 1){
        if(s.at(0) == ' ') count--;
    }
    std::cout << count+1;
}

