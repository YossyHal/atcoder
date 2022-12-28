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
    long long count = 1;
    char b;
    char c;
    cin.get(b);
    while (true) {
        cin.get(c);
        if (c == '\n') {
            break;
        }
        if (b == '0' && c == '0') {
            b = '1';
            c = '1';
        } else {
            b = c;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
