#include <iostream>
using namespace std;

/*
	template 키워드를 사용한 템플릿 함수 생성
	모든 자료형을 대입할 수 있다.
*/

class Math {
public:
	//T는 일반 자료형: 사용할 때 적절한 자료형을 사용하면 된다.
	template<typename T> 
	static T myAbs(T x) {
		return (x < 0) ? -x : x;
	}

	template<typename T>
	static T min(T x, T y) {
		return (x < y) ? x : y;
	}

};

int main()
{
	//Math 클래스의myAbs() 호출
	
	//정수형 값 대입
	cout << "절대값: " << Math::myAbs(-8) << endl; //8
	//실수형 값 대입: Double 타입 지원
	cout << "절대값: " << Math::myAbs(-8.8) << endl; //8.8

	//min() 호출
	cout << "최솟값: " << Math::min(10, 20) << endl; //10
	cout << "최솟값: " << Math::min(10.1, 20.1) << endl; //10.1

	return 0;
}
