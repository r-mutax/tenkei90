#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
using namespace std;

int main(void){
    DECL_IN(long long, n);

    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(ALL(a));
    sort(ALL(b));

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(a[i] - b[i]);
    }
    cout << ans << endl;
}
