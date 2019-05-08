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
	int period = 1;
	int d, Lnumber = 1000;
	for (int i = 3; i < Lnumber; i += 2) {
		if ((i % 2) && (i % 5)) {
			int phi_d = 0;
			int remainder = 1;
			while (1) {
				remainder = (remainder * 10) % i;
				++phi_d;
				if (remainder == 1) break;
			}
			if (phi_d > period) {
				period = phi_d;
				d = i;
			}
		}
	}
	cout << "period = " << period << "\n" << "d = " << d << endl;
	system("pause");
	return 0;
}