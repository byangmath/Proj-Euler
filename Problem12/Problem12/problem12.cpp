#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int flag, i, p, m, n;
	n = 1;
	i = 2;
	flag = 0;
	while (flag <= 500) {
		flag = 2;
		n += i;
		m = floor(sqrt(n));
		if (m == n / m) flag + 1;
		for (int j = 2; j < sqrt(n); ++j) {
			if ((n % j) == 0) flag += 2;
		}
		++i;
	}
	cout << n << endl;
	system("pause");
	return 0;
}