/* 
 * C语言中main函数可以递归
 * C++中不允许main函数递归（不代表不能使用，但不保障绝对安全）
 *
 */

#include <iostream>

using namespace std;

void countdown(int n);

int main(int argc, char *args[])
{
	countdown(4);

	return 0;
}

void countdown(int n)
{
	cout << "Counting down ... " << n << "\t(n at " << &n << ")" << endl;
	if (n > 0)
		countdown(n-1);
	cout << n << ": Kaboom!" << "\t\t(n at " << &n << ")" << endl;
}
