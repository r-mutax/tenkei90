#include <iostream>
#include <vector>

int main(void){
  int h, w;
  std::cin >> h>> w;
  std::vector<std::vector<long long>> m(h, std::vector<long long>(w, 0));
  
  for(int y = 0; y < h; y++)
  {
    for(int x = 0; x < w; x++)
    {
      std::cin >> m[y][x];
    }
  }
  
  std::vector<long long> d(w, 0);
  std::vector<long long> r(h, 0);
  
  // 列
  for(int x = 0; x < w; ++x)
  {
    for(int y = 0; y < h; ++y)
    {
      d[x] += m[y][x];
    }
  }

    // 行
  for(int y = 0; y < h; ++y)
  {
    for(int x = 0; x < w; ++x)
    {
      r[y] += m[y][x];
    }
  } 
  
  // output
  for(int y = 0; y < h; y++)
  {  for(int x = 0; x < w; x++)
    {
	  if(x != 0) std::cout << " ";
      std::cout << d[x] + r[y] - m[y][x];
    }
    std::cout << std::endl;
  }
}