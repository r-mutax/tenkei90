#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <climits>
#define PI 3.14159265359

#define DECL_IN(type, val)  type val; cin >> val;
#define DECL_IN_ITR(type, val, leng, idx)    vector<type> val(leng); for(int idx = 0; idx < leng; idx++) cin >> val[idx];
#define ALL(val)            (val).begin(), (val).end()
#define DPRINT(val)            cout << #val << " : " << val << endl;
#define DPRINT_ITR(val)        cout << #val << endl; for(auto& it : val) { cout << it << " "; } cout << endl;

using namespace std;
int main(void){
    DECL_IN(long long, n);
    DECL_IN_ITR(long long, a, n, idx);
    DECL_IN_ITR(long long, b, n, idx);
    DECL_IN_ITR(long long, c, n, idx);

    vector<long long> A(46), B(46), C(46);

    for(int i = 0; i < n; i++){
        A[a[i] % 46]++;
        B[b[i] % 46]++;
        C[c[i] % 46]++;
    }

    long long ans = 0;
    for(int i = 0; i < 46; i++)
    for(int j = 0; j < 46; j++)
    for(int k = 0; k < 46; k++)
    {
        int buf = i + j + k;
        if(buf % 46 == 0){
            ans += A[i] * B[j] * C[k];
        }
    }

    cout << ans << endl;
}