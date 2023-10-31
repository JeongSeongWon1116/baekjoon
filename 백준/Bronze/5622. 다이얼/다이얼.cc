#include <iostream>
int main(){
    std::string s;
    std::cin >> s;
    int count = 0;
    int a;
    for(int i = 0; i<s.size();i++){
        a = s.at(i) - 'A';
        if(a<3) count +=3;
        else if(a<6) count +=4;
        else if(a<9) count +=5;
        else if(a<12) count +=6;
        else if(a<15) count +=7;
        else if(a<19) count +=8;
        else if(a<22) count +=9;
        else count +=10;
        
    }
    std::cout << count;
}

