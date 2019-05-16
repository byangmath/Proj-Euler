#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int a, b, c, p, delta, minc;
	vector<int> counts, values;
	int count, maxcount = 0, value = 0;
	bool flag;
	for (p = 1000; p > 3; p -= 2) {
		//p = 120;
		minc = (sqrt(2.0) - 1) * p;
		count = 0;
		flag = false;
		for (c = p / 2; c >= minc; c--) {
			delta = sqrt(c * c - p * p + 2 * p * c);
			a = (p - c) - delta;
			if ((a % 2) | (a <= 0)) continue;
			a /= 2;
			b = p - c - a;
			if (b <= 0) continue;
			if (a * a + b * b == c * c) {
				flag = true;
				count++;
			}
		}
		if (flag) {
			values.push_back(p);
			counts.push_back(count);
		}
		if (count > maxcount) {
			value = p;
			maxcount = count;
		}
	}

	cout << value << " " << maxcount << endl;
}