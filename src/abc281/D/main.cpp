#include <bits/stdc++.h>

using namespace std;

void solve(long long N, long long K, long long D, std::vector<long long> a) {
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    long long D;
    std::scanf("%lld", &D);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
    }
    solve(N, K, D, std::move(a));
    return 0;
}
