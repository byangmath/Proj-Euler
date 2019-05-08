#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	for (a = 1; a <= 333; ++a)
		for (b = a + 1; b <= 499; ++b) {
			c = 1000 - a - b;
			if (c <= b) break;
			if (a*a + b*b == c*c) {
				cout << a << " " << b << " " << c << endl;
				cout << a*b*c << endl;
				goto end;
			}
		}
	end:
	system("pause");
	return 0;
}