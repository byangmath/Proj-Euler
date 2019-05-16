#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define max(a,b) (a > b ? a : b)



int main()
{
	vector<int> digits = { 8,7,6,5,4,3,2 };
	int pdgtmax = 918273645, pdgt;
	int nleft, nright;
	int index;
	while (1) {
		nleft = 9;
		for (index = 0; index < 3; index++) {
			nleft *= 10;
			nleft += digits[index];
		}
		nright = 1;
		for (; index < 7; index++) {
			nright *= 10;
			nright += digits[index];
		}
		if (nright == nleft * 2) {
			int tmp = nright;
			while (tmp) {
				tmp /= 10;
				nleft *= 10;
			}
			pdgt = nleft + nright;
			break;
		}
		prev_permutation(digits.begin(), digits.end());
	}
	pdgtmax = max(pdgt, pdgtmax);
	cout << pdgtmax << endl;

	return 0;
}