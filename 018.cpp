#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <climits>
#include <iomanip>


#define DECL_IN(type, val)  type val; cin >> val;
#define ALL(val)            (val).begin(), (val).end()
#define PI 3.14159265359

using namespace std;
int main(void){
    DECL_IN(long long, t);
    DECL_IN(long long, l);
    DECL_IN(long long, x);
    DECL_IN(long long, y);
    DECL_IN(long long, q);
    double r = (double)l / 2.0;

    for(int i = 0; i < q; i++){
        DECL_IN(long long, e);
        // 角度を求める
        e = e % t;
        double rad = ((double)e / (double)t) * (double)2.0 * PI;

        double SY = -r * sin(rad);
        double SZ = r - r * cos(rad);

        double leng = sqrt((y - SY) * (y - SY) + x * x);
        cout << fixed << setprecision(15) << atan2(SZ , leng) * 180.0 / PI << endl;
    }
}