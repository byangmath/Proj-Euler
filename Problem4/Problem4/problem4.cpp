#include <iostream>
#include <cmath>
using namespace std;

bool isfactor(int n);

int main()
{
	int a, b, c, n, flag;
	flag = 0;
	for (a = 9; a >=0; --a) {
		for (b = 9; b >= 0; --b) {
			for (c = 9; c >= 0; --c) {
				n = a*1e5+b*1e4 + c*1e3 +c*1e2+ b*1e1+a;
				if (isfactor(n) == 1) {
					goto number;
				}
			}
		}
	}
	number:
	cout << n <<" "<<flag<< endl;
	system("pause");
	return 0;
}

bool isfactor(int n)
{
	int i, p;
	double flag;
	for (i = 999; i != 99; --i) {
		if (n%i == 0) {
			p = n / i;
			flag = p / 100;
			if (flag >= 1 && flag<10) return true;
		}
	}
	return false;
}