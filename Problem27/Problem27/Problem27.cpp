#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define max(a,b) (a>b?a:b)
using namespace std;

vector<int> primes(unsigned n);
bool isprime(int n, const vector<int> &max_primes);

int main()
{
	vector<int> max_primes;
	max_primes = primes(100 * 100 + 999 * 100 + 999);
	/*for (auto it = b_primes.begin(); it != b_primes.end(); ++it) {
	cout << *it << " ";
	}*/
	int aMax = 0, bMax = 0, nMax=0;
	for (int a = -999; a != 1001; a += 2) {
		for (int i = 1; max_primes[i] < 1000; ++i) {
			for (int j = 0; j != 2; ++j) {
				int sign = (j == 0) ? -1 : 1;
				int n = 0;
				while (isprime(n*n + a*n + sign*max_primes[i],max_primes))
					++n;
				if (n > nMax) {
					nMax = n;
					aMax = a;
					bMax = sign*max_primes[i];
				}
			}
		}
	}
	/*int n = 0;
	while (isprime(n*n -61*n + 971, max_primes))
		++n;
	if (n > nMax) {
		nMax = n;
		aMax = -61;
		bMax = 971;
	}*/
	cout << "aMax = " << aMax << ", bMax = " 
		<< bMax << ", nMax = " << nMax 
		<< ", pro = " << aMax*bMax << endl;
	system("pause");
	return 0;
}

vector<int> primes(unsigned n)
{
	vector<int> p;
	p.push_back(2);
	for (int i = 3; i <= n; i += 2) {
		int flag = 1;
		int sqrt_i = floor(sqrt(i));
		for (auto it = p.begin(); it != p.end(); ++it) {
			if (*it > sqrt_i) break;
			if (!(i % (*it))) {
				flag = 0;
				break;
			}
		}
		if (flag) p.push_back(i);
	}
	return p;
}

bool isprime(int n, const vector<int> &max_primes)
{
	for (int i = 0; max_primes[i] <= abs(n); ++i) {
		if (max_primes[i] == abs(n)) return true;
	}
	return false;
}