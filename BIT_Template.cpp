#include <iostream>
using namespace std;

#define MAXN 100000
#define ll long long

struct BIT {
	ll arr[MAXN + 1];
	void update(int i, ll v) {
		for (; i <= MAXN; i += (i & -i)) {
			arr[i] += v;
		}
	}
	ll query(int i) {
		ll v = 0;
		for (; i > 0; i -= (i & -i)) {
			v += arr[i];
		}
		return v;
	}
	ll query(int l, int r) {
		return query(r) - query(l - 1);
	}
};

int main() {
	return 0;
}
