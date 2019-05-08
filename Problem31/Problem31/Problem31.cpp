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
	int money = 200;
	int ways = 0;
	for (int a = money; a >= 0; a -= 100) {
		for (int b = a; b >= 0; b -= 50) {
			for (int c = b; c >= 0; c -= 20) {
				for (int d = c; d >= 0; d -= 10) {
					for (int e = d; e >= 0; e -= 5) {
						for (int f = e; f >= 0; f -= 2) {
							++ways;
						}
					}
				}
			}
		}
	}
	cout << ways + 1<< endl;
	system("pause");
	return 0;
}