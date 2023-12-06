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
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n,a,b;
    std::list<int> deck;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        switch(a){
            case 1:
                scanf("%d", &b);
                deck.push_front(b);
                break;
            case 2:
                scanf("%d", &b);
                deck.push_back(b);
                break;
            case 3:
                if(deck.empty()){
                    printf("-1\n");
                }
                else{
                    printf("%d\n", deck.front());
                    deck.pop_front();
                }
                break;
            case 4:
                if(deck.empty()){
                    printf("-1\n");
                }
                else{
                    printf("%d\n", deck.back());
                    deck.pop_back();
                }
                break;
            case 5:
                printf("%d\n", (int)deck.size());
                break;
            case 6:
                printf("%d\n", deck.empty());
                break;
            case 7:
                if(deck.empty()){
                    printf("-1\n");
                }
                else{
                    printf("%d\n", deck.front());
                }
                break;
            case 8:
                if(deck.empty()){
                    printf("-1\n");
                }
                else{
                    printf("%d\n", deck.back());
                }
                break;
            default:
                break;
        }
    }
}
