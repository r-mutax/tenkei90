#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cnt += abs(a[i] - b[i]);
    }

    bool flg = false;
    if(cnt <= k){
        int b = k - cnt;
        if(b % 2 == 0){
            flg = true;
        }
    }

    cout << (flg ? "Yes" : "No") << endl;

}