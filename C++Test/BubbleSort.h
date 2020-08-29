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
		cout << "��" << i + 1 << "��ѭ��" << endl;
		Print(a);
	}
	Print(a);
}

//optimiaze bubble sort
void OptimiazeBubbleSort1(vector<int>& a)
{
	//��ʱ��������Ҳ�����ѭ��������һ����־λ������I������û��λ����˵���Ѿ��������
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
		cout << "��" << i + 1 << "��ѭ��" << endl;
		Print(a);
	}
}

//��1�Ļ������Ż�   ��¼��һ�����һ�η���������λ�ã���һ��ֻ���������λ�ã���Ϊ֮���λ���Ѿ��������
void OptimiazeBubbleSort2(vector<int>& a)
{
	int len = a.size();
	int temp = 0;
	//��ʱ��������Ҳ�����ѭ��������һ����־λ������I������û��λ����˵���Ѿ��������
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
		cout << "��" << i + 1 << "��ѭ��" << endl;
		Print(a);
	}
}