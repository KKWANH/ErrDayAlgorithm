/*
1075 나누기
cpp
2022/04/23
2 try
*/

#include <iostream>

using namespace std;

int main(void)
{
	int N, F, rst, tmp;
	cin >> N >> F;
	if (N < 100 || N > 2000000000 ||
		F < 0 || F > 100)
	{
		cout << "Out of range" << endl;
		return 0;
	}
	N -= N % 100;
	tmp = N % 1000 / 100;
	while (tmp - (N % 1000 / 100) == 0)
	{
		if (N % F == 0)
			break;
		++N;
	}
	rst = N % 100;
	if (rst < 10)
		cout << "0" << rst << endl;
	else
		cout << rst << endl;
	return 0;
}