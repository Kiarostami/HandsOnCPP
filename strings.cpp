#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;


int main() {
    
    string a, b;
    cin >> a;
    cin >> b;
    
    int as, bs;
    
    as = a.size();
    bs = b.size();
    printf("%d %d\n", as, bs);
    
    string c = a + b;
    cout << c.c_str() << endl ;

    char a0 = a[0];
    char b0 = b[0];

    b[0] = a0;
    a[0] = b0;

    printf("%s %s\n", a.c_str(), b.c_str());

    return 0;
}
