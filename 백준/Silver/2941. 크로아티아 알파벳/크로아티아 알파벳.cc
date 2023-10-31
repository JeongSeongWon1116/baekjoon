#include <iostream>
int main(){
    std::string s;
    std::cin >> s;
    int count = 0;
    for(int i = 0; i<s.size();i++){
        if(i>=s.size()-1){
            count ++;
            break;
        }
        if(s.at(i) == 'c') {
            if(s.at(i+1) == '=' || s.at(i+1) == '-'){
                i++;
            }
        }
        else if(s.at(i) == 'd') {
            if(s.at(i+1) == '-'){
                i++;
            }
            else if(i>=s.size()-2){
                count +=2;
                break;
            }
            else if(s.at(i+1)== 'z' && s.at(i+2) == '='){
                i +=2;
            }
        }
        else if(s.at(i) == 'l' || s.at(i) == 'n') {
            if(s.at(i+1) == 'j'){
                i++;
            }
        }
        else if(s.at(i) == 's' || s.at(i) == 'z') {
            if(s.at(i+1) == '='){
                i++;
            }
        }
        count++;
    }
    printf("%d", count);
}
