#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>
#include <set>
#include <climits>
#include <deque>

#define DECL_IN(type, val)	type val; cin >> val;
#define DPRINT(val)			cout << #val << " : " << val << endl;
#define DPRINT_ITR(val)		cout << #val << endl; for(auto& it : val) { cout << it << " "; } cout << endl;
#define GCD(a,b)      		__gcd((a),(b))
#define LCM(a,b)      		(a)/GCD((a),(b))*(b)
using ll = long long;

using namespace std;
int main(void){
  DECL_IN(long long, n);
  DECL_IN(long long, q);
  deque<long long>	a;
  for(int i = 0; i < n; i++){
    DECL_IN(long long, A);
    a.push_back(A);  
  }
  
  for(int i = 0; i < q; i++)
  {
    DECL_IN(long long, t);
    DECL_IN(long long, x);
    DECL_IN(long long, y);
    switch(t)
    {
      case 1:
        x--; y--;
        swap(a[x], a[y]);
        break;
      case 2:
        a.push_front(a.back());
        a.pop_back();
        break;
      case 3:
        cout << a[x - 1] << endl;
        break;
   }
  }
  
}