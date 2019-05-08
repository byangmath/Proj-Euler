#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define max(a,b) (a>b?a:b)
using namespace std;

int amicable(int n);

int main()
{
	int sum = 0;
	for (int i = 2; i <= 10000; ++i) {
		if (amicable(amicable(i)) == i && amicable(i) != i) sum += i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

int amicable(int n)
{
	if (n == 1) return 0;
	int sum = 1;
	int m = floor(sqrt(n));
	for (int i = 2; i <= m; ++i) {
		if (n % i == 0) sum = sum + i + n / i;
	}
	if (m*m == n) sum -= m;
	return sum;
}