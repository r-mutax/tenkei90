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
    DECL_IN(long long, k);

    vector<long long>   s;
    rep(i, n){
        DECL_IN(long long, a);
        DECL_IN(long long, b);

        s.emplace_back(b);
        s.emplace_back(a - b);
    }

    sort(s.rbegin(), s.rend());
    
    long long ans = 0;
    rep(i, k){
        ans += s[i];
    }   
    cout << ans << endl;
}