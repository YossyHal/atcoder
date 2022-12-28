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

int main() {
    int N, Q;
    cin >> N;
    long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> Q;
    vector<vector<int>> queries(Q);
    string s;
    getline(cin, s);
    for (int i = 0; i < Q; i++) {
        getline(cin, s);
        stringstream ss(s);
        vector<int> query;
        while (getline(ss, s, ' ')) {
            query.push_back(stoi(s));
        }
        queries.at(i) = query;
    }
    for (auto q : queries) {
        if (q.size() == 2) {
            cout << A[q.at(1) - 1] << endl;
        } else if (q.size() == 3) {
            A[q.at(1) - 1] = q.at(2);
        }
    }
    return 0;
}
