#include <iostream>
using namespace std;

int gcd(int m, int n)
{
	return n == 0 ? m : gcd(n, m % n);
}

int main()
{
	int nv = 1, dv = 1, tmp;;
	for (int c = 1; c <= 9; c++) {
		for (int d = 1; d < c; d++) {
			for (int n = 1; n < d; n++) {
				if ((10 * n + c) * d == n * (10 * c + d)) {
					nv *= n;
					dv *= d;
				}
			}
		}
	}
	tmp = gcd(nv, dv);
	cout << nv << ' ' << dv << endl;
	nv /= tmp;
	dv /= tmp;
	cout << nv << ' ' << dv << endl;
}