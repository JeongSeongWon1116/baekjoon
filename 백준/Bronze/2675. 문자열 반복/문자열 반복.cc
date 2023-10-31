#include <iostream>
int main(){
    int n;
    std::cin>> n;
    std::string s;
    int r;
    for(int i = 0; i<n; i++){
        std::cin >>r >> s;
        for(int j = 0; j<s.size(); j++){
            for(int k = 0; k < r; k++){
                printf("%c", s.at(j));
            }
            
        }
        printf("\n");
        
    }
}

