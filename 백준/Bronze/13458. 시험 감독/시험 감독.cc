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
typedef pair<int, int> ii;

int main(){
    int n, x, b, c;
    std::vector<int> a;
    unsigned long int result = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &x);
        a.push_back(x);
    }
    scanf("%d %d", &b, &c);
    for(int i = 0; i<n; i++){
        x = a[i];
        x -= b;
        if(x <= 0) {
            result++;
            continue;
        }
        if(x % c == 0) result += x/c;
        else result += x/c + 1;
        result++;
    }
    printf("%lu", result);
}

