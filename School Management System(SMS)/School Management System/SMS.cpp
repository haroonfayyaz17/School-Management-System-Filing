#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "SMS.h"
Admin::Admin()
{
	email = "admin@gmail.com";
	password = "123456";
}
bool Admin::checkpassword(string name, string pass)
{
	if (email == name&&password == pass)
		return true;
	else
		return false;
}
void Admin::AddNewStudent(Student &student, string first, string last, string email, string date, string Contactno, string pass, string Address, string g, string Class, string fathername, string mothername, string f_prof, string m_prof, string dob, string contact, string BloodGroup, int Fees, string parent_email)
{
	string data;
	int index = 0;
	student.f_name = first;
	student.l_name = last;
	student.email = email;
	student.reg_Date = date;
	student.password = pass;
	student.address = Address;
	student.gender = g;
	student.contactNo = Contactno;
	student.class_grade = Class;
	student.father = fathername;
	student.mother = mothername;
	student.father_prof = f_prof;
	student.mother_prof = m_prof;
	student.parent_contactNo = contact;
	student.bloodGrp = BloodGroup;
	student.fees = Fees;
	student.DOB = dob;
	ifstream indata("Students");
	while (getline(indata, data))
		index++;
	indata.close();
	student.rollNo = 1000 + index;
	ofstream outdata("Students.txt", ios::app);
	outdata << student.rollNo << "<" << student.f_name << "<" << student.l_name << "<" << student.email << "<" << student.password << "<" << student.DOB << "<" << student.reg_Date << "<" << student.gender << "<" << student.contactNo << "<" << student.class_grade << "<" << student.father << "<" << student.mother << "<" << student.father_prof << "<" << student.mother_prof << "<" << student.parent_contactNo << "<" << student.address << "<" << student.bloodGrp << "<" << student.fees << "<" << parent_email << endl;
	outdata.close();
}
void Admin::EditSudentData(string**arr, string key, int index, string address, string mobileno, string fees)
{
	ofstream outdata("Students.txt");
	int i = 0;
	bool found = false;
	while (found == false && i < index)
	{
		if (arr[i][3] == key)
		{
			found = true;
			arr[i][8] = mobileno;
			arr[i][15] = address;
			arr[i][17] = fees;
		}
		i++;
	}
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			outdata << arr[i][j];
			if (j != 18)
				outdata << "<";
		}
		outdata << endl;
	}

	outdata.close();
}
void Admin::EditTeacherData(string **arr, int count, string id, string address, string qual, string contact, string salary)
{
	ofstream out("Teachers.txt");
	int i = 0;
	bool found = false;
	while (found == false && i < count)
	{
		if (arr[i][1] + '.' + arr[i][0] == id)
		{
			arr[i][7] = qual;
			arr[i][8] = contact;
			arr[i][10] = address;
			arr[i][11] = salary;
			found = true;
		}
		i++;
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			out << arr[i][j];
			if (j != 11)
				out << " ";
		}
		out << endl;
	}
	out.close();
}
void Admin::AddNewTeacher(Teacher & tobj, string f, string l, string email, string joining, string password, string cnic, string gender, string qual, string cntct, string dob, string address, int salary){
	tobj.f_name = f;
	tobj.l_name = l;
	tobj.email = email;
	tobj.reg_Date = joining;
	tobj.password = password;
	tobj.address = address;
	tobj.gender = gender;
	tobj.contactNo = cntct;
	tobj.cnic = cnic;
	tobj.Salary = salary;
	tobj.qualification = qual;
	tobj.dob = dob;

	ofstream out;

	out.open("Teachers.txt", ios::app);
	out << tobj.f_name << " " << tobj.l_name << " " << tobj.email << " " << tobj.reg_Date << " " << tobj.password << " " << tobj.cnic << " " << tobj.gender << " " << tobj.qualification << " " << tobj.contactNo << " " << tobj.dob << " " << tobj.address << " " << tobj.Salary << endl;
	out.close();
}
void Admin::AssignCourse(Course& course, string teacher, string c, string Class, string section)
{
	ifstream indata("TeacherCourses.txt");
	int count = 0;
	string data, **arr;
	while (getline(indata, data))
		count++;
	arr = new string*[count];
	for (int i = 0; i < count; i++)
		arr[i] = new string[4];
	indata.close();
	indata.open("TeacherCourses.txt");
	int i = 0, j = 0;
	while (i < count)
	{
		if (j == 3)
		{
			getline(indata, data);
			arr[i][j] = data;
			i++;
			j = 0;
		}
		else
		{
			getline(indata, data, '<');
			arr[i][j] = data;
			j++;
		}
	}
	i = 0;
	bool found = false;
	while (i < count&&found == false)
	{
		if (arr[i][0] == teacher&&arr[i][1] == c&&arr[i][2] == Class)
			found = true;
		i++;
	}
	if (found != true)
	{
		ofstream outdata("TeacherCourses.txt", ios::app);
		outdata << teacher << "<" << c << "<" << Class << "<" << section << endl;
		outdata.close();
	}
}
void Admin::Addcourses(Course &course, string p_course, string name, string code, string Class)
{
	course.p.parent_course = p_course;
	course.courseName = name;
	course.courseCode = code;
	course.class_grade = Class;
	ofstream outdata("Courses.txt", ios::app);
	outdata << course.p.parent_course << "<" << course.courseName << "<" << course.courseCode << "<" << course.class_grade << endl;
	outdata.close();
}
bool Admin::checkdigit(string text)
{
	for (int i = 0; i < text.length(); i++)
		if (text[i]<'0' || text[i]>'9')
			return false;
	return true;
}
bool Teacher::TeacherLogin(string **arr, int count, int &index, string username, string password)
{
	int i = 0;
	while (i < count)
	{
		if (arr[i][2] == username&&arr[i][4] == password)
		{
			index = i;
			return true;
		}
		i++;
	}
	return false;
}
void Teacher::AddMarks(string **arr, int count, string rollNo, string name, string type, string number, string c, string Class, string date, string obt, int total)
{
	int i = 0;
	bool found = false;
	while (i < count&&found == false)
	{
		if (arr[i][0] == rollNo&&arr[i][1] == name&&arr[i][2] == type&&arr[i][3] == number&&arr[i][4] == c&&arr[i][5] == Class)
			found = true;
		i++;
	}
	if (!found)
	{
		ofstream outdata("Marks.txt", ios::app);
		outdata << rollNo << "<" << name << "<" << type << "<" << number << "<" << c << "<" << Class << "<" << date << "<" << obt << "<" << total << "\n";
		outdata.close();
	}
}
bool Student::login(string **arr, int index, string mail, string p_word)
{
	int j = 0;
	while (j < index)
	{
		if (arr[j][18] == mail&&arr[j][4] == p_word)
			return true;
		j++;
	}
	return false;
}
int Student::StringtoInt(string word)
{
	int sum = 0;
	for (int i = 0; i < word.length(); i++)
	{
		int n = word[word.length() - i - 1] - 48;
		sum = sum + (n*pow(10, i));
	}
	return sum;
}
string Student::calculateGrade(int obt, int total)
{
	string grade;
	float p = (obt * 100) / total;
	if (p >= 90 && p <= 100)
		grade = "A+";
	else if (p >= 80 && p < 90)
		grade = "A";
	else if (p >= 70 && p < 80)
		grade = "B";
	else if (p >= 60 && p < 70)
		grade = "C";
	else if (p >= 50 && p < 60)
		grade = "D";
	else if (p >= 40 && p < 50)
		grade = "E";
	else
		grade = "F";
	return grade;
}
bool Parent::validatelogin(string **arr, int index, string mail, string p_word)
{
	if (stud_obj.login(arr, index, mail, p_word))
		return true;
	else
		return false;
}
void Parent::addfeedback(string mail, string sub, string f_back)
{
	ofstream outdata("Feedback.txt", ios::app);
	outdata << mail << "<" << sub << "<" << f_back << endl;
	outdata.close();
}
void parentcourse::setparent_course(string c)
{
	parent_course = c;
}
string parentcourse::getparent_course()
{
	return parent_course;
}