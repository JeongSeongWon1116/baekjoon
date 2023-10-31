#include <iostream>
int main(){
    std::string s;
    while(true){
        getline(std::cin, s);
        if(std::cin.eof()) break;
        std::cout<<s;
        printf("\n");
    }
}