#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <climits>
#define PI 3.14159265359

#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
#define DPRINT(val)            cout << #val << " : " << val << endl;
#define DPRINT_ITR(val)        cout << #val << endl; for(auto& it : val) { cout << it << " "; } cout << endl;
#define rep(i, n)              for(int i = 0; i < n; i++)
using namespace std;
int main(void){
    DECL_IN(long long, n);
    DECL_IN(long long, l);
    long long mod = 1e9+7;
   
    vector<long long>    dp(n + 1, 0);
    dp[0] = 1;
    rep(i, n){
        dp[i + 1] = (dp[i + 1] + dp[i]) % mod;
        if(i + l <= n){
            dp[i + l] = (dp[i + l] + dp[i]) % mod;
        }
   }
   cout << dp[n] << endl;
}