#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#define max(a,b) (a>b?a:b)
using namespace std;

int main()
{
	vector<vector<int>> v;
	ifstream infile;
	infile.open("data.txt");
	int temp, flag = 0;
	while (!infile.eof()) {
		++flag;
		vector<int> vi;
		for (int i = 0; i < flag; ++i) {
			infile >> temp;
			vi.push_back(temp);
			cout << temp << " ";
		}
		v.push_back(vi);
		cout << endl;
	}
	infile.close();

	for (int i = flag - 1; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			v[i - 1][j] += max(v[i][j], v[i][j + 1]);
		}
	}
	cout << v[0][0] << endl;
	system("pause");
	return 0;
}