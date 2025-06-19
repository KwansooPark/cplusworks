#include <iostream>

using namespace std;

/*
	C++은 모두 사용
	배열(array): 같은(한 가지) 유형의 여러 개의 자료를 저장하는 자료형
	구조체(struct): 여러 개의 자료형을 묶은 복합 자료형
	클래스(class): 여러개의 자료형과 변수(속성), 여러 개의 함수(기능)를 포함한 자료형
				 : C언어의 구조체에 함수에 포함된 형태
	클래스의 구성요소: 멤버 변수, 생성자, 멤버 변수
					: 생성자(constructor)는 생략되면 컴파일러가 처리 해준다.
					: 소멸자도 생략하면 컴파일러가 처리 해준다.
*/

//Dog 클래스 정의ㄴ
class Dog {
	//멤버 변수
public:	//외부에서 접근 가능
	string type;	//종류
	int age;		//나이

	Dog() {} // 기본 생성자(생략 가능)

	~Dog() {	//소멸자(destructor)
		cout << " 객체가 소멸합니다.\n" << endl;
	}

	//멤버 함수
	void bark() {
		cout << "왈! 왈!\n";
	}
};

int main()
{
	//클래스 사용: 인스턴스(객체) 생성
	//클래스 이름 인스턴스(객체)
	//Dog dog1=Dog();	Dog(): 생성자 스타일
	Dog dog1;

	//멤버에 접근 시 점(.) 연산자 사용
	dog1.type = "진돗개";
	dog1.age = 3;

	cout << "강아지 종류: " << dog1.type << endl;
	cout << "강아지 나이: " << dog1.age << endl;
	dog1.bark();


	return 0;
}