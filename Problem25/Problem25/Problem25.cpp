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
	int digits = 1000;
	vector<int> F1(digits,0), F2(digits,0);
	F1[0] = 1;
	F2[0] = 1;
	int index = 1;
	int term=2;
	while (index < digits) {
		int m = 0;//½øÎ»
		for (int i = 0; i != index; ++i) {
			F1[i] = F1[i] + F2[i];
			m = F1[i] / 10;
			F1[i] = F1[i] - 10 * m;
			F1[i + 1] = F1[i + 1] + m;
		}
		if (m > 0) ++index;
		vector<int> temp;
		temp = F1;
		F1 = F2;
		F2 = temp;
		++term;
	}
	for (auto it = F2.rbegin(); it != F2.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "term: " << term << endl;
	system("pause");
	return 0;
}