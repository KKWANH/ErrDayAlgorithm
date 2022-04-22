/*
1100 하얀 칸
cpp
2022/04/23
1 try
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	string _st1, _st2, _st3, _st4, _st5, _st6, _st7, _st8;
	cin >> _st1 >> _st2 >> _st3 >> _st4 >> _st5 >> _st6 >> _st7 >> _st8;

	vector<string> _vec;
	_vec.push_back(_st1);
	_vec.push_back(_st2);
	_vec.push_back(_st3);
	_vec.push_back(_st4);
	_vec.push_back(_st5);
	_vec.push_back(_st6);
	_vec.push_back(_st7);
	_vec.push_back(_st8);

	int _rst = 0;
	for (int i = 0; i < 8; i += 2)
	{
		if (_st1[i] == 'F')
			++_rst;
		if (_st3[i] == 'F')
			++_rst;
		if (_st5[i] == 'F')
			++_rst;
		if (_st7[i] == 'F')
			++_rst;
	}
	for (int i = 1; i < 8; i += 2)
	{
		if (_st2[i] == 'F')
			++_rst;
		if (_st4[i] == 'F')
			++_rst;
		if (_st6[i] == 'F')
			++_rst;
		if (_st8[i] == 'F')
			++_rst;
	}
	cout << _rst << endl;
}