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
	vector<int> digits(6, 0);
	digits[1] = 1;
	vector<int> numbers;
	for (int i = 0; i < 999989; ++i) {
		int sum = 0, number = 0;
		int n = 0;
		digits[0] += 1;
		for (auto it = digits.begin(); it != digits.end()-1; ++it) {
			if (*it >= 10) {
				*it -= 10;
				*(it + 1) += 1;
			}
			sum += pow(*it, 5);
			number += (*it)*pow(10, n);
			++n;
		}
		sum += pow(digits[5], 5);
		number += digits[5] * pow(10, n);
		if (sum == number) numbers.push_back(number);
	}
	int sum = 0;
	for (auto it = numbers.begin(); it != numbers.end(); ++it) {
		cout << *it << " ";
		sum += *it;
	}
	cout << endl;
	cout << sum << endl;
	system("pause");
	return 0;
}