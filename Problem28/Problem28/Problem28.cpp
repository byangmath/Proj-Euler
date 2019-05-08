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
	int dimension = 1001;
	int n = (dimension + 1) / 2;
	int sum = 1, diagonal = 1;
	for (int i = 1; i != n; ++i) {
		sum += 4 * diagonal + 20 * i;
		diagonal += 8 * i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}