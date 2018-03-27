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
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        long long n;
        cin >> n;
        if (n == 1) {
            cout << 1;
            return 0;
        }
        for (long long i = 2; i*i <= n; ++i) {
            while (n % i == 0) {
                cout << i << " ";
                n /= i;
            }
            
        }
        if (n > 1) cout << n;

    return 0;
}

