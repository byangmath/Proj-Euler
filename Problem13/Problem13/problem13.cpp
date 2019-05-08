#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	string line;
	vector<string> v;
	vector<int> sum(52, 0);
	while (getline(cin, line)) {
		v.push_back(line);
	}
	int n;
	n = v.size();
	int temp, m;
	temp = 0;
	char p;
	for (string &s : v) {
		m = s.length();
		auto j = sum.begin();
		for (int i = m - 1; i >= 0; --i) {
			p = s[i];
			*j = *j + atoi(&p);
			if (*j >= 10) {
				*(j + 1) = *(j + 1) + 1;
				*j = *j - 10;
			}
			++j;
		}
	}
	auto it = sum.end();
	while (1) {
		--it;
		if (it == sum.begin()) {
			cout << *it;
			break;
		}
		cout << *it;
	}
	cout << endl;
	system("pause");
	return 0;
}