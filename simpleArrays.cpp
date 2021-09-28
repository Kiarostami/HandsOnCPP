#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    int n;
    int a;
    
    scanf("%d \n", &n);
    int arr[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        arr[i]=a;
    } 
    
    for (int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
  
    return 0;
}
