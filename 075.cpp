#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
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

map<long long, int> prime_factorize(long long n){
    map<long long, int> result;
    long long rem = n;
    for(long long i = 2; i * i <= n; i++){
        while(rem % i == 0){
            result[i]++;
            rem /= i;
            if(rem == 1) break;
        }
        if(rem == 1) break;
    }
    if(rem != 1) result[rem]++;
    return result;
}

int main(void){
    DECL_IN(long long, n);

    auto pf = prime_factorize(n);

    long long sum = 0;
    for(auto it : pf){
        sum += it.second;
    }

    long long ans = 0;
    long long ban = 1;
    while(ban < sum){
        ans++;
        ban *= 2;
    }
    
    cout << ans << endl;
}