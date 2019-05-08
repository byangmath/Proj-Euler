#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define max(a,b) (a>b?a:b)
using namespace std;

int main()
{
	int nth = 1e6;
	int n = 1, m = 10, flag = 0;
	for (int i = 1; i <= 10; ++i) n *= i;
	while (1) {
		n /= m;
		--m;
		if (n <= nth) {
			break;
			flag = n;
		}
	}
	vector<int> a(10, 0);
	vector<bool> b(10, true);
	int i;
	for (i = 0; i < 10 - 1 - m; ++i) {
		a[i] = i;
		b[i] = false;
	}
	int j = i;
	flag = n;
	while (i < 9) {
		if (flag >= nth) {
			flag -= n;
			a[i] = j;
			++i;
			b[j] = false;
			j = -1;
			while (!b[j+1]) ++j;
			n /= m;
			--m;
		}
		flag += n;
		while (1) {
			++j;
			if (b[j]) break;
		}
	}
	a[i] = j;
	for (i = 0; i < 10; ++i) cout << a[i];
	cout << endl;
	system("pause");
	return 0;
}