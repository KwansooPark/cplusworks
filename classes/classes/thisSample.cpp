#include <iostream>
using namespace std;

/*
	this�� ��� ����: �ܺ� �Էº����� ��� ������ �̸��� ���� �Ͽ� �������� �� ȿ������ ������ ��.
	(java: this, pytho: sefl)

*/

class Birthday {
private:
	int day;
	int month;
	int year;

public:
	void setYear(int year) {
		//��ü �ڽ��� �޸𸮻��� �ּҸ� ��Ÿ���� ������
		this->year = year;
	}

	void printThis() {
		cout << this << endl;
	}

};

int main()
{
	Birthday bDay;
	bDay.setYear(2025);

	//��ü�� �ּ� ���
	cout << &bDay << endl;

	return 0;
}
