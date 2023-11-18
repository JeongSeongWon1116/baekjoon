#include <iostream>
#include <algorithm>
bool desc(int a, int b){
    return a > b;
}

int main(){
    int n,m;
    std::cin >> n >> m;
    int a[100] = {0};
    for(int i = 0; i<n; i++){
        std::cin >> a[i];
    }
    int sum;
    int max = 0;
    std::sort(a, a + n, desc);
    for(int i = 0; i<n; i++){
        
        for(int j = i + 1; j<n; j++){
            
            for(int k = j +1; k <n; k++){
                sum = 0;
                sum += a[i];
                sum += a[k];
                sum += a[j];
                if(sum > m) continue;
                if(max < sum) max = sum;
            }
        }
    }
    printf("%d", max);
}
