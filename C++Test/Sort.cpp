#include"BubbleSort.h"
#include"SelectSort.h"
#include"InsertSort.h"

//main 默认是void还是int
int main()
{
	vector<int> a = { 2,3,1,5,7,4,6};

	//BubbleSort(a);
	//OptimiazeBubbleSort1(a);
	//OptimiazeBubbleSort2(a);
	
	//SelectSort(a);
	InsertSort(a);

	system("pause");
	return 0;
}