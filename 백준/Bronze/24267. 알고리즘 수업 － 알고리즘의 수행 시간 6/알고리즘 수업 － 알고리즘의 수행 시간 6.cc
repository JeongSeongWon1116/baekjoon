#include <iostream>
int main(){
    unsigned long long int n;
    scanf("%llu", &n);
    printf("%llu\n3\n", (n-2) * (n-1) * n / 6);
}
