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
typedef pair<int, int> ii;

int main(){
    ios::sync_with_stdio(false);
    int a, b, c;
    int A, B, C;
    int max;
    while(true){
        scanf("%d %d %d", &a, &b, &c);
        A = a*a;
        B = b*b;
        C = c*c;
        if(a == 0 && b == 0 && c == 0) break;
        if(a>b){
            if(a>c){
                if(A == B + C) printf("right\n");
                else printf("wrong\n");
            }
            else{
                if(C == B + A) printf("right\n");
                else printf("wrong\n");
            }
        }
        else{
            if(b>c){
                if(B == A + C) printf("right\n");
                else printf("wrong\n");
            }
            else{
                if(C == B + A) printf("right\n");
                else printf("wrong\n");
            }
        }
    }
    
}
