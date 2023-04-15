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
#define GCD(a,b)      		__gcd((a),(b))
#define LCM(a,b)      		(a)/GCD((a),(b))*(b)
using ll = long long;

using namespace std;
int main(void){
  DECL_IN(ll, a);
  DECL_IN(ll, b);
  long long ban = 1000000000000000000L;
  
  long long r = b / gcd(a, b);
  if(r > ban / a) {
    cout << "Large" << endl;
  } else {
    cout << a * r << endl;
  }
}