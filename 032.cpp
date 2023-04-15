#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>
#include <set>
#include <climits>

#define DECL_IN(type, val)	type val; cin >> val;
#define DPRINT(val)			cout << #val << " : " << val << endl;
#define DPRINT_ITR(val)		cout << #val << endl; for(auto& it : val) { cout << it << " "; } cout << endl;

using ll = long long;

using namespace std;
int main(void){
  DECL_IN(ll, n);
  vector<vector<long long>>	a(n, vector<long long>(n, 0));
  
  for(int i = 0; i < n; i++)
  for(int j = 0; j < n; j++)
  {
    cin >> a[i][j];
  }

  DECL_IN(ll, m);
  vector<vector<bool>>	dict(n, vector<bool>(n, false));
  for(int i = 0; i < m; i++){
    DECL_IN(ll, x);
    DECL_IN(ll, y);
    x--; y--;
    dict[x][y] = true;
    dict[y][x] = true;
  }
  
  vector<ll>	v(n);
  for(int i = 0; i < n; i++){ v[i] = i; }
  
  long long ans = LLONG_MAX;
  do{
    long long time = 0;
    bool ngflg = false;
    for(int i = 0; i < n; i++)
    {
      if (i != n - 1)
      if(dict[v[i]][v[i + 1]]){
        ngflg = true;
        break;
      }
      time += a[v[i]][i];
    }
    if(!ngflg){
      ans = min(ans, time);
    }
  }while(next_permutation(v.begin(), v.end()));
  if(ans != LLONG_MAX)
  {
	cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
}