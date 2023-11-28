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
    unsigned int n, a, j;

    scanf("%u", &n);
    for(int i = 0; i<n; i++){
        scanf("%u", &a);
        if(a==0 || a == 1) {
            printf("2\n");
            continue;
        }
        while(true){
            j = 2;
            while((sqrt(a))>=j){
                if(a%j == 0) break;
                else {
                    j++;
                }
                
            }
            if((sqrt(a))<j) {
                printf("%u\n", a);
                break;
            }
            a++;
        }
    }
    
}
