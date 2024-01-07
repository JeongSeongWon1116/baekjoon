#include <iostream>
#include <map>
#include <cstring>
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
unsigned long long int fac(int a);
int main(){
    ios::sync_with_stdio(false);
    int n;
    unsigned long long int result = 1;
    scanf("%d", &n);
    result = fac(n);
    printf("%llu", result);
}
unsigned long long int fac(int a){
    unsigned long long int result = 1;
    if(a <= 1) return result;
    else {
        result *= a*fac(a-1);
    }
    return result;
}
