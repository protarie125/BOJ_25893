#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		auto ct = int{ 0 };
		for (auto i = 0; i < 3; ++i) {
			int x;
			cin >> x;
			cout << x << ' ';

			if (10 <= x) {
				++ct;
			}
		}
		cout << '\n';

		if (0 == ct) {
			cout << "zilch";
		}
		else if (1 == ct) {
			cout << "double";
		}
		else if (2 == ct) {
			cout << "double-double";
		}
		else if (3 == ct) {
			cout << "triple-double";
		}

		cout << "\n\n";
	}

	return 0;
}