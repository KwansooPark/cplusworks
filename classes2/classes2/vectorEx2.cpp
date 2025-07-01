#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//여러 개의 문자를 저장할 벡터 생성
	vector<string> list;
	string name;  //이름

	//요소 추가
	list.push_back("jerry");
	list.push_back("luna");
	list.push_back("han");
	list.push_back("elsa");

	//2번 검색
	cout << list[2] << endl;

	//전체 조회
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " " ;
	}
	cout << endl;

	//사전에서 가장 뒤에 나오는 이름(최대값)
	//a(97) b(98)..... 아스키 코드값 대소 비교
	name = list[0]; //최대값 설정
	for (int i = 0; i < list.size(); i++) {
		if (list[i] > name)
			name = list[i];
	}
	cout << "사전에서 가장 뒤에 나오는 이름: " << name << endl;

	return 0;
}