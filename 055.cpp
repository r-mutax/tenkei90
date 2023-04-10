#include <iostream>
#include <vector>

using namespace std;
int main(void){
    long long n, p, q;
    cin >> n >> p >> q;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                for(int l = 0; l < k; l++){
                    for(int m = 0; m < l; m++){
                        long long pp = a[i] * a[j] % p;
                        pp = pp * a[k] % p;
                        pp = pp * a[l] % p;
                        pp = pp * a[m] % p;
                        if(pp == q) ++ans;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}