#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n);
int main()
{
	int number = 1, i=1;
	while (number < 10001) {
		i += 2;
		if (isprime(i)) number += 1;
	}
	cout << i << endl;
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