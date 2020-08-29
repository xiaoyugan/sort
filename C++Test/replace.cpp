#include<iostream>
using namespace std;

string RaplaceAll(string &ori)
{
	int len = ori.length();
	//不写死成6，找到第一个_的位置
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