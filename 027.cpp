#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <set>

using namespace std;
int main(void){
  int n;
  cin >> n;
  set<string> dict;
  for(int i = 0; i < n;i++){
    string str;
    cin >> str;
    if(dict.count(str) == 0){
      cout << i + 1 << endl;
      dict.insert(str);
    }
  }
}