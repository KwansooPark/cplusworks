//dog.h -> Ŭ������ ����� ǥ��
//��� ���� 

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
};��