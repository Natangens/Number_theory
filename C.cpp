
#include <iostream>
#include <cstdio>
#include <utility>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <cassert>
#include <functional>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <string>
#include <stack>
#include <queue>
#include <bitset>
#include <fstream>
using namespace std;


long long gcd (long long a, long long b, long long & x, long long & y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    long long x1, y1;
    long long d = gcd (b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long a, m, x, y;
    cin >> a >> m;
    long long g = gcd(a, m, x, y);
    if (g != 1) cout << -1;
    else cout << ((x+m)%m)%m;
    
    return 0;
}

