#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    long l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &n, &l, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf", n, l, ch, f, d);
    return 0;
}
