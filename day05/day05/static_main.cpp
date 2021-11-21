#include "student.h"

int Student::serialNum = 100; //static 변수인 경우 명시함
int main() {
    Student s1 = Student();
    cout << "학번 : " << s1.getStudentId() << endl;

    Student s2 = Student();
    cout << "학번 : " << s2.getStudentId() << endl;

    Student s3 = Student();
    cout << "학번 : " << s3.getStudentId() << endl;

    return 0;
}