#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(int K) {
    char c = 'A';
    for (int i = 0; i < K; i++) {
        cout << c;
        c += 1;
    }
    cout << endl;
}

int main() {
    int K;
    cin >> K;
    solve(K);
    return 0;
}
