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

void solve(int N, std::string S) {
    bool b = false;
    for (int i = 0; i < N; i++) {
        if (S.at(i) == '\"') {
            b = !b;
        }
        if (!b && S.at(i) == ',') {
            cout << '.';
        } else {
            cout << S.at(i);
        }
    }
    cout << endl;
}

int main() {
    int N;
    std::scanf("%d", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
