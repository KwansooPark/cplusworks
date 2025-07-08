#include <iostream>
using namespace std;

//문자열을 정수로 변환하는 프로그램
// '123' -> 123
int stringToInt(const char x[]) {
	int sum = 0;
	int len = strlen(x);

	for (int i = 0; i < len; i++) {
		if (x[i] > '0' && x[i] <= '9')
			sum = sum * 10 + (x[i] - '0');
		else
			throw x; //25a, 예외 발생(비정상 문자)
	}
	return sum;
}

int main()
{
	int n;

	try {
		n = stringToInt("12a");

		cout << "\"12\"는 정수" << n << "으로 변환됨\n";
	}
	catch (const char* str) {	//문자 예외인 경우 char* str 로 받음
		cout << str << "처리에서 예외 발생!" << endl;
	}
	//char s[] = "apple";
	//cout << strlen(s) << endl; //문자열의 갯수

	//int x = '0'; //아스키 코드
	//int y = '1';

	//cout << x << ", " << y << endl;	// 48, 49
	//cout << y - x << endl; //1

	return 0;
}