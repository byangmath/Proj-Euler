#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define max(a,b) (a>b?a:b)
using namespace std;

int numberofletters(int n);
int main()
{
	int n_letters = 0;
	int a, b, c;
	int N = 1000;
	for (int i = 1; i <= N; ++i) {
		a = floor(i / 100) * 100;
		b = floor((i - a) / 10) * 10;
		c = i - a - b;
		if (a != 0 && (b != 0 || c != 0)) n_letters += 3;
		if (b < 20) n_letters += numberofletters(b + c);
		else n_letters = n_letters + numberofletters(b) + numberofletters(c);
		n_letters += numberofletters(a);
	}
	cout << n_letters << endl;
	system("pause");
	return 0;
}

int numberofletters(int n)
{
	int number = 0;
	switch (n) {
	case 1:
		number += 3;
		break;
	case 2:
		number += 3;
		break;
	case 3:
		number += 5;
		break;
	case 4:
		number += 4;
		break;
	case 5:
		number += 4;
		break;
	case 6:
		number += 3;
		break;
	case 7:
		number += 5;
		break;
	case 8:
		number += 5;
		break;
	case 9:
		number += 4;
		break;
	case 10:
		number += 3;
		break;
	case 11:
		number += 6;
		break;
	case 12:
		number += 6;
		break;
	case 13:
		number += 8;
		break;
	case 14:
		number += 8;
		break;
	case 15:
		number += 7;
		break;
	case 16:
		number += 7;
		break;
	case 17:
		number += 9;
		break;
	case 18:
		number += 8;
		break;
	case 19:
		number += 8;
		break;
	case 20:
		number += 6;
		break;
	case 30:
		number += 6;
		break;
	case 40:
		number += 5;
		break;
	case 50:
		number += 5;
		break;
	case 60:
		number += 5;
		break;
	case 70:
		number += 7;
		break;
	case 80:
		number += 6;
		break;
	case 90:
		number += 6;
		break;
	case 100:
		number += 10;
		break;
	case 200:
		number += 10;
		break;
	case 300:
		number += 12;
		break;
	case 400:
		number += 11;
		break;
	case 500:
		number += 11;
		break;
	case 600:
		number += 10;
		break;
	case 700:
		number += 12;
		break;
	case 800:
		number += 12;
		break;
	case 900:
		number += 11;
		break;
	case 1000:
		number += 11;
		break;
	}
	return number;
}