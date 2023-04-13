#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <climits>
#include <math.h>

#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
using namespace std;

int main(void){
    DECL_IN(long long, a);
    DECL_IN(long long, b);
    DECL_IN(long long, c);

    long long lhs = a;
    long long rhs = c;
    for(int i = 0; i < b - 1; i++){
        rhs *= c;
    } 
    cout << (lhs < rhs ? "Yes" : "No" ) << endl;
}