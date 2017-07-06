/* 
 * 二分切割
 *
 * C语言中main函数可以递归
 * C++中不允许main函数递归（不代表不能使用，但不保障绝对安全）
 *
 */

#include <iostream>

using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level); 

int main(int argc, char *args[])
{
	char ruler[Len];
	int i;
	for (i = 1; i < Len-2; ++i)
		ruler[i] = '.';
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;

	//最多切割6次
	for (i = 1; i <= Divs; ++i)
	{
		subdivide(ruler, min, max, i);	
		cout << ruler << endl;

		//数据恢复，可以省略
		for (int j = 1; j < Len -2; ++j)
			ruler[j] = '.';
	}

	return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;

	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level -1);
	subdivide(ar, mid, high, level -1);
}
