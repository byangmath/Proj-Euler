#include <iostream>
#include <set>
using namespace std;

void getpalindromes(int n, set<int>& pdrs);// n:digits
int main()
{
	set<int> pdrs;
	for (int n = 1; n < 7; n++) {
		getpalindromes(n, pdrs);
	}
	int sum = 0;
	for (auto pdr : pdrs)
		sum += pdr;
	cout << sum << endl;

	return 0;
}

void getpalindromes(int n, set<int>& pdrs)
{
	int d, pdr, pdrhalf;
	d = (n / 2) + (n % 2);
	int beginnum = 1, endnum, shift;
	for (int i = 1; i < d; i++)
		beginnum *= 10;
	endnum = 10 * beginnum;

	if (n % 2) {
		shift = beginnum;
		for (int i = beginnum; i < endnum; i++) {
			pdr = i * shift;
			pdrhalf = i / 10;
			int tmp = 0;
			while (pdrhalf) {
				tmp *= 10;
				tmp += pdrhalf % 10;
				pdrhalf /= 10;
			}
			pdr += tmp;
			tmp = pdr;
			int pdrtmp = 0;
			while (tmp) {
				pdrtmp = (pdrtmp << 1) + (tmp % 2);
				tmp /= 2;
			}
			if (pdrtmp == pdr) pdrs.insert(pdr);
		}
	}
	else {
		shift = beginnum * 10;
		for (int i = beginnum; i < endnum; i++) {
			pdr = i * shift;
			pdrhalf = i;
			int tmp = 0;
			while (pdrhalf) {
				tmp *= 10;
				tmp += pdrhalf % 10;
				pdrhalf /= 10;
			}
			pdr += tmp;
			tmp = pdr;
			int pdrtmp = 0;
			while (tmp) {
				pdrtmp = (pdrtmp << 1) + (tmp % 2);
				tmp /= 2;
			}
			if (pdrtmp == pdr) pdrs.insert(pdr);
		}
	}
}