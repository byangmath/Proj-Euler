#include <iostream>
#include <cmath>
#include <set>
using namespace std;

bool isprime(int n);

int main()
{
	int max = 1000000;
	set<int> primes;
	for (int i = 2; i < max; i++)
		if (isprime(i)) primes.insert(i);

	int prime, count = 0, digits, tmp;
	for (auto x : primes) {
		prime = x;
		digits = 1;
		while (prime > digits*10)
			digits *= 10;

		do {
			tmp = prime % 10;
			prime /= 10;
			prime += digits * tmp;
			if (primes.count(prime) == 0)
				break;
		} while (prime != x);
		if (prime == x) {
			count++;
			//cout << prime << endl;
		}
	}
	cout << count << endl;

	return 0;
}

bool isprime(int n)
{
	int p;
	p = floor(sqrt(n));
	if (n == 2)
		return true;
	else {
		if (n % 2 == 0) return false;
		else {
			for (int i = 3; i <= p; i += 2) {
				if (n % i == 0) return false;
			}
			return true;
		}
	}
}