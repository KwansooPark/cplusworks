#include <iostream>
using namespace std;

/*
	������: ���۷���(������ ������ ������ ���̴� ���)
	<�ڷ���&����������>
*/

int main()
{
	int n = 1;
	int& x = n;
	int& y = n;

	cout << "x= " << x << endl;

	x = 3;
	cout << "x=" << x << endl; //3

	return 0;
}