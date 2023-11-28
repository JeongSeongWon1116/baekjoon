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
    int n;
    scanf("%d", &n);
    int i = 1;
    while(i*i<=n){
        i++;
    }
    printf("%d", i-1);
    
}
