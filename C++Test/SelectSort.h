#pragma once
#include"Help.h"

void SelectSort(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		int min = a[i];
		for (int j = i; j < a.size(); j++)
		{
			if (a[j] < min)
			{
				min = a[j];
				Switch(a[i], a[j]);
			}
		}
	}
	Print(a);
}