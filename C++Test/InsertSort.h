#pragma once
#include"Help.h"
//����������һ�ִ�������˿�ʼ���ζ����ݽ���������㷨������������У���������
//½����λ�����Ҳ����µľ��ǻ�δ����������ݡ����������˼·���Ǵ��Ҳ��δ����������
//ȡ��һ�����ݣ�Ȼ�������뵽�����������ں��ʵ�λ���ϡ�

void InsertSort(vector<int>&a)
{
	for (int i = 0; i < a.size()-1; i++)
	{
		//jǰ�����Ѿ��ź���ģ�j������û�ź����
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