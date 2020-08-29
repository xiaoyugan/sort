#pragma once
#include"Help.h"

void BubbleSort(vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size() - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				Switch(a[j], a[j + 1]);
			}
		}
		cout << "第" << i + 1 << "遍循环" << endl;
		Print(a);
	}
	Print(a);
}

//optimiaze bubble sort
void OptimiazeBubbleSort1(vector<int>& a)
{
	//有时排完序了也会继续循环，设置一个标志位，当第I轮排序没换位，则说明已经排序完毕
	for (int i = 0; i < a.size(); i++)
	{
		int flag = 1;
		for (int j = 0; j < a.size() - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				Switch(a[j], a[j + 1]);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			Print(a);
			return;
		}
		cout << "第" << i + 1 << "遍循环" << endl;
		Print(a);
	}
}

//在1的基础上优化   记录上一轮最后一次发生交换的位置，下一次只交换到这个位置，因为之后的位置已经排序完成
void OptimiazeBubbleSort2(vector<int>& a)
{
	int len = a.size();
	int temp = 0;
	//有时排完序了也会继续循环，设置一个标志位，当第I轮排序没换位，则说明已经排序完毕
	for (int i = 0; i < a.size(); i++)
	{
		int flag = 1;
		for (int j = 0; j < len - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				Switch(a[j], a[j + 1]);
				flag = 0;
				temp = j;
			}
		}
		len = temp;
		if (flag == 1)
		{
			Print(a);
			return;
		}
		cout << "第" << i + 1 << "遍循环" << endl;
		Print(a);
	}
}