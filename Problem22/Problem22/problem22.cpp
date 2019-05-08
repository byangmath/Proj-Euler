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
	vector<string> vs;
	ifstream infile;
	infile.open("data.txt");
	while (!infile.eof()) {
		string s;
		char stemp;
		infile >> stemp;
		while ((stemp != ',') && !infile.eof()) {
			if (stemp != '\"') s += stemp;
			infile >> stemp;
		}
		vs.push_back(s);
	}
	infile.close();
	sort(vs.begin(), vs.end());
	int sum = 0, n = vs.size();
	for (int i = 0; i < n; ++i) {
		int temp=0;
		for (char c : vs[i]) {
			temp = temp + c - 'A' + 1;
		}
		sum = sum + temp*(i + 1);
	}
	cout << sum << endl;
	system("pause");
	return 0;
}