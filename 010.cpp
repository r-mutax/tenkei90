#include <iostream>
#include <vector>

int main(void){
  int n = 0;
  std::cin >> n;
  std::vector<int> rui1(n+1, 0),rui2(n+1, 0);
  
  for(int i = 0; i < n; ++i) {
    int c, p;
    std::cin >> c >> p;
    
    int p1 = 0, p2 = 0;
    if(c == 1) {
      p1 = p;
    } else {
      p2 = p;
    }
    rui1[i+1] = rui1[i] + p1;
    rui2[i+1] = rui2[i] + p2;
  }
  
  int q = 0;
  std::cin >> q;
  for(int i = 0; i < q; ++i){
    int l, r;
    std::cin >> l >> r;
    // 1
    std::cout << rui1[r] - rui1[l-1] << " ";
    
    // 2
    std::cout << rui2[r] - rui2[l-1] << std::endl;
  }
}