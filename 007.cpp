#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()

using namespace std;


int main(void){
    DECL_IN(long long, n);

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        DECL_IN(int, buf);
        a[i] = buf;
    }
    
    sort(ALL(a));
        
    DECL_IN(long long, q);
    for(int i = 0; i < q; i++){
        DECL_IN(long long, buf);

        auto itr = lower_bound(ALL(a), buf);
        if(itr == a.end()){
            // 見つからなかったとき
            cout << abs(buf - a.back()) << endl;
            continue;
        }
        else if(itr == a.begin()){
            // 一番最初のとき
            cout << abs(buf - a[0]) << endl;
            continue;
        }
        
        auto itr2 = itr - 1;
        cout << min(abs(buf - *itr), abs(buf - *itr2)) << endl;
    }
}