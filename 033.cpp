#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <set>

using namespace std;
int main(void){
  int h,w;
  cin >> h >> w;
  if(h > w){
    int tmp = w;
    w = h;
    h = tmp;
  }
  
  if(h == 1 || w == 1){
    cout << h * w << endl;return 0;
  }
  int h2 = (h + 1) / 2;
  int w2 = (w + 1) / 2;
  cout << h2 * w2 << endl;
}
