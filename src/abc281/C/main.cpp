#include <bits/stdc++.h>

using namespace std;

void solve(long long N, long long T, std::vector<long long> A) {
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long T;
    std::scanf("%lld", &T);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    solve(N, T, std::move(A));
    return 0;
}
