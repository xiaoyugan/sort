#include<iostream>
using namespace std;

string RaplaceAll(string &ori)
{
	int len = ori.length();
	//��д����6���ҵ���һ��_��λ��
	//int index = 0;
	//index = ori.find("_");
	ori=ori.replace(ori.begin()+ ori.find("_"),ori.end(),"");
 
	return ori;
}

int main()
{
	string o = "h073s1_pri001";
	cout << RaplaceAll(o) << endl;
	system("pause");
	return 0;
}