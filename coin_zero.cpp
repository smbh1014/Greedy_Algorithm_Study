//https://www.acmicpc.net/problem/11047 µ¿Àü 0

#include <iostream>
#include <vector>

#define MAX 1000000000

using namespace std;

vector<long long> value;

int select(int N, int K) {
	int result = 0;

	for (int i = value.size() - 1; i >= 0; i--) {
		if (K / value[i] > 0) {
			result += K / value[i];
			K = K % value[i];
		}
	}
	return result;
}

int main() {

	int N, K;
	int val;

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> val;
		value.push_back(val);
	}

	cout << select(N, K);

	return 0;

}