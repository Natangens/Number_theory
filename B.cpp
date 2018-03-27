
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
const int N = 2e6;
int e[2*N];
int ans[2*N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, x, c = 1;

    for (int i = 2; i < N; ++i) {
        if (e[i] == 0) {
            ans[c] = i;
            ++c;
        }
        if (i*i < N)
        for (int k = i; 1ll*i*k < N; ++k) {
            if (e[i] == 0) {
                //cout << k*i << " " << i << '\n';
               e[k*i] = -1;
            }
        }
    }

    cin >> t;

    while (t--) {
        cin >> x;
        cout << ans[x] << " ";
    }
    return 0;
}
