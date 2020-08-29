#pragma once

#include<iostream>
#include<vector>
using namespace std;
//ÉýÐò
//*ºÍ&
void Switch(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void Print(vector<int>& a)
{
	for (auto i : a)
	{
		cout << i << "_";
	}
	cout << endl;
}