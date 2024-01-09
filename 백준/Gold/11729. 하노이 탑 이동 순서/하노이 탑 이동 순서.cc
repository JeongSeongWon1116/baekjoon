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

void hanoi(int from, int via, int to, int n);
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n) - 1);
    hanoi(1, 2, 3, n);
    
}
void hanoi(int from, int via, int to, int n){
    if(n == 1) printf("%d %d\n", from, to);
    else{
        hanoi(from, to, via, n-1);
        printf("%d %d\n", from, to);
        hanoi(via, from, to, n-1);
    }
}
