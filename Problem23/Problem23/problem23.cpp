#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>
#define max(a,b) (a>b?a:b)
using namespace std;

int sumofpd(int n);

int main()
{
	vector<int> abund;
	int  n = 28123;
	for (int i = 1; i <= n; ++i) {
		if (i < sumofpd(i)) abund.push_back(i);
	}
	vector<bool> sofabund(n,false);
	for (auto it1 = abund.begin(); it1 != abund.end(); ++it1) {
		if (*it1 > 28123 / 2) break;
		for (auto it2 = it1; it2 != abund.end(); ++it2) {
			int k = (*it1) + (*it2);
			if (k > 28123) break;
			sofabund[k - 1] = true;
		}
	}
	long long sum=0;
	auto it = sofabund.begin();
	for (int i = 1; i <= n ; ++i) {
		if (sofabund[i - 1] == false) sum += i;
	}
	//for (int i = 1; i < n; ++i) sum += i;
	//for (auto i : sofabund) sum -= i;
	//copy(sofabund.begin(), sofabund.end(), ostream_iterator<int>(cout, " "));
	//cout << endl;
	cout << sum << endl;
	system("pause");
	return 0;
}

int sumofpd(int n)
{
	if (n <= 1) return 0;
	int sum = 1;
	int k = floor(sqrt(n));
	for (int i = 2; i <= k; ++i) {
		if (n%i == 0) sum = sum + i + n / i;
	}
	if (k * k == n) sum -= k;
	return sum;
}