#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <climits>
#define PI 3.14159265359

#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
#define DECL_IN_ITR(type, val, leng, idx)    vector<type> val(leng); for(int idx = 0; idx < leng; idx++) cin >> val[idx];
#define DPRINT(val)            cout << #val << " : " << val << endl;
#define DPRINT_ITR(val)        cout << #val " : "; for(auto& it : val) { cout << it << " "; } cout << endl;
#define rep(i, n)              for(int i = 0; i < n; i++)
using namespace std;
int main(void){
    DECL_IN(long long, n);
    DECL_IN(long long, k);

    if(n == 1){
        cout << k << endl;
        return 0;
    }

    /*
        k * (k - 1) * (k - 2) ^ (N - 2)
    */
    long long mod = 1e9 + 7;
    long long ans = 1;
    ans = (ans * k) % mod;
    ans = (ans * (k - 1)) % mod;

    n -= 2;
    long long mul = (k - 2);

    while(n){
        if(0x01 & n){
            ans = (ans * mul) % mod;
        }
        mul = (mul * mul) % mod;
        n = n >> 1;
    }

    cout << ans << endl;
}