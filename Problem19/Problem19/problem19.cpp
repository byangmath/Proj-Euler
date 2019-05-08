#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define max(a,b) (a>b?a:b)
using namespace std;


struct Date {
	int year = 1901;
	int month = 1;
	int date = 1;
	int week = 2;
};

int daysofmonth(int mon);

int main()
{
	vector<Date> d;
	int days;
	int wk = 2;
	int s = 0;
	for (int i = 1901; i <= 2000; ++i) {
		for (int mon = 1; mon <= 12; ++mon) {
			if (mon == 2 && i % 4 == 0) days = 29;
			else days = daysofmonth(mon);
			for (int j = 1; j <= days; ++j) {
				Date di;
				di.year = i;
				di.month = mon;
				di.date = j;
				di.week = wk % 7;
				if (di.week == 0) di.week = 7;
				d.push_back(di);
				if (di.week == 7 && di.date == 1) ++s;
				wk = wk + 1;
			}
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}

int daysofmonth(int mon)
{
	switch (mon) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		return 28;
		break;
	}
}