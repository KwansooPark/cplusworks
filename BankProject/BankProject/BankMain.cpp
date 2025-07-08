#include "BankAccount.h"

vector <BankAccount> accounts;
int nextAccountNumber = 1000; //계좌번호

//계좌생성
void createAccount() {
	string name;	//계좌주를 저장
	cout << "계좌주를 입력하세요: ";
	cin >> name;
	
	//신규 계좌 생성
	BankAccount newAccount(nextAccountNumber, name);
	accounts.push_back(newAccount);	//생성된 계좌 벡터에 저장
	cout << "계좌가 성공적으로 생성되었습니다.(계좌번호: " <<
		nextAccountNumber << ")\n";
	//계좌번호 1증가
	nextAccountNumber++;
}

//계좌 검색 
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		//계좌 일치여부 확인
		if (account.getAccountNumber() == accNum) {
			return &account; //시작 주소를 반환함
		}
	}
	return nullptr;
}

//예금
void deposit() {
	int accNum;	//외부에서 입력할 계좌번호
	int amount; //입금액

	::cout << "입금할 계좌번호를 입력하세요: ";
	cin >> accNum;

	//기존 계좌 검색

}

//기존 계좌 검색
BankAccount* account = searchAccount(accNum);
if (account) {
	cout << "입금할 금액을 입력하세요. : \n"
	cin >> amount;
	//숫자가 아닌 경우 오류 처리
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n'); //개행문자를 제외(무시)
		cout << "숫자를 입력하세요.\n";
		return; //즉시 종료
	}
	account->deposit(amount); //호출
}
else {
	cout << "계좌번호를 찾을 수 없습니다.\n";
}

//출금
void withdraw() {
	int accNum;	//외부에서 입력할 계좌번호
	int amount; //입금액

	cout << "출금할 계좌번호를 입력하세요: ";
	cin >> accNum;

	//기존 계좌 검색
	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "출금할 금액을 입력하세요. : \n"
			cin >> amount;
		//숫자가 아닌 경우 오류 처리
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n'); //개행문자를 제외(무시)
			cout << "숫자를 입력하세요.\n";
			return; //즉시 종료
		}
		account->withdraw(amount); //호출
	}
	else {
		cout << "계좌번호를 찾을 수 없습니다.\n";
	}
}

//계좌 검색 및 정보 출력
void displayAccount() {
	int accNum;
	cout << "조회할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else
		cout << "계좌번호를 찾을 수 없습니다.\n";
}


int main()
{
	bool run = true;
	int choice;	//메뉴

	while (run) {
		cout << "=======================================================\n";
		cout << "1. 계좌생성 | 2. 예금 | 3. 출금| 4. 계좌검색 | 5. 종료\n";
		cout << "=======================================================\n";
		cout << "선택>";
		cin >> choice; // 메뉴 선택

		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			displayAccount();
			break;
		case 5:
			run = false;
			cout << "프로그램을 종료합니다.\n";
			break;
		default:
			cout << "지원되지 않는 기능입니다.\n";
			break;
		}
	}

	system("pause");
	return 0;
}