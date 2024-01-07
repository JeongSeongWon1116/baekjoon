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
void can(int n);
int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        can(n);
        printf("\n");
    }
    return 0;

}
void can(int n){
    if(n==0)printf("-");
    else{
        int pown = pow(3,n);
        int i = 0;
        int j = pown/3;
        int k = j + pown/3 - 1;
        for(; i<pown;){
            if(i>=j && i<=k){
                printf(" ");
                i++;
            }
            else {
                can(n-1);
                i+=pown/3;
            }
        }
    }
}
