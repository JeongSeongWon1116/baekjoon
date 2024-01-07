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
int num[2] = {0, 1};
int cal(int n);
int main(){
    ios::sync_with_stdio(false);
    int n;
    int result;
    scanf("%d", &n);
    result = cal(n);
    printf("%d", result);
}
int cal(int n){
    int result = 0;
    if(n<=0) return 0;
    else if(n==1) return 1;
    result += cal(n-1) + cal(n-2);
    return result;
}
