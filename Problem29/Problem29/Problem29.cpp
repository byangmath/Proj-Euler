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
	int terms = 81 * 99 + 149 * 4;
	vector<int> exponent;
	for (int i = 2; i <= 100; ++i) exponent.push_back(i);
	for (int i = 2; i <= 6; ++i) {
		if (i == 5) terms += exponent.size();
		int index = 0;
		for (int j = 2; j <= 100; ++j) {
			while (i*j > exponent[index]) {
				++index;
				if (index == exponent.size()) break;
			}
			if (index == exponent.size())
				exponent.insert(exponent.begin() + index, i*j);
			else if(i*j != exponent[index])
				exponent.insert(exponent.begin() + index, i*j);
		}
	}
	for (auto it = exponent.begin(); it != exponent.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	terms += exponent.size();
	cout << terms << endl;
	system("pause");
	return 0;
}