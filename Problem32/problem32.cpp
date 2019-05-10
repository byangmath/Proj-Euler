#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#define max(a,b) (a>b?a:b)
using namespace std;

int main()
{
	vector<int> digits = { 1,2,3,4,5,6,7,8,9 };
	int lenA[2] = { 1,2 };
	int lenB[2] = { 4,3 };
	int a, b, c, index, sum;
	set<int> pandigital;

	do {
		for (int i = 0; i < 2; i++) {
			index = 0;
			a = 0;
			for (int j = 1; j <= lenA[i]; j++) {
				a *= 10;
				a += digits[index++];
			}
			b = 0;
			for (int j = 1; j <= lenB[i]; j++) {
				b *= 10;
				b += digits[index++];
			}
			c = 0;
			for (int j = 1; j <= 9 - lenA[i] - lenB[i]; j++) {
				c *= 10;
				c += digits[index++];
			}
			if (a * b == c) {
				pandigital.insert(c);
				//cout << a << ' ' << b << ' ' << c << endl;
			}
		}
	} while (next_permutation(digits.begin(), digits.end()));

	sum = 0;
	for (auto p : pandigital) {
		//cout << p << endl;
		sum += p;
	}
	cout << sum << endl;

	return 0;
}