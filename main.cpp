#include "./lib/Blackboard.h"
#include <iostream>

using namespace std;

int main()
{
    Blackboard BB;
    Administrator Admin("Admin", "Admin@Admin.com", 123, 1);
    Teacher Teach("Alice", "Alice@teacher.com", 123123, 2);

    BB.administrator.push_back(Admin);
    BB.teacher.push_back(Teach);

    Student Bob("Bob", "bob@email.com", 123, 2022, 2);
    CourseInstance MyCourse("Test Course", "TC", 10, 2, 4);

    cout << MyCourse.students.size() << endl;
    Admin.enrollStudentCourse(Bob, MyCourse);
    cout << MyCourse.students.size() << endl;

    Teach.hello();
    Admin.hello();

    cout << Admin.info();

    //Admin.info();
    //Teach.info();

    BB.print(Admin);
    BB.printEveryoneInCoures(MyCourse);



    return 0;
}