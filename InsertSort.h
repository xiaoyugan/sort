#pragma once
#include"Help.h"
//插入排序是一种从序列左端开始依次对数据进行排序的算法。在排序过程中，左侧的数据
//陆续归位，而右侧留下的就是还未被排序的数据。插入排序的思路就是从右侧的未排序区域内
//取出一个数据，然后将它插入到已排序区域内合适的位置上。

void InsertSort(vector<int>&a)
{
	for (int i = 0; i < a.size()-1; i++)
	{
		//j前面是已经排好序的，j后面是没排好序的
		int j = i;
		while(j >= 0)
		{
			if (a[j + 1] < a[j])
			{
				Switch(a[j + 1], a[j]);
			}
			j--;
		}
		
	}
	Print(a);
}