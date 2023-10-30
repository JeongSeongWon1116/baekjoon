#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int score[n];

    for(int i = 0; i<n; i++){
        std::cin >> score[i];
        
    }
    int max = score[0];
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(max < score[i]) {
            max = score[i];
            
        }
        sum += score[i];
    }
    double avg =(double)sum/ max *100;
    avg /= n;
    printf("%lf ", avg);
    
    
}
