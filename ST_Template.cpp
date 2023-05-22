#include <iostream>
using namespace std;

#define MAXN 100000
#define ll long long

struct ST {
	ll N, arr[MAXN << 1];
	void init() {
		for (int i = N - 1; i > 1; i--) {
			arr[i] = arr[i << 1] + arr[(i << 1) | 1];
		}
	}
	void setP(int i, ll v) {
		for (arr[i += N] = v; i > 1; i >>= 1) {
			arr[i >> 1] = arr[i] + arr[i ^ 1];
		}
	}
	void addP(int i, ll v) {
		for (arr[i += N] += v; i > 1; i >>= 1) {
			arr[i >> 1] = arr[i] + arr[i ^ 1];
		}
	}
	ll query(int l, int r) {
		ll v = 0;
		for (l += N, r += N; l <= r; l >>= 1, r >>= 1) {
			if (l & 1) {
				v += arr[l++];
			}
			if (!(r & 1)) {
				v += arr[r--];
			}
			if (l == r) {
				break;
			}
		}
		return v;
	}
};

int main() {
	return 0;
}
