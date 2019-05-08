#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n);
int main()
{
	unsigned long long sum = 0;
	for (int i = 2; i < 2e6; ++i) {
		if (isprime(i)) sum += i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}

bool isprime(int n)
{
	int p;
	p = floor(sqrt(n));
	if (n == 2) return true;
	else {
		if (n % 2 == 0) return false;
		else {
			for (int i = 3; i <= p; i += 2)
				if (n%i == 0) return false;
			return true;
		}
	}
}