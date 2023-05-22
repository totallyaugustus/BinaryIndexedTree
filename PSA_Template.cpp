#include <iostream>
using namespace std;

#define MAXN 100000
#define ll long long

struct PSA {
	ll N, arr[MAXN + 1];
	void init() {
		for (int i = 1; i <= N; i++) {
			arr[i] += arr[i - 1];
		}
	}
	ll query(int i) {
		return arr[i];
	}
	ll query(int l, int r) {
		return query(r) - query(l - 1);
	}
};

int main() {
	return 0;
}
