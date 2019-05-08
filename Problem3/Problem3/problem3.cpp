#include <iostream>
using namespace std;
int main()
{
	long long p = 600851475143, fac = 2;
	while ((p % 2) == 0) p /= 2;
	if (p > 1) ++fac;
	while (p > 1) {
		if ((p%fac) == 0) {
			p /= fac;
			fac -= 2;
		}
		fac += 2;
	}
	cout << fac << endl;
	system("pause");
	return 0;
}
