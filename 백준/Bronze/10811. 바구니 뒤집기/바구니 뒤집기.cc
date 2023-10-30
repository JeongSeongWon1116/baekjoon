#include <iostream>
int main(){
    int n, m;
    std::cin>> n >> m;
    int a[n];
    for(int i = 0; i <n; i++){
        a[i] = i + 1;
    }
    int b, c;
    for(int i = 0; i<m;i++){
        std::cin >> b >> c;
        b--;
        c--;
        int k = c;
        int temp;
        for(int j = b; j < c; j++){
            if(j >= k) break;
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
            
            k--;
        }
    }
    for(int i = 0 ; i<n; i++){
        printf("%d ", a[i]);
    }
}

