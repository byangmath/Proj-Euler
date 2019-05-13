#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
	return n == 0 ? 1 : n * factorial(n - 1);
}

int main()
{
	//a1a2a3...an=a1!+...+an!, n<=7
	//a1...an<=7*9!=2540160
	int sum = 0;
	vector<int> fac;
	for (int i = 0; i <= 9; i++) {
		fac.push_back(factorial(i));
	}

	for (int i = 10; i < 2540161; i++) {
		int tmp = 0;
		int n = i;
		while (n > 0) {
			int d = n % 10;
			tmp += fac[d];
			n /= 10;
		}
		if (tmp == i) sum += tmp;
	}
	cout << sum << endl;
	return 0;
}