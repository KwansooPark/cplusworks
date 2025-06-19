#include <iostream>
using namespace std;

/*
	참조자: 레퍼런스(기존의 변수에 별명을 붙이는 방법)
	<자료형&참조변수명>
*/

void swapVal(int a, int b);
void swapRef(int& a, int& b);
void swapRef(int& a, int& b);
int main()
{
	//변수값 교환
	int x = 10, y = 20;

	cout << "값에 의한 호출\n";
	swapVal(x, y);
	cout << "x = " << x << ", y=" << y << endl;

	cout << "참조에 의한 호출\n";
	swapRef(x, y);
	cout << "X=" << x << ", y=" << y << endl;

	cout << "포인터에 의한 호출\n";
	swapRef2(&x, &y);
	cout << "x=" << x << ", y=" << y << endl;

	return 0;
}

void swapVal(int a, int b) {
	int temp;
	a = b;
	b = temp;
}

//참조자 교환 함수
void swapRef(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//포인터 교환 함수
void swapRef(int& a, int& b) {
	int temp;
	temp = *a;
	a = *b;
	*b = temp;