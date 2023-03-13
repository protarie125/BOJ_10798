#include <iostream>
#include <vector>
#include <string>

using namespace std;

using vi = vector<int>;
using vs = vector<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto input = vs(5);
	auto lens = vi(5);
	auto mx = int{ 0 };
	for (auto i = 0; i < 5; ++i) {
		cin >> input[i];
		lens[i] = input[i].length();
		if (mx < lens[i]) {
			mx = lens[i];
		}
	}

	for (auto i = 0; i < mx; ++i) {
		for (auto j = 0; j < 5; ++j) {
			if (i < lens[j]) {
				cout << input[j][i];
			}
		}
	}

	return 0;
}