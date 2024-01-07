#include <iostream>
#include <map>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <math.h>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
typedef pair<std::string, int> p;
int count1;
int recursion(const char *s, int l, int r){
    count1++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int n;
    char s[1001];
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%s", s);
        count1 = 0;
        printf("%d %d\n", isPalindrome(s), count1) ;
    }
}
