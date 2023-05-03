#include <iostream>
using namespace std;

#define MAXN 100000
#define ll long long

struct BIT {
    ll arr[MAXN + 1];
    void update(ll i, ll v) {
        for (; i <= MAXN; i += (i & -i)) {
            arr[i] += v;
        }
    }
    ll query(ll i) {
        ll v = 0;
        for (; i > 0; i -= (i & -i)) {
            v += arr[i];
        }
        return v;
    }
};

int main() {
    return 0;
}
