#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int paritition(vector<int> & v, int left, int right){
    int pivot = v[left];
    int low = left + 1;
    int high = right;
    
    while(low <= high){
        while(low <=right && pivot >= v[low]){
            low++;
        }
        while(high >= (left+1) && pivot <=v[high]){
            high--;
        }
        if(low <= high){
            int temp = v[low];
            v[low] = v[high];
            v[high] = temp;
        }
    }
    int temp = v[left];
    v[left] = v[high];
    v[high] = temp;
    return high;
}

void quickSort(vector<int>& v, int left, int right){
    if(left < right){
        int q = paritition(v, left, right);
        quickSort(v, left, q-1);
        quickSort(v, q+1, right);
    }
}
int main(){
    std::string s;
    vector<int> a;
    std::cin >> s;
    int n = (int)s.length();
    int b;
    for(int i = 0; i<n; i++){
        b = s[i] - '0';
        a.push_back(b);
    }
    quickSort(a, 0, n-1);
    for(int i = n-1; i>=0; i--){
        printf("%d", a[i]);
    }
    
}
