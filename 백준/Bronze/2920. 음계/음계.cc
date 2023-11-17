#include <iostream>
int main(){
    int a[8] = {0};
    bool ck_as = false;
    bool ck_ds = false;
    int j = 8;
    for(int i = 0; i<8; i++){
        scanf("%d", &a[i]);
        if(!ck_as && a[i] != i+1) ck_as = true;
        if(!ck_ds && a[i] != j) ck_ds = true;
        j--;
    }
    if(!ck_as) printf("ascending");
    else if(!ck_ds) printf("descending");
    else printf("mixed");
    
    
    
}
