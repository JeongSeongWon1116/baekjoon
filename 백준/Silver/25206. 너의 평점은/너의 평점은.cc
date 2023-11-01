#include <iostream>
#include <string>
#include <vector>
#include <sstream>
std::vector<std::string> split(std::string str, char Delimiter) {
    std::istringstream iss(str);             // istringstream에 str을 담는다.
    std::string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    std::vector<std::string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}
int main(){
    std::string s;
    int n;
    double b=0;
    int c = 0;
    double sum = 0;
    for(int i = 0; i<20; i++){
        getline(std::cin, s);
        std::vector<std::string> result = split(s, ' ');
        n = stoi(result[1]);
        if(result[2].compare("A+")==0) b = 4.5;
        else if(result[2].compare("A0")==0) b = 4.0;
        else if(result[2].compare("B+")==0) b = 3.5;
        else if(result[2].compare("B0")==0) b = 3.0;
        else if(result[2].compare("C+")==0) b = 2.5;
        else if(result[2].compare("C0")==0) b = 2.0;
        else if(result[2].compare("D+")==0) b = 1.5;
        else if(result[2].compare("D0")==0) b = 1.0;
        else if(result[2].compare("F")==0) b = 0;
        else if(result[2].compare("P")==0) {
            continue;
        }
        c+=n;
        sum += n * b;
    }
    printf("%lf", sum/c);
}
