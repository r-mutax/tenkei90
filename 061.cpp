#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(void){
    int q;
    cin >> q;
    deque<long long> deq;

    for(int i = 0; i < q; i++){
        int c, x;
        cin >> c >> x;
        if(c == 1){
            deq.push_front(x);
        } else if(c == 2){
            deq.push_back(x);
        } else if(c == 3){
            cout << deq[x-1] << endl;
        }
    }


}