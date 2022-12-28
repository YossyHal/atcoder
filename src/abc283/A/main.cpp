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

void solve(int A, int B) {
    long long N = A;
    for (int i = 1; i < B; i++) {
        N *= A;
    }
    cout << N << endl;
}

int main() {
    int A;
    std::scanf("%d", &A);
    int B;
    std::scanf("%d", &B);
    solve(A, B);
    return 0;
}
