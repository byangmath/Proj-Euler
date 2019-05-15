#include <iostream>
#include <set>
using namespace std;

bool isprime(int n);

int main()
{
	set<int> primes, tcprimes;
	int i = 0, n = 11,tmpn;
	int shift;
	for (int j = 2; j < 10; j++) {
		if (isprime(j)) primes.insert(j);
	}
	for (int n = 11; i != 11; n++) {
		tmpn = n;
		shift = 1;
		if (!isprime(tmpn)) continue;
		primes.insert(n);
		while (1) {
			tmpn /= 10;
			if (!primes.count(tmpn)) break;
			shift *= 10;
		}
		if (tmpn) continue;
		tmpn = n;
		while (1) {
			tmpn %= shift;
			if (!primes.count(tmpn)) break;
			shift /= 10;
		}
		if (tmpn) continue;
		tcprimes.insert(n);
		i++;
	}

	int sum = 0;
	for (auto p : tcprimes) {
		sum += p;
	}

	cout << sum << endl;
	return 0;
}

bool isprime(int n)
{
	int p;
	p = floor(sqrt(n));
	if (n == 2)
		return true;
	else if (n == 1)
		return false;
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