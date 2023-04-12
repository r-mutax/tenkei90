#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <climits>

#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
using namespace std;
int main(void){
    DECL_IN(long long, n);
    DECL_IN(long long, a);
    DECL_IN(long long, b);
    DECL_IN(long long, c);

    long long ans = LLONG_MAX;
    for(int i = 0; i < 9999; i++){
        for(int j = 0; j < 9999; j++){
            long long rem = n - i * a - j * b;
            if(rem < 0) continue;
            if(rem % c == 0){
                ans = min(ans, i + j + (rem / c));
            }
        }
    }
    cout << ans << endl;
}