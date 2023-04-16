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
    DECL_IN(long long, q);
    DECL_IN_ITR(long long, a, n, idx);

    vector<long long>   kai(2 * n, 0);
    long long ans = 0;
    rep(i, n - 1){
        kai[i] = a[i + 1] - a[i];
        ans += abs(kai[i]);
    }

    rep(i, q){
        DECL_IN(long long, l);
        DECL_IN(long long, r);
        DECL_IN(long long, v);
        l--; r--;

        long long mae = 0;
        if(0 < l) mae += abs(kai[l - 1]);
        if(r < n - 1) mae += abs(kai[r]);

        if(0 < l) kai[l - 1] += v;
        if(r < n - 1) kai[r] -= v;

        long long ato = 0;
        if(0 < l) ato += abs(kai[l - 1]);
        if(r < n - 1) ato += abs(kai[r]);

        ans += (ato - mae);
        cout << ans << endl;
    }
}