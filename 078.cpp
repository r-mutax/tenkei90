#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        auto node = g[i];
        int cnt = 0;
        for(auto& a : node){
            if(a < i){
                cnt++;
            }
        }
        if(cnt == 1){
            ans++;
        }
    }
    cout << ans << endl;
}