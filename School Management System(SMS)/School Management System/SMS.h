#include <iostream>
#include <string>
using namespace std;
class Course;
class parentcourse;
class Student;
class Teacher;
class Marks;
class Person
{
public:
	string reg_Date, email, contactNo, password, address;
	string f_name, l_name, gender;
};
class Admin :public Person
{
public:
	Admin();
	bool checkpassword(string, string);
	void AddNewStudent(Student &, string, string, string, string, string, string, string, string, string, string, string, string, string, string, string, string, int, string);
	void EditSudentData(string**, string, int, string, string, string);
	void AddNewTeacher(Teacher & tobj, string f, string l, string email, string joining, string password, string cnic, string gender, string qual, string cntct, string dob, string address, int salary);
	void EditTeacherData(string**, int, string, string, string, string, string);
	void Addcourses(Course&, string, string, string, string);
	void AssignCourse(Course&, string, string,string,string);
	bool checkdigit(string);
};
class Teacher :public Person
{
public:
	string cnic, qualification, dob;
	int Salary;
	void AddMarks(string**,int,string, string, string, string, string, string, string, string, int);
	bool TeacherLogin(string**,int,int&,string, string);
};
class Student :public Person
{
	friend class Admin;
	int rollNo, fees;
public:
	string class_grade, father, mother, father_prof, mother_prof, DOB, parent_contactNo, bloodGrp;
	bool login(string **, int, string, string);
	int StringtoInt(string);
	string calculateGrade(int, int);
};
class Parent
{
protected:
	Student stud_obj;
public:
	bool validatelogin(string **, int, string, string);
	void addfeedback(string, string, string);
};
class parentcourse
{
public:
	string parent_course;
	void setparent_course(string);
	string getparent_course();
	parentcourse()
	{
		parent_course = " ";
	}
};
class Course
{
public:
	parentcourse p;
	string courseName, courseCode, class_grade;
	Course()
	{
		courseName = courseCode = class_grade = " ";
	}
};
class Marks
{
public:
	int obtained, total;
};