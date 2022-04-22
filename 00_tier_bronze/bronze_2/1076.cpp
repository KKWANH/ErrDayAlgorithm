/*
1076 저항
cpp
2022/04/23
1 try
*/

#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(void)
{
	map<string, int> _map;
	_map.insert(make_pair("black", 0));
	_map.insert(make_pair("brown", 1));
	_map.insert(make_pair("red", 2));
	_map.insert(make_pair("orange", 3));
	_map.insert(make_pair("yellow", 4));
	_map.insert(make_pair("green", 5));
	_map.insert(make_pair("blue", 6));
	_map.insert(make_pair("violet", 7));
	_map.insert(make_pair("grey", 8));
	_map.insert(make_pair("white", 9));

	string _clr1, _clr2, _clr3;
	cin >> _clr1 >> _clr2 >> _clr3;

	long long _rst;
	_rst = _map.find(_clr1)->second * 10 + _map.find(_clr2)->second;
	_rst *= pow(10, _map.find(_clr3)->second);
	cout << _rst << endl;
	return 0;
}