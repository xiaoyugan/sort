//C++和C#的接口对比Test
#include<iostream>
using namespace std;

//class Grandpa
//{
//public:
//	Grandpa(int _old) :old(_old) { cout << "祖父的构造函数" << endl; }
//
//	virtual void Show() { cout << "祖父的年龄："+old << endl; }
//
//	//虚析构函数保证多态时能子类的正确析构顺序
//	virtual ~Grandpa() { cout << "祖父的析构函数" << endl; }
//private:
//	int old;
//};

class Grandma
{
public:
	Grandma(int _old) :old(_old) { cout << "祖母的构造函数" << endl; }

	virtual void Show() { cout << "祖母的年龄：" + old << endl; }

	//虚析构函数保证多态时能子类的正确析构顺序
	virtual ~Grandma() { cout << "祖母的析构函数" << endl; }
private:
	int old;
};

class Father:public Grandma/*,public Grandpa*/
{
public:
	Father():Grandma(90)/*,Grandpa(88) */{  }
	virtual void show(){ cout << "父亲的年龄"<< endl; }
};

int main()
{
	Grandma& gm;
	//Grandpa gp(88);
	/*Father fa;
	fa.Grandma::Show();*/
	gm.Show();
	//基类指针指向父类函数
	//父类指针调用基类函数

	system("pause");
}
