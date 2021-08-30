#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b && a>c && a>d){ max=a;}
    if(b>c && b>d && b>a){ max=b;}
    if(c>b && c>a && c>d){ max=c;}  
    if(d>b && d>c && d>a){ max=d;}
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
