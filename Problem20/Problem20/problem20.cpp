#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define max(a,b) (a>b?a:b)
using namespace std;

vector<int> multiply(const vector<int> &a, const vector<int> &b);

int main()
{
	int a, b, c;
	vector<int> prod{ 1 };
	for (int i = 1; i <= 100; ++i) {
		a = floor(i / 100);
		b = floor((i - a * 100) / 10);
		c = i - 100 * a - 10 * b;
		vector<int> temp{ c,b,a };
		prod = multiply(prod, temp);
	}
	int sum=0;
	for (auto it = prod.rbegin(); it != prod.rend(); ++it) {
		sum += *it;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

vector<int> multiply(const vector<int> &a, const vector<int> &b)
{
	int na = a.size(), nb = b.size();
	vector<int> temp(na,0);
	if (a.empty() || b.empty()) {
		cerr << "³ËÊý²»´æÔÚ" << endl;
		if(a.empty()) return a;
		else return b;

	}
	for (int i = 0; i < nb; ++i) {
		temp.push_back(0);
 		for (int j = 0; j < na; ++j) {
			temp[i + j] += a[j] * b[i];
			if (temp[i + j] >= 10) {
				int tp = floor(temp[i + j] / 10);
				temp[i + j] -= tp*10;
				temp[i + j + 1] += tp;
			}
		}
	}
	while (*temp.rbegin() == 0) temp.pop_back();
	return temp;
}