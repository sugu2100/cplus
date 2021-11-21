#include "student.h"

int main() {

	while (true) {
		system("cls");
		//메뉴 출력
		cout << "1.학생 등록" << endl;
		cout << "2.학생 목록" << endl;
		cout << "3.학생 검색" << endl;
		cout << "4.학생 삭제" << endl;
		cout << "5.종료" << endl;
		cout << "메뉴를 선택하세요 : ";

		int menu;     //enum MENU menu - 열거형 상수
		cin >> menu;

		/*switch (menu) {
		case MENU_INSERT:
			cout << "학생 등록" << endl;
			break;
		case MENU_LIST:
			cout << "학생 목록" << endl;
			break;
		case MENU_SELECT:
			cout << "학생 검색" << endl;
			break;
		case MENU_DELETE:
			cout << "학생 삭제" << endl;
			break;
		case MENU_EXIT:
			cout << "종료" << endl;
			break;
		default:
			cout << "메뉴를 잘못 눌렀습니다." << endl;
			break;
		}*/
		
	}

	return 0;
}