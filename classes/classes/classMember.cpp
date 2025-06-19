#include <iostream>
using namespace std;

void displayInfo();


class Member {
private:
	string id;
	string password;
};

void Member::displayInfo() {
	cout << "아이디: " << this->id << ", "
		<< "패스워드: " << this->password << endl;
}

int main()
{
	Member member[3] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};
	
	cout << "******회원 현황**************" << endl;
	for (int i = 0; i < size(members); i++) {
		members[i].displayInfo();
	}

	return 0;
}
