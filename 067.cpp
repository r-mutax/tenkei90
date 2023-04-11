#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <string>

using namespace std;

string tostr(long long n){
    string ans;
    deque<char> q;
    while(n > 0){
        long long m = n % 9;
        q.push_back(m + '0');
        n = n / 9;
    }
    while(q.size()){
        ans += q.back();
        q.pop_back();
    }
    return ans;
}

int main(void){
    string n;
    int k;
    cin >> n >> k;

    for(int i = 0; i < k ; i++){
        // 文字列を8進数と解釈して数値型に変換
        long long buf = stoll(n, 0, 8);
        if(buf == 0){
            cout << n << endl;
            return 0;
        }

        // 10進数を9進数（文字列）に変換
        string str = tostr(buf);
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '8')
            {
                str[i] = '5';
            }
        }
        n = str;

    }
    cout << n << endl;

    return 0;
}