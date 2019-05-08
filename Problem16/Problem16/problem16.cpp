#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define max(a,b) (a>b?a:b)
using namespace std;
int main()
{
	vector<int> v{ 1 };
	int temp, N;
	N = 1000;
	for (int i = 0; i < N; ++i) {
		auto it = v.begin();
		temp = 0;
		while (1) {
			*it = *it * 2 + temp;
			if (*it >= 10) {
				temp = floor(*it / 10);
				*it -= 10 * temp;
			}
			else temp = 0;
			if (it + 1 == v.end()) {
				if (temp != 0) v.push_back(temp);
				break;
			}
			++it;
		}
	}
	auto it = v.end();
	while (1) {
		--it;
		if (it == v.begin()) {
			cout << *it << endl;
			break;
		}
		cout << *it;
	}
	int sum = 0;
	for (auto i : v) {
		sum += i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}