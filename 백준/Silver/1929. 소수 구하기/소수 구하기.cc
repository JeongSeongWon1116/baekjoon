#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <math.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    unsigned int n,m, a, j;
    scanf("%u %u", &n, &m);
    a=n;
    while(a<=m){
        if(a==1) {
            a++;
            continue;
        }
        j=2;
        while(sqrt(a)>=j){
            if(a%j==0) break;
            else j++;
        }
        if(sqrt(a)<j){
            printf("%u\n", a);
        }
        a++;
    }
    
}
