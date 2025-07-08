#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//성적 리스트 만들기: 학생 클래스 정의
class Student {
private:
	string name;
	int eng;
	int math;
	double avg;

public:
	//설정자
	void setName(string name) {this->name = name;}
	void setEng(int eng) { this->eng = eng; }
	void setMath(int math) { this->math = math; }
	//평균 계산 함수
	void calculateAvg() {
		avg = (double)(eng + math) / 2;
	}
	
	//접근자
	string getName() { return name; }
	int getEng() { return eng; }
	int getMath() { return math; }
	double getAvg() { return avg; }
};


int main()
{
	ofstream fout("scorelist.txt");
	Student students[3];

	if (!fout) {
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	//키보드 입력
	for (int i = 0; i < 3; i++) {
		string name;
		int eng, math;

		cout << i + 1 << "번째 학생의 이름: ";
		getline(cin, name); //공백 포함
		students[i].setName(name);

		cout << "영어 점수 입력: ";
		cin >> eng;
		students[i].setEng(eng);

		cout << "수학 점수 입력: ";
		cin >> math;
		students[i].setMath(math);

		cin.ignore();	//getline() 함수가 읽은 개행문자 무시
		
		students[i].calculateAvg();
	}

	//파일에 쓰기
	for (int i = 0; i < 3; i++) {
		fout << students[i].getName() << " "
			<< students[i].getEng() << " "
			<< students[i].getMath() << " "
			<< students[i].getAvg() << endl;
	}

	fout.close();

	return 0;
}
