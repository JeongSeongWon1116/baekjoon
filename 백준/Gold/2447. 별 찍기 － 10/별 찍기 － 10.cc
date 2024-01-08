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

void star(int i, int j, int k);
int main(){
    int k;
    scanf("%d", &k);
    for(int i = 0; i<k; i++){
        for(int j = 0; j<k; j++){
            star(i, j , k);
        }
        printf("\n");
    }
}
void star(int i, int j, int k){
    if(k == 1) printf("*");
    else{
        int mid = k / 3;
        int begin = mid;
        int end = begin + mid - 1;
        int x, y;
        x = i % k;
        y = j % k;
        if((x>= begin && x <=end) && (y>= begin && y <=end)){
            printf(" ");
        }
        else star(i, j, k/3);
    }
}
