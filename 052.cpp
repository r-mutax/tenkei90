#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <climits>
#define PI 3.14159265359
#define DECL_IN_ITR(type, val, leng, idx)    vector<type> val(leng); for(int idx = 0; idx < leng; idx++) cin >> val[idx];
#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
#define DPRINT(val)            cout << #val << " : " << val << endl;
#define DPRINT_ITR(val)        cout << #val << endl; for(auto& it : val) { cout << it << " "; } cout << endl;
#define rep(i, n)              for(int i = 0; i < n; i++)

using namespace std;
int main(void){
    DECL_IN(long long, n);
    vector<vector<int>>  a(n, vector<int>(6));

    rep(i,n){
        rep(j,6){
            cin >> a[i][j];
        }
    }

    long long ans = 1;
    rep(i,n){
        long long p = a[i][0] + a[i][1] + a[i][2] +
                        a[i][3] + a[i][4] + a[i][5];
        ans = ans * p % (1000000007);
    }
    cout << ans << endl;
}