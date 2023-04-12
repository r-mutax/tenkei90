#include <iostream>
#include <vector>
#include <deque>

#define DECL_IN(type, val)  type val; cin >> val;
using namespace std;


int main(void){
    DECL_IN(int, n);

    for(int i = 0; i < (1 << n); i++){
        int p = 0;
        for(int bit = n - 1; 0 <= bit; bit--){
            if(!(i & (1 << bit))){
                p++;
            } else {
                p--;
            }
            if (p < 0){
                break;
            }
        }
        if(p == 0){
            for(int bit = n - 1; 0 <= bit; bit--){
                if(!(i & (1 << bit))){
                    cout << '(';
                } else {
                    cout << ')';
                }
            }
            cout << endl;
        }
    }

}