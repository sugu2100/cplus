#include "student.h"

int Student::serialNum = 100; //static ������ ��� �����
int main() {
    Student s1 = Student();
    cout << "�й� : " << s1.getStudentId() << endl;

    Student s2 = Student();
    cout << "�й� : " << s2.getStudentId() << endl;

    Student s3 = Student();
    cout << "�й� : " << s3.getStudentId() << endl;

    return 0;
}