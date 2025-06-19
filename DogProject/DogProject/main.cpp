//dog.h -> 클래스의 선언부 표기
//헤더 파일 

#include <iostream>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string type, int age);
	~Dog() {}

	string getType();
	int getAge();
};ㄹ