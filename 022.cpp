#include <bits/stdc++.h>

using namespace std;
int main(void){
  long long a,b,c;
  cin >> a >> b >> c;
  long long ab = __gcd(a, b);
  long long abc = __gcd(ab, c);
  
  cout << (a / abc - 1) + (b / abc - 1) + (c / abc - 1) << endl;
}