//C++��C#�ĽӿڶԱ�Test
#include<iostream>
using namespace std;

//class Grandpa
//{
//public:
//	Grandpa(int _old) :old(_old) { cout << "�游�Ĺ��캯��" << endl; }
//
//	virtual void Show() { cout << "�游�����䣺"+old << endl; }
//
//	//������������֤��̬ʱ���������ȷ����˳��
//	virtual ~Grandpa() { cout << "�游����������" << endl; }
//private:
//	int old;
//};

class Grandma
{
public:
	Grandma(int _old) :old(_old) { cout << "��ĸ�Ĺ��캯��" << endl; }

	virtual void Show() { cout << "��ĸ�����䣺" + old << endl; }

	//������������֤��̬ʱ���������ȷ����˳��
	virtual ~Grandma() { cout << "��ĸ����������" << endl; }
private:
	int old;
};

class Father:public Grandma/*,public Grandpa*/
{
public:
	Father():Grandma(90)/*,Grandpa(88) */{  }
	virtual void show(){ cout << "���׵�����"<< endl; }
};

int main()
{
	Grandma& gm;
	//Grandpa gp(88);
	/*Father fa;
	fa.Grandma::Show();*/
	gm.Show();
	//����ָ��ָ���ຯ��
	//����ָ����û��ຯ��

	system("pause");
}
