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

bool is_OK(int N, int M, string s1, string s2) {
    for (int k = 0; k < M; k++) {
        if (s1.at(k) == 'x' && s2.at(k) == 'x') return false;
    }
    return true;
}

void solve(int N, int M, std::vector<std::string> S) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (i >= j) continue;
            if (is_OK(N, M, S.at(i), S.at(j))) count++;
        }
    }
    cout << count << endl;
}

int main() {
    int N;
    cin >> N;
    int M;
    cin >> M;
    std::vector<std::string> S(N);
    for (int i = 0; i < N; i++) {
        std::cin >> S[i];
    }
    solve(N, M, std::move(S));
    return 0;
}
