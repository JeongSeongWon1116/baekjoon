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
#define max_size 500000
int int_array[max_size];
using namespace std;
int count1, k, result;
void merge_sort(int p, int r);
void merge(int p, int q, int r);
int main(){
    int n, a;
    scanf("%d %d", &n, &k);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        int_array[i] = a;
    }
    merge_sort(0, n-1);
    if(k>count1) printf("-1");
    else printf("%d", result);

}
void merge_sort(int p, int r){
    int q;
    if(p<r){
        q = (p+r) / 2;
        merge_sort(p, q);
        merge_sort(q+1, r);
        merge(p, q, r);
    }
}
void merge(int p, int q, int r){
    int i = p, j= q + 1, t = 1;
    int tmp[max_size];
    while(i <= q && j <= r){
        if(int_array[i] <= int_array[j]){
            tmp[t++] = int_array[i++];
        }
        else tmp[t++] = int_array[j++];
    }
    while (i <= q){
        tmp[t++] = int_array[i++];
    }
    while(j <= r){
        tmp[t++] = int_array[j++];
    }
    i = p;
    t = 1;
    while(i <= r){
        count1++;
        if(k==count1) result = tmp[t];
        int_array[i++] = tmp[t++];
    }
    
}
