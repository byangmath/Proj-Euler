#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int start, number, mc_start, mc_number;
	long long process;
	mc_start = 1;
	mc_number = 1;
	for (start = 1; start < 1e6; ++start) {
		number = 1;
		process = start;
		while (process != 1) {
			if (process % 2 == 0) {
				process = process / 2;
			}
			else process = 3 * process + 1;
			number += 1;
		}
		if (number > mc_number) {
			mc_start = start;
			mc_number = number;
		}
	}
	cout << mc_start << " " << mc_number << endl;
	system("pause");
	return 0;
}