#pragma once
#include "SMS.h"
#include <msclr\marshal_cppstd.h>
#include <string.h>
#include <fstream>
#include <string>
using namespace std;
namespace SchoolManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	Admin admin;
	Student student;
	Teacher teacher;
	parentcourse parent;
	Course course_obj;
	Parent p;
	string **arr, **teacher_arr, **marks_arr, mail;
	int student_index = 0, teacher_count = 0, marks_count = 0, count = 0;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  mainpanel;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  adminbtn;



	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  email;

	private: System::Windows::Forms::TextBox^  lName;



	private: System::Windows::Forms::TextBox^  fName;

	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::ComboBox^  gender;





	private: System::Windows::Forms::TextBox^  mother;




	private: System::Windows::Forms::TextBox^  father;




	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  address;



	private: System::Windows::Forms::TextBox^  mother_prof;

	private: System::Windows::Forms::TextBox^  father_prof;
	private: System::Windows::Forms::TextBox^  B_grp;
	private: System::Windows::Forms::Panel^  EditStudentPanel;


	private: System::Windows::Forms::TextBox^  edit_address;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  student_combobox;


	private: System::Windows::Forms::Button^  submit_edit;
	private: System::Windows::Forms::Button^  cancel_edit;

	private: System::Windows::Forms::Panel^  AddCoursepanel;
	private: System::Windows::Forms::Button^  submit_addcourse;
	private: System::Windows::Forms::TextBox^  coursecode_box;
	private: System::Windows::Forms::ComboBox^  parentcouurse_combo;
	private: System::Windows::Forms::ComboBox^  class_combo;
	private: System::Windows::Forms::TextBox^  coursename_box;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  AssignCoursebtn;
	private: System::Windows::Forms::Button^  AddCoursebtn;
	private: System::Windows::Forms::Button^  ViewStudentbtn;
	private: System::Windows::Forms::Panel^  ViewStudentpanel;
	private: System::Windows::Forms::DataGridView^  StudentGrid;





	private: System::Windows::Forms::Label^  label12;




	private: System::Windows::Forms::Button^  viewStudentsback_btn;
	private: System::Windows::Forms::Panel^  ViewCoursespanel;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::DataGridView^  ViewCourseGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseCodeCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseNameCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ParentCourseCol;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  ViewCoursesBack_btn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RollNoCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NameCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  EmailCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  FeesCol;
	private: System::Windows::Forms::Panel^  error;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  error_ok;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  Teacher_Canel;
	private: System::Windows::Forms::Button^  Teacher_Submit;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::TextBox^  textBox13;





	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ComboBox^  comboBox4;

	private: System::Windows::Forms::TextBox^  textBox15;

	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  AddTeacherBTN;
	private: System::Windows::Forms::Button^  ViewFeeStatusbtn;

	private: System::Windows::Forms::Button^  button14;













	private: System::Windows::Forms::Panel^  ViewFeeStatus_panel;
	private: System::Windows::Forms::DataGridView^  FeeStatusGrid;



	private: System::Windows::Forms::Label^  label33;




	private: System::Windows::Forms::Button^  ViewFee_back;
	private: System::Windows::Forms::Panel^  error_editstudent;
	private: System::Windows::Forms::Button^  ok_editstudentbtn;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Panel^  ViewTeacherspanel;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::DataGridView^  ViewTeacherGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  teachernameCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  GenderCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DegreeCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MobileNoCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TeacherEmailCol;
	private: System::Windows::Forms::Panel^  AssignCoursepanel;

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::ComboBox^  SectioncomboBox;

	private: System::Windows::Forms::ComboBox^  CoursecomboBox;

	private: System::Windows::Forms::ComboBox^  TeachercomboBox;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Panel^  StudentPanel;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Panel^  FeedBack;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label41;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::TextBox^  textBox20;


	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Panel^  LoginFeedback;
	private: System::Windows::Forms::TextBox^  subject_login;
	private: System::Windows::Forms::RichTextBox^  feedback_login;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::ComboBox^  emailfeedbackcombo;
	private: System::Windows::Forms::Button^  ViewFeedbackbtn;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::TextBox^  parentemailText;

	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Panel^  TeacherPanel;
	private: System::Windows::Forms::Button^  teachercourses_btn;
	private: System::Windows::Forms::Button^  addmarks_btn;




	private: System::Windows::Forms::Panel^  teachercoursepanel;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::DataGridView^  teachercoursesgrid;




	private: System::Windows::Forms::Button^  backteachercourse;
	private: System::Windows::Forms::Panel^  teacherloginpanel;
	private: System::Windows::Forms::TextBox^  teacherusername_textbox;
	private: System::Windows::Forms::TextBox^  teacherpassword_textbox;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Button^  teacherback_btn;
	private: System::Windows::Forms::Button^  teacherloginbtn;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Panel^  addmarkspanel;
	private: System::Windows::Forms::MaskedTextBox^  totalmarks;

	private: System::Windows::Forms::MaskedTextBox^  date;

	private: System::Windows::Forms::ComboBox^  selectnumbercombo;

	private: System::Windows::Forms::ComboBox^  selecttypecombo;

	private: System::Windows::Forms::ComboBox^  selectsectioncombo;

	private: System::Windows::Forms::ComboBox^  selectcoursecombo;

	private: System::Windows::Forms::ComboBox^  selectclasscombo;

	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Button^  backbtn_AddMaks;
	private: System::Windows::Forms::DataGridView^  AddMarksGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rollNo_marksCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_MarksCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  obtainedmarksCol;
	private: System::Windows::Forms::Button^  showlistbtn;
	private: System::Windows::Forms::Button^  add_btn;
	private: System::Windows::Forms::Panel^  parent_optpanel;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::Button^  ViewFeeBTN;
	private: System::Windows::Forms::Button^  GiveFeedbackBTN;
	private: System::Windows::Forms::Panel^  WhichChildPanel;
	private: System::Windows::Forms::Label^  label89;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  SeeChildFeeStatusBTN;
	private: System::Windows::Forms::ComboBox^  View_Fee_OfMonthCB;
	private: System::Windows::Forms::ComboBox^  RollNoCB;
	private: System::Windows::Forms::Label^  label91;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::DataGridView^  FeeStatusGridForParents;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Roll_no_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Month_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prev_dues_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fine_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Library_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Academic_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LateFine_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  FeeStatus_Col;
	private: System::Windows::Forms::Panel^  AddFeePanel;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  WriteFeetoFileBTN;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::TextBox^  LateFineTB;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::TextBox^  FineTB;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::TextBox^  Prev_Due_TB;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::TextBox^  LibraryFeeTB;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::TextBox^  FeeTB;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::ComboBox^  MonthFeeCB;
	private: System::Windows::Forms::ComboBox^  StudentAddFeeCB;
	private: System::Windows::Forms::Panel^  ViewMarksstudentpanel;
	private: System::Windows::Forms::DataGridView^  chemistrydatagrid;

	private: System::Windows::Forms::DataGridView^  physicsdatagrid;

	private: System::Windows::Forms::DataGridView^  Computerdatagrid;



	private: System::Windows::Forms::DataGridView^  urdudatagrid;

	private: System::Windows::Forms::DataGridView^  PSdatagrid;

	private: System::Windows::Forms::DataGridView^  sciencedatagrid;

	private: System::Windows::Forms::Label^  PSlabel;
	private: System::Windows::Forms::Label^  chemistrylabel;


	private: System::Windows::Forms::Label^  physicslabel;


	private: System::Windows::Forms::Label^  computerlabel;

	private: System::Windows::Forms::Label^  urdulabel;
	private: System::Windows::Forms::Label^  ISlabel;



	private: System::Windows::Forms::Label^  math_label;
	private: System::Windows::Forms::Label^  english_label;
	private: System::Windows::Forms::DataGridView^  Mathdatagrid;
	private: System::Windows::Forms::DataGridView^  englishdatagrid;
	private: System::Windows::Forms::Button^  viewmarksbtn;
	private: System::Windows::Forms::Button^  select;
	private: System::Windows::Forms::ComboBox^  selectstudentcombo;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Panel^  viewtranscriptpanel;
	private: System::Windows::Forms::ComboBox^  studentnamecombo;

	private: System::Windows::Forms::ComboBox^  selectsessioncombo;

	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::Button^  submittranscriptbtn;
	private: System::Windows::Forms::DataGridView^  ViewTranscriptGrid;



	private: System::Windows::Forms::Label^  studentnamelabel;
	private: System::Windows::Forms::Label^  label104;





	private: System::Windows::Forms::Label^  percentagelabel;
	private: System::Windows::Forms::Label^  percentage;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C_NameCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  obtmarkscol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TotalMarksCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gradeCol;
	private: System::Windows::Forms::Button^  viewTranscriptbtn;
	private: System::Windows::Forms::Button^  viewtranscript_btn;
	private: System::Windows::Forms::MaskedTextBox^  fees;
	private: System::Windows::Forms::MaskedTextBox^  regdate;
	private: System::Windows::Forms::MaskedTextBox^  edit_fees;
	private: System::Windows::Forms::MaskedTextBox^  edit_number;
	private: System::Windows::Forms::MaskedTextBox^  mobileNo;
	private: System::Windows::Forms::MaskedTextBox^  parentNo;
	private: System::Windows::Forms::MaskedTextBox^  password;
	private: System::Windows::Forms::MaskedTextBox^  DOB;
	private: System::Windows::Forms::MaskedTextBox^  textBox16;
	private: System::Windows::Forms::MaskedTextBox^  textBox10;
	private: System::Windows::Forms::MaskedTextBox^  textBox6;
	private: System::Windows::Forms::MaskedTextBox^  textBox7;
	private: System::Windows::Forms::MaskedTextBox^  textBox11;
	private: System::Windows::Forms::MaskedTextBox^  textBox12;
	private: System::Windows::Forms::MaskedTextBox^  textBox14;
	private: System::Windows::Forms::MaskedTextBox^  textBox8;
	private: System::Windows::Forms::Panel^  error_teacher;
	private: System::Windows::Forms::Button^  error_teacherOK;

	private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  rollNO_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name_Col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Section_Col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Status_Col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseName_Col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class_Col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Section;












































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainpanel = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adminbtn = (gcnew System::Windows::Forms::Button());
			this->FeedBack = (gcnew System::Windows::Forms::Panel());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->error_teacher = (gcnew System::Windows::Forms::Panel());
			this->error_teacherOK = (gcnew System::Windows::Forms::Button());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->Teacher_Canel = (gcnew System::Windows::Forms::Button());
			this->Teacher_Submit = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ViewFeedbackbtn = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->ViewFeeStatusbtn = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->AddTeacherBTN = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->ViewStudentbtn = (gcnew System::Windows::Forms::Button());
			this->AssignCoursebtn = (gcnew System::Windows::Forms::Button());
			this->AddCoursebtn = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->LoginFeedback = (gcnew System::Windows::Forms::Panel());
			this->subject_login = (gcnew System::Windows::Forms::TextBox());
			this->feedback_login = (gcnew System::Windows::Forms::RichTextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->emailfeedbackcombo = (gcnew System::Windows::Forms::ComboBox());
			this->AssignCoursepanel = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->SectioncomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CoursecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->TeachercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ViewTeacherspanel = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->ViewTeacherGrid = (gcnew System::Windows::Forms::DataGridView());
			this->teachernameCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GenderCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DegreeCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MobileNoCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TeacherEmailCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->ViewCoursespanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ViewCoursesBack_btn = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ViewCourseGrid = (gcnew System::Windows::Forms::DataGridView());
			this->CourseCodeCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseNameCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ParentCourseCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ViewStudentpanel = (gcnew System::Windows::Forms::Panel());
			this->viewStudentsback_btn = (gcnew System::Windows::Forms::Button());
			this->StudentGrid = (gcnew System::Windows::Forms::DataGridView());
			this->RollNoCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmailCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FeesCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->password = (gcnew System::Windows::Forms::MaskedTextBox());
			this->parentNo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mobileNo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->DOB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->regdate = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fees = (gcnew System::Windows::Forms::MaskedTextBox());
			this->error = (gcnew System::Windows::Forms::Panel());
			this->error_ok = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->parentemailText = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->B_grp = (gcnew System::Windows::Forms::TextBox());
			this->mother_prof = (gcnew System::Windows::Forms::TextBox());
			this->father_prof = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->lName = (gcnew System::Windows::Forms::TextBox());
			this->mother = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->father = (gcnew System::Windows::Forms::TextBox());
			this->fName = (gcnew System::Windows::Forms::TextBox());
			this->EditStudentPanel = (gcnew System::Windows::Forms::Panel());
			this->edit_number = (gcnew System::Windows::Forms::MaskedTextBox());
			this->edit_fees = (gcnew System::Windows::Forms::MaskedTextBox());
			this->error_editstudent = (gcnew System::Windows::Forms::Panel());
			this->ok_editstudentbtn = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->submit_edit = (gcnew System::Windows::Forms::Button());
			this->cancel_edit = (gcnew System::Windows::Forms::Button());
			this->edit_address = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->student_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->AddCoursepanel = (gcnew System::Windows::Forms::Panel());
			this->submit_addcourse = (gcnew System::Windows::Forms::Button());
			this->coursecode_box = (gcnew System::Windows::Forms::TextBox());
			this->parentcouurse_combo = (gcnew System::Windows::Forms::ComboBox());
			this->class_combo = (gcnew System::Windows::Forms::ComboBox());
			this->coursename_box = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ViewFeeStatus_panel = (gcnew System::Windows::Forms::Panel());
			this->ViewFee_back = (gcnew System::Windows::Forms::Button());
			this->FeeStatusGrid = (gcnew System::Windows::Forms::DataGridView());
			this->rollNO_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Section_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->StudentPanel = (gcnew System::Windows::Forms::Panel());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->TeacherPanel = (gcnew System::Windows::Forms::Panel());
			this->teachercourses_btn = (gcnew System::Windows::Forms::Button());
			this->addmarks_btn = (gcnew System::Windows::Forms::Button());
			this->teachercoursepanel = (gcnew System::Windows::Forms::Panel());
			this->backteachercourse = (gcnew System::Windows::Forms::Button());
			this->teachercoursesgrid = (gcnew System::Windows::Forms::DataGridView());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->teacherloginpanel = (gcnew System::Windows::Forms::Panel());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->teacherusername_textbox = (gcnew System::Windows::Forms::TextBox());
			this->teacherpassword_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->teacherback_btn = (gcnew System::Windows::Forms::Button());
			this->teacherloginbtn = (gcnew System::Windows::Forms::Button());
			this->addmarkspanel = (gcnew System::Windows::Forms::Panel());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->showlistbtn = (gcnew System::Windows::Forms::Button());
			this->backbtn_AddMaks = (gcnew System::Windows::Forms::Button());
			this->AddMarksGrid = (gcnew System::Windows::Forms::DataGridView());
			this->rollNo_marksCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_MarksCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->obtainedmarksCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalmarks = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->selectnumbercombo = (gcnew System::Windows::Forms::ComboBox());
			this->selecttypecombo = (gcnew System::Windows::Forms::ComboBox());
			this->selectsectioncombo = (gcnew System::Windows::Forms::ComboBox());
			this->selectcoursecombo = (gcnew System::Windows::Forms::ComboBox());
			this->selectclasscombo = (gcnew System::Windows::Forms::ComboBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->parent_optpanel = (gcnew System::Windows::Forms::Panel());
			this->viewTranscriptbtn = (gcnew System::Windows::Forms::Button());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->viewmarksbtn = (gcnew System::Windows::Forms::Button());
			this->ViewFeeBTN = (gcnew System::Windows::Forms::Button());
			this->GiveFeedbackBTN = (gcnew System::Windows::Forms::Button());
			this->WhichChildPanel = (gcnew System::Windows::Forms::Panel());
			this->FeeStatusGridForParents = (gcnew System::Windows::Forms::DataGridView());
			this->Roll_no_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Month_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prev_dues_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fine_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Library_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Academic_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LateFine_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FeeStatus_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->SeeChildFeeStatusBTN = (gcnew System::Windows::Forms::Button());
			this->View_Fee_OfMonthCB = (gcnew System::Windows::Forms::ComboBox());
			this->RollNoCB = (gcnew System::Windows::Forms::ComboBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->AddFeePanel = (gcnew System::Windows::Forms::Panel());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->WriteFeetoFileBTN = (gcnew System::Windows::Forms::Button());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->LateFineTB = (gcnew System::Windows::Forms::TextBox());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->FineTB = (gcnew System::Windows::Forms::TextBox());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->Prev_Due_TB = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->LibraryFeeTB = (gcnew System::Windows::Forms::TextBox());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->FeeTB = (gcnew System::Windows::Forms::TextBox());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->MonthFeeCB = (gcnew System::Windows::Forms::ComboBox());
			this->StudentAddFeeCB = (gcnew System::Windows::Forms::ComboBox());
			this->ViewMarksstudentpanel = (gcnew System::Windows::Forms::Panel());
			this->select = (gcnew System::Windows::Forms::Button());
			this->selectstudentcombo = (gcnew System::Windows::Forms::ComboBox());
			this->chemistrydatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->physicsdatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->Computerdatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->urdudatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->PSdatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->sciencedatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->PSlabel = (gcnew System::Windows::Forms::Label());
			this->chemistrylabel = (gcnew System::Windows::Forms::Label());
			this->physicslabel = (gcnew System::Windows::Forms::Label());
			this->computerlabel = (gcnew System::Windows::Forms::Label());
			this->urdulabel = (gcnew System::Windows::Forms::Label());
			this->ISlabel = (gcnew System::Windows::Forms::Label());
			this->math_label = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->english_label = (gcnew System::Windows::Forms::Label());
			this->Mathdatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->englishdatagrid = (gcnew System::Windows::Forms::DataGridView());
			this->viewtranscriptpanel = (gcnew System::Windows::Forms::Panel());
			this->viewtranscript_btn = (gcnew System::Windows::Forms::Button());
			this->percentage = (gcnew System::Windows::Forms::Label());
			this->studentnamelabel = (gcnew System::Windows::Forms::Label());
			this->submittranscriptbtn = (gcnew System::Windows::Forms::Button());
			this->ViewTranscriptGrid = (gcnew System::Windows::Forms::DataGridView());
			this->C_NameCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->obtmarkscol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalMarksCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gradeCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->studentnamecombo = (gcnew System::Windows::Forms::ComboBox());
			this->selectsessioncombo = (gcnew System::Windows::Forms::ComboBox());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->percentagelabel = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->CourseName_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Section = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mainpanel->SuspendLayout();
			this->FeedBack->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->error_teacher->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->LoginFeedback->SuspendLayout();
			this->AssignCoursepanel->SuspendLayout();
			this->ViewTeacherspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTeacherGrid))->BeginInit();
			this->ViewCoursespanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewCourseGrid))->BeginInit();
			this->ViewStudentpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentGrid))->BeginInit();
			this->panel3->SuspendLayout();
			this->error->SuspendLayout();
			this->EditStudentPanel->SuspendLayout();
			this->error_editstudent->SuspendLayout();
			this->AddCoursepanel->SuspendLayout();
			this->ViewFeeStatus_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FeeStatusGrid))->BeginInit();
			this->StudentPanel->SuspendLayout();
			this->TeacherPanel->SuspendLayout();
			this->teachercoursepanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teachercoursesgrid))->BeginInit();
			this->teacherloginpanel->SuspendLayout();
			this->addmarkspanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddMarksGrid))->BeginInit();
			this->parent_optpanel->SuspendLayout();
			this->WhichChildPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FeeStatusGridForParents))->BeginInit();
			this->AddFeePanel->SuspendLayout();
			this->ViewMarksstudentpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chemistrydatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->physicsdatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Computerdatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->urdudatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PSdatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sciencedatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mathdatagrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->englishdatagrid))->BeginInit();
			this->viewtranscriptpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTranscriptGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// mainpanel
			// 
			this->mainpanel->BackColor = System::Drawing::Color::Moccasin;
			this->mainpanel->Controls->Add(this->button4);
			this->mainpanel->Controls->Add(this->button3);
			this->mainpanel->Controls->Add(this->label1);
			this->mainpanel->Controls->Add(this->adminbtn);
			this->mainpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainpanel->Location = System::Drawing::Point(0, 0);
			this->mainpanel->Name = L"mainpanel";
			this->mainpanel->Size = System::Drawing::Size(1028, 441);
			this->mainpanel->TabIndex = 0;
			this->mainpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Green;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Snow;
			this->button4->Location = System::Drawing::Point(371, 253);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 45);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Parent";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Navy;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Aqua;
			this->button3->Location = System::Drawing::Point(371, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Teacher";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Moccasin;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightCoral;
			this->label1->Location = System::Drawing::Point(201, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(591, 53);
			this->label1->TabIndex = 1;
			this->label1->Text = L"School Management System(SMS)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// adminbtn
			// 
			this->adminbtn->BackColor = System::Drawing::Color::Fuchsia;
			this->adminbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminbtn->ForeColor = System::Drawing::Color::Aqua;
			this->adminbtn->Location = System::Drawing::Point(371, 84);
			this->adminbtn->Name = L"adminbtn";
			this->adminbtn->Size = System::Drawing::Size(110, 46);
			this->adminbtn->TabIndex = 0;
			this->adminbtn->Text = L"Admin";
			this->adminbtn->UseVisualStyleBackColor = false;
			this->adminbtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// FeedBack
			// 
			this->FeedBack->BackColor = System::Drawing::Color::Cornsilk;
			this->FeedBack->Controls->Add(this->label76);
			this->FeedBack->Controls->Add(this->button21);
			this->FeedBack->Controls->Add(this->button20);
			this->FeedBack->Controls->Add(this->richTextBox1);
			this->FeedBack->Controls->Add(this->label44);
			this->FeedBack->Controls->Add(this->textBox21);
			this->FeedBack->Controls->Add(this->label43);
			this->FeedBack->Controls->Add(this->textBox20);
			this->FeedBack->Controls->Add(this->label42);
			this->FeedBack->Controls->Add(this->textBox19);
			this->FeedBack->Controls->Add(this->label41);
			this->FeedBack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FeedBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FeedBack->Location = System::Drawing::Point(0, 0);
			this->FeedBack->Name = L"FeedBack";
			this->FeedBack->Size = System::Drawing::Size(1028, 441);
			this->FeedBack->TabIndex = 4;
			this->FeedBack->Visible = false;
			this->FeedBack->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::FeedBack_Paint_1);
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(36, 14);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(183, 39);
			this->label76->TabIndex = 10;
			this->label76->Text = L"Give Feedback";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::ForestGreen;
			this->button21->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(236, 403);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(160, 39);
			this->button21->TabIndex = 9;
			this->button21->Text = L"Back";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click_1);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DeepPink;
			this->button20->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(665, 403);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(142, 38);
			this->button20->TabIndex = 8;
			this->button20->Text = L"Submit";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(39, 246);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(585, 145);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(39, 226);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(90, 19);
			this->label44->TabIndex = 6;
			this->label44->Text = L"FeedBack:";
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(39, 194);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(386, 26);
			this->textBox21->TabIndex = 5;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(36, 168);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(82, 19);
			this->label43->TabIndex = 4;
			this->label43->Text = L"Subject: ";
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox20->Enabled = false;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(39, 137);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(386, 26);
			this->textBox20->TabIndex = 3;
			this->textBox20->Text = L"Admin@gmail.com";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(36, 114);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(36, 19);
			this->label42->TabIndex = 2;
			this->label42->Text = L"To:";
			this->label42->Click += gcnew System::EventHandler(this, &MyForm::label42_Click);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox19->Enabled = false;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(40, 87);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(386, 26);
			this->textBox19->TabIndex = 1;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(37, 65);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(57, 19);
			this->label41->TabIndex = 0;
			this->label41->Text = L"From:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Cornsilk;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1028, 441);
			this->panel1->TabIndex = 2;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(178, 88);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Invalid login username or password";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(182, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 26);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(182, 198);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(206, 26);
			this->textBox1->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(49, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Password";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSalmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(108, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(482, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(414, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 41);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Admin";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Cornsilk;
			this->panel5->Controls->Add(this->error_teacher);
			this->panel5->Controls->Add(this->textBox7);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->textBox14);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->label69);
			this->panel5->Controls->Add(this->Teacher_Canel);
			this->panel5->Controls->Add(this->Teacher_Submit);
			this->panel5->Controls->Add(this->comboBox3);
			this->panel5->Controls->Add(this->comboBox2);
			this->panel5->Controls->Add(this->textBox13);
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1028, 441);
			this->panel5->TabIndex = 5;
			this->panel5->Visible = false;
			// 
			// error_teacher
			// 
			this->error_teacher->Controls->Add(this->error_teacherOK);
			this->error_teacher->Controls->Add(this->label105);
			this->error_teacher->Location = System::Drawing::Point(200, 98);
			this->error_teacher->Name = L"error_teacher";
			this->error_teacher->Size = System::Drawing::Size(572, 270);
			this->error_teacher->TabIndex = 30;
			this->error_teacher->Visible = false;
			// 
			// error_teacherOK
			// 
			this->error_teacherOK->Location = System::Drawing::Point(226, 145);
			this->error_teacherOK->Name = L"error_teacherOK";
			this->error_teacherOK->Size = System::Drawing::Size(75, 23);
			this->error_teacherOK->TabIndex = 1;
			this->error_teacherOK->Text = L"OK";
			this->error_teacherOK->UseVisualStyleBackColor = true;
			this->error_teacherOK->Click += gcnew System::EventHandler(this, &MyForm::error_teacherOK_Click);
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->Location = System::Drawing::Point(179, 54);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(195, 45);
			this->label105->TabIndex = 0;
			this->label105->Text = L"Invalid Data";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(151, 204);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Mask = L"00000";
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(208, 26);
			this->textBox7->TabIndex = 29;
			this->textBox7->ValidatingType = System::Int32::typeid;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(151, 275);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Mask = L"0000-0000000";
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(208, 26);
			this->textBox11->TabIndex = 29;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(598, 314);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Mask = L"000000";
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(233, 26);
			this->textBox14->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(598, 208);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Mask = L"00000-0000000-0";
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(231, 26);
			this->textBox8->TabIndex = 29;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(598, 279);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Mask = L"00/00/0000";
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(231, 26);
			this->textBox12->TabIndex = 29;
			this->textBox12->ValidatingType = System::DateTime::typeid;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(599, 168);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Mask = L"00/00/0000";
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(231, 26);
			this->textBox6->TabIndex = 29;
			this->textBox6->ValidatingType = System::DateTime::typeid;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(22, 30);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(176, 39);
			this->label69->TabIndex = 28;
			this->label69->Text = L"Add Professor";
			// 
			// Teacher_Canel
			// 
			this->Teacher_Canel->BackColor = System::Drawing::Color::ForestGreen;
			this->Teacher_Canel->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Teacher_Canel->Location = System::Drawing::Point(171, 382);
			this->Teacher_Canel->Name = L"Teacher_Canel";
			this->Teacher_Canel->Size = System::Drawing::Size(170, 47);
			this->Teacher_Canel->TabIndex = 27;
			this->Teacher_Canel->Text = L"Cancel";
			this->Teacher_Canel->UseVisualStyleBackColor = false;
			this->Teacher_Canel->Click += gcnew System::EventHandler(this, &MyForm::Teacher_Canel_Click);
			// 
			// Teacher_Submit
			// 
			this->Teacher_Submit->BackColor = System::Drawing::Color::DeepPink;
			this->Teacher_Submit->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Teacher_Submit->Location = System::Drawing::Point(630, 382);
			this->Teacher_Submit->Name = L"Teacher_Submit";
			this->Teacher_Submit->Size = System::Drawing::Size(129, 50);
			this->Teacher_Submit->TabIndex = 26;
			this->Teacher_Submit->Text = L"Submit";
			this->Teacher_Submit->UseVisualStyleBackColor = false;
			this->Teacher_Submit->Click += gcnew System::EventHandler(this, &MyForm::Teacher_Submit_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Computer", L"Mechanical", L"Mathematics", L"Commerce" });
			this->comboBox3->Location = System::Drawing::Point(599, 242);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(231, 27);
			this->comboBox3->TabIndex = 25;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->comboBox2->Location = System::Drawing::Point(151, 239);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(208, 27);
			this->comboBox2->TabIndex = 24;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(151, 311);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(208, 26);
			this->textBox13->TabIndex = 22;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(151, 168);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(208, 26);
			this->textBox5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(599, 130);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(231, 26);
			this->textBox4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(151, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 26);
			this->textBox3->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(435, 312);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 19);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Salary";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(16, 307);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 19);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Address";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(422, 279);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 19);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Birth Date";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(8, 277);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(125, 19);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Contact No";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(405, 242);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(138, 19);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Qualification";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(439, 209);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(57, 19);
			this->label20->TabIndex = 6;
			this->label20->Text = L"C.N.I.C";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(405, 171);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(124, 19);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Joining Date";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(422, 130);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(98, 19);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Last Name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(25, 240);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(72, 19);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Gender";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(15, 207);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(97, 19);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Password";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(36, 171);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 19);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Email";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(20, 130);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(102, 19);
			this->label26->TabIndex = 0;
			this->label26->Text = L"First Name";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Cornsilk;
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox16);
			this->panel4->Controls->Add(this->label68);
			this->panel4->Controls->Add(this->button23);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->comboBox4);
			this->panel4->Controls->Add(this->textBox15);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label28);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->label31);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1028, 441);
			this->panel4->TabIndex = 28;
			this->panel4->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(197, 276);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Mask = L"000000";
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(272, 26);
			this->textBox10->TabIndex = 5;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(197, 204);
			this->textBox16->Margin = System::Windows::Forms::Padding(2);
			this->textBox16->Mask = L"0000-0000000";
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(272, 26);
			this->textBox16->TabIndex = 3;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(33, 20);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(180, 39);
			this->label68->TabIndex = 13;
			this->label68->Text = L"Edit Professor";
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::ForestGreen;
			this->button23->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button23->Location = System::Drawing::Point(197, 374);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(144, 43);
			this->button23->TabIndex = 7;
			this->button23->Text = L"Cancel";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DeepPink;
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(495, 374);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(174, 43);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Submit";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(309, 88);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(407, 27);
			this->comboBox4->TabIndex = 1;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(197, 240);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(272, 26);
			this->textBox15->TabIndex = 4;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(197, 163);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(272, 26);
			this->textBox9->TabIndex = 2;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(29, 210);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(125, 19);
			this->label27->TabIndex = 5;
			this->label27->Text = L"Contact No";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm::label27_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(37, 245);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(78, 19);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Address";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(37, 282);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(68, 19);
			this->label29->TabIndex = 3;
			this->label29->Text = L"Salary";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(29, 171);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(138, 19);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Qualification";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(29, 87);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(169, 22);
			this->label31->TabIndex = 0;
			this->label31->Text = L"Select Teacher";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel2->Controls->Add(this->ViewFeedbackbtn);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->ViewFeeStatusbtn);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->AddTeacherBTN);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->ViewStudentbtn);
			this->panel2->Controls->Add(this->AssignCoursebtn);
			this->panel2->Controls->Add(this->AddCoursebtn);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1028, 441);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// ViewFeedbackbtn
			// 
			this->ViewFeedbackbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->ViewFeedbackbtn->Location = System::Drawing::Point(495, 214);
			this->ViewFeedbackbtn->Name = L"ViewFeedbackbtn";
			this->ViewFeedbackbtn->Size = System::Drawing::Size(267, 68);
			this->ViewFeedbackbtn->TabIndex = 14;
			this->ViewFeedbackbtn->Text = L"View Feedback";
			this->ViewFeedbackbtn->UseVisualStyleBackColor = false;
			this->ViewFeedbackbtn->Click += gcnew System::EventHandler(this, &MyForm::ViewFeedbackbtn_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button24->Location = System::Drawing::Point(2, 214);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(259, 67);
			this->button24->TabIndex = 13;
			this->button24->Text = L"Add Fee";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// ViewFeeStatusbtn
			// 
			this->ViewFeeStatusbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->ViewFeeStatusbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewFeeStatusbtn->Location = System::Drawing::Point(261, 214);
			this->ViewFeeStatusbtn->Name = L"ViewFeeStatusbtn";
			this->ViewFeeStatusbtn->Size = System::Drawing::Size(234, 68);
			this->ViewFeeStatusbtn->TabIndex = 12;
			this->ViewFeeStatusbtn->Text = L"View Fee Status";
			this->ViewFeeStatusbtn->UseVisualStyleBackColor = false;
			this->ViewFeeStatusbtn->Click += gcnew System::EventHandler(this, &MyForm::ViewFeeStatusbtn_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(261, 146);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(236, 68);
			this->button14->TabIndex = 11;
			this->button14->Text = L"View all Teachers";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(261, 78);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(236, 69);
			this->button12->TabIndex = 9;
			this->button12->Text = L"Edit Teacher Data";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// AddTeacherBTN
			// 
			this->AddTeacherBTN->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->AddTeacherBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeacherBTN->Location = System::Drawing::Point(261, 33);
			this->AddTeacherBTN->Name = L"AddTeacherBTN";
			this->AddTeacherBTN->Size = System::Drawing::Size(236, 46);
			this->AddTeacherBTN->TabIndex = 8;
			this->AddTeacherBTN->Text = L"Add New Teacher";
			this->AddTeacherBTN->UseVisualStyleBackColor = false;
			this->AddTeacherBTN->Click += gcnew System::EventHandler(this, &MyForm::AddTeacherBTN_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(495, 147);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(267, 67);
			this->button5->TabIndex = 7;
			this->button5->Text = L"View all Courses";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// ViewStudentbtn
			// 
			this->ViewStudentbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->ViewStudentbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewStudentbtn->Location = System::Drawing::Point(2, 146);
			this->ViewStudentbtn->Name = L"ViewStudentbtn";
			this->ViewStudentbtn->Size = System::Drawing::Size(259, 68);
			this->ViewStudentbtn->TabIndex = 6;
			this->ViewStudentbtn->Text = L"View all Students";
			this->ViewStudentbtn->UseVisualStyleBackColor = false;
			this->ViewStudentbtn->Click += gcnew System::EventHandler(this, &MyForm::ViewStudentbtn_Click);
			// 
			// AssignCoursebtn
			// 
			this->AssignCoursebtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->AssignCoursebtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AssignCoursebtn->Location = System::Drawing::Point(495, 78);
			this->AssignCoursebtn->Name = L"AssignCoursebtn";
			this->AssignCoursebtn->Size = System::Drawing::Size(267, 69);
			this->AssignCoursebtn->TabIndex = 5;
			this->AssignCoursebtn->Text = L"Assign Course";
			this->AssignCoursebtn->UseVisualStyleBackColor = false;
			this->AssignCoursebtn->Click += gcnew System::EventHandler(this, &MyForm::AssignCoursebtn_Click);
			// 
			// AddCoursebtn
			// 
			this->AddCoursebtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->AddCoursebtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddCoursebtn->Location = System::Drawing::Point(495, 33);
			this->AddCoursebtn->Name = L"AddCoursebtn";
			this->AddCoursebtn->Size = System::Drawing::Size(267, 46);
			this->AddCoursebtn->TabIndex = 4;
			this->AddCoursebtn->Text = L"Add Course";
			this->AddCoursebtn->UseVisualStyleBackColor = false;
			this->AddCoursebtn->Click += gcnew System::EventHandler(this, &MyForm::AddCoursebtn_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(2, 78);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(259, 69);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Edit Student Data";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Bisque;
			this->button6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(39, 363);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 54);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(2, 32);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(259, 47);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Add Student";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// LoginFeedback
			// 
			this->LoginFeedback->BackColor = System::Drawing::Color::AntiqueWhite;
			this->LoginFeedback->Controls->Add(this->subject_login);
			this->LoginFeedback->Controls->Add(this->feedback_login);
			this->LoginFeedback->Controls->Add(this->button26);
			this->LoginFeedback->Controls->Add(this->label73);
			this->LoginFeedback->Controls->Add(this->button25);
			this->LoginFeedback->Controls->Add(this->label75);
			this->LoginFeedback->Controls->Add(this->label74);
			this->LoginFeedback->Controls->Add(this->label72);
			this->LoginFeedback->Controls->Add(this->emailfeedbackcombo);
			this->LoginFeedback->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginFeedback->Location = System::Drawing::Point(0, 0);
			this->LoginFeedback->Name = L"LoginFeedback";
			this->LoginFeedback->Size = System::Drawing::Size(1028, 441);
			this->LoginFeedback->TabIndex = 16;
			this->LoginFeedback->Visible = false;
			// 
			// subject_login
			// 
			this->subject_login->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subject_login->Location = System::Drawing::Point(36, 150);
			this->subject_login->Name = L"subject_login";
			this->subject_login->Size = System::Drawing::Size(219, 26);
			this->subject_login->TabIndex = 6;
			// 
			// feedback_login
			// 
			this->feedback_login->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->feedback_login->Location = System::Drawing::Point(371, 153);
			this->feedback_login->Name = L"feedback_login";
			this->feedback_login->Size = System::Drawing::Size(459, 143);
			this->feedback_login->TabIndex = 5;
			this->feedback_login->Text = L"";
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::DeepPink;
			this->button26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(692, 70);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(101, 37);
			this->button26->TabIndex = 4;
			this->button26->Text = L"Select";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(22, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(191, 39);
			this->label73->TabIndex = 3;
			this->label73->Text = L"View Feedback";
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Chocolate;
			this->button25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(36, 352);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(92, 38);
			this->button25->TabIndex = 2;
			this->button25->Text = L"Back";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(375, 117);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(106, 22);
			this->label75->TabIndex = 1;
			this->label75->Text = L"Feedback";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(32, 117);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(89, 22);
			this->label74->TabIndex = 1;
			this->label74->Text = L"Subject";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(250, 82);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(74, 22);
			this->label72->TabIndex = 1;
			this->label72->Text = L"E-mail:";
			// 
			// emailfeedbackcombo
			// 
			this->emailfeedbackcombo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailfeedbackcombo->FormattingEnabled = true;
			this->emailfeedbackcombo->Location = System::Drawing::Point(361, 77);
			this->emailfeedbackcombo->Name = L"emailfeedbackcombo";
			this->emailfeedbackcombo->Size = System::Drawing::Size(308, 27);
			this->emailfeedbackcombo->TabIndex = 0;
			// 
			// AssignCoursepanel
			// 
			this->AssignCoursepanel->BackColor = System::Drawing::Color::Cornsilk;
			this->AssignCoursepanel->Controls->Add(this->label70);
			this->AssignCoursepanel->Controls->Add(this->button17);
			this->AssignCoursepanel->Controls->Add(this->button16);
			this->AssignCoursepanel->Controls->Add(this->label37);
			this->AssignCoursepanel->Controls->Add(this->label39);
			this->AssignCoursepanel->Controls->Add(this->label36);
			this->AssignCoursepanel->Controls->Add(this->SectioncomboBox);
			this->AssignCoursepanel->Controls->Add(this->CoursecomboBox);
			this->AssignCoursepanel->Controls->Add(this->TeachercomboBox);
			this->AssignCoursepanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AssignCoursepanel->Location = System::Drawing::Point(0, 0);
			this->AssignCoursepanel->Name = L"AssignCoursepanel";
			this->AssignCoursepanel->Size = System::Drawing::Size(1028, 441);
			this->AssignCoursepanel->TabIndex = 13;
			this->AssignCoursepanel->Visible = false;
			this->AssignCoursepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::AssignCoursepanel_Paint);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(56, 36);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(242, 39);
			this->label70->TabIndex = 6;
			this->label70->Text = L"Courses Assignment";
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::ForestGreen;
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(254, 323);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(134, 45);
			this->button17->TabIndex = 5;
			this->button17->Text = L"Back";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DeepPink;
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(647, 323);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(149, 45);
			this->button16->TabIndex = 4;
			this->button16->Text = L"Submit";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(775, 130);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(140, 19);
			this->label37->TabIndex = 3;
			this->label37->Text = L"Select Section";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(421, 130);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(133, 19);
			this->label39->TabIndex = 3;
			this->label39->Text = L"Select Course";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(73, 128);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(141, 19);
			this->label36->TabIndex = 3;
			this->label36->Text = L"Select Teacher";
			// 
			// SectioncomboBox
			// 
			this->SectioncomboBox->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectioncomboBox->FormattingEnabled = true;
			this->SectioncomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"A" });
			this->SectioncomboBox->Location = System::Drawing::Point(775, 173);
			this->SectioncomboBox->Name = L"SectioncomboBox";
			this->SectioncomboBox->Size = System::Drawing::Size(200, 27);
			this->SectioncomboBox->TabIndex = 2;
			// 
			// CoursecomboBox
			// 
			this->CoursecomboBox->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CoursecomboBox->FormattingEnabled = true;
			this->CoursecomboBox->Location = System::Drawing::Point(420, 175);
			this->CoursecomboBox->Name = L"CoursecomboBox";
			this->CoursecomboBox->Size = System::Drawing::Size(266, 27);
			this->CoursecomboBox->TabIndex = 1;
			// 
			// TeachercomboBox
			// 
			this->TeachercomboBox->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeachercomboBox->FormattingEnabled = true;
			this->TeachercomboBox->Location = System::Drawing::Point(78, 174);
			this->TeachercomboBox->Name = L"TeachercomboBox";
			this->TeachercomboBox->Size = System::Drawing::Size(249, 27);
			this->TeachercomboBox->TabIndex = 0;
			// 
			// ViewTeacherspanel
			// 
			this->ViewTeacherspanel->BackColor = System::Drawing::Color::Cornsilk;
			this->ViewTeacherspanel->Controls->Add(this->label67);
			this->ViewTeacherspanel->Controls->Add(this->label35);
			this->ViewTeacherspanel->Controls->Add(this->ViewTeacherGrid);
			this->ViewTeacherspanel->Controls->Add(this->button15);
			this->ViewTeacherspanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ViewTeacherspanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ViewTeacherspanel->Location = System::Drawing::Point(0, 0);
			this->ViewTeacherspanel->Name = L"ViewTeacherspanel";
			this->ViewTeacherspanel->Size = System::Drawing::Size(1028, 441);
			this->ViewTeacherspanel->TabIndex = 13;
			this->ViewTeacherspanel->Visible = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(34, 12);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(185, 39);
			this->label67->TabIndex = 2;
			this->label67->Text = L"Professors List";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(41, 71);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(143, 29);
			this->label35->TabIndex = 2;
			this->label35->Text = L"All Professors";
			// 
			// ViewTeacherGrid
			// 
			this->ViewTeacherGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ViewTeacherGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewTeacherGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->teachernameCol,
					this->GenderCol, this->DegreeCol, this->MobileNoCol, this->TeacherEmailCol
			});
			this->ViewTeacherGrid->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ViewTeacherGrid->Location = System::Drawing::Point(42, 118);
			this->ViewTeacherGrid->Name = L"ViewTeacherGrid";
			this->ViewTeacherGrid->Size = System::Drawing::Size(967, 208);
			this->ViewTeacherGrid->TabIndex = 1;
			// 
			// teachernameCol
			// 
			this->teachernameCol->FillWeight = 200;
			this->teachernameCol->HeaderText = L"Name";
			this->teachernameCol->Name = L"teachernameCol";
			this->teachernameCol->Width = 200;
			// 
			// GenderCol
			// 
			this->GenderCol->HeaderText = L"Gender";
			this->GenderCol->Name = L"GenderCol";
			// 
			// DegreeCol
			// 
			this->DegreeCol->FillWeight = 200;
			this->DegreeCol->HeaderText = L"Degree";
			this->DegreeCol->Name = L"DegreeCol";
			this->DegreeCol->Width = 200;
			// 
			// MobileNoCol
			// 
			this->MobileNoCol->FillWeight = 200;
			this->MobileNoCol->HeaderText = L"Mobile";
			this->MobileNoCol->Name = L"MobileNoCol";
			this->MobileNoCol->Width = 200;
			// 
			// TeacherEmailCol
			// 
			this->TeacherEmailCol->FillWeight = 225;
			this->TeacherEmailCol->HeaderText = L"Email";
			this->TeacherEmailCol->Name = L"TeacherEmailCol";
			this->TeacherEmailCol->Width = 225;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Fuchsia;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(492, 363);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 45);
			this->button15->TabIndex = 0;
			this->button15->Text = L"Back";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// ViewCoursespanel
			// 
			this->ViewCoursespanel->BackColor = System::Drawing::Color::Cornsilk;
			this->ViewCoursespanel->Controls->Add(this->label7);
			this->ViewCoursespanel->Controls->Add(this->ViewCoursesBack_btn);
			this->ViewCoursespanel->Controls->Add(this->label13);
			this->ViewCoursespanel->Controls->Add(this->ViewCourseGrid);
			this->ViewCoursespanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ViewCoursespanel->Location = System::Drawing::Point(0, 0);
			this->ViewCoursespanel->Name = L"ViewCoursespanel";
			this->ViewCoursespanel->Size = System::Drawing::Size(1028, 441);
			this->ViewCoursespanel->TabIndex = 8;
			this->ViewCoursespanel->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(47, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 39);
			this->label7->TabIndex = 0;
			this->label7->Text = L"View Course";
			// 
			// ViewCoursesBack_btn
			// 
			this->ViewCoursesBack_btn->BackColor = System::Drawing::Color::DeepPink;
			this->ViewCoursesBack_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewCoursesBack_btn->Location = System::Drawing::Point(396, 387);
			this->ViewCoursesBack_btn->Name = L"ViewCoursesBack_btn";
			this->ViewCoursesBack_btn->Size = System::Drawing::Size(190, 45);
			this->ViewCoursesBack_btn->TabIndex = 2;
			this->ViewCoursesBack_btn->Text = L"Back";
			this->ViewCoursesBack_btn->UseVisualStyleBackColor = false;
			this->ViewCoursesBack_btn->Click += gcnew System::EventHandler(this, &MyForm::ViewCoursesBack_btn_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(46, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(146, 39);
			this->label13->TabIndex = 1;
			this->label13->Text = L"All Courses";
			// 
			// ViewCourseGrid
			// 
			this->ViewCourseGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ViewCourseGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewCourseGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->CourseCodeCol,
					this->CourseNameCol, this->ParentCourseCol
			});
			this->ViewCourseGrid->GridColor = System::Drawing::SystemColors::GrayText;
			this->ViewCourseGrid->Location = System::Drawing::Point(171, 122);
			this->ViewCourseGrid->Name = L"ViewCourseGrid";
			this->ViewCourseGrid->Size = System::Drawing::Size(670, 241);
			this->ViewCourseGrid->TabIndex = 0;
			this->ViewCourseGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// CourseCodeCol
			// 
			this->CourseCodeCol->FillWeight = 175;
			this->CourseCodeCol->HeaderText = L"Course Code";
			this->CourseCodeCol->Name = L"CourseCodeCol";
			this->CourseCodeCol->Width = 175;
			// 
			// CourseNameCol
			// 
			this->CourseNameCol->FillWeight = 225;
			this->CourseNameCol->HeaderText = L"Course Name";
			this->CourseNameCol->Name = L"CourseNameCol";
			this->CourseNameCol->Width = 225;
			// 
			// ParentCourseCol
			// 
			this->ParentCourseCol->FillWeight = 225;
			this->ParentCourseCol->HeaderText = L"Parent Course";
			this->ParentCourseCol->Name = L"ParentCourseCol";
			this->ParentCourseCol->Width = 225;
			// 
			// ViewStudentpanel
			// 
			this->ViewStudentpanel->BackColor = System::Drawing::Color::Cornsilk;
			this->ViewStudentpanel->Controls->Add(this->viewStudentsback_btn);
			this->ViewStudentpanel->Controls->Add(this->StudentGrid);
			this->ViewStudentpanel->Controls->Add(this->label12);
			this->ViewStudentpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ViewStudentpanel->Location = System::Drawing::Point(0, 0);
			this->ViewStudentpanel->Name = L"ViewStudentpanel";
			this->ViewStudentpanel->Size = System::Drawing::Size(1028, 441);
			this->ViewStudentpanel->TabIndex = 7;
			this->ViewStudentpanel->Visible = false;
			// 
			// viewStudentsback_btn
			// 
			this->viewStudentsback_btn->BackColor = System::Drawing::Color::HotPink;
			this->viewStudentsback_btn->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewStudentsback_btn->Location = System::Drawing::Point(409, 400);
			this->viewStudentsback_btn->Name = L"viewStudentsback_btn";
			this->viewStudentsback_btn->Size = System::Drawing::Size(177, 35);
			this->viewStudentsback_btn->TabIndex = 2;
			this->viewStudentsback_btn->Text = L"Back";
			this->viewStudentsback_btn->UseVisualStyleBackColor = false;
			this->viewStudentsback_btn->Click += gcnew System::EventHandler(this, &MyForm::viewStudentsback_btn_Click);
			// 
			// StudentGrid
			// 
			this->StudentGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->StudentGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StudentGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->RollNoCol,
					this->NameCol, this->EmailCol, this->FeesCol
			});
			this->StudentGrid->Location = System::Drawing::Point(76, 101);
			this->StudentGrid->Name = L"StudentGrid";
			this->StudentGrid->Size = System::Drawing::Size(867, 277);
			this->StudentGrid->TabIndex = 1;
			// 
			// RollNoCol
			// 
			this->RollNoCol->FillWeight = 150;
			this->RollNoCol->HeaderText = L"RollNo";
			this->RollNoCol->Name = L"RollNoCol";
			this->RollNoCol->Width = 150;
			// 
			// NameCol
			// 
			this->NameCol->FillWeight = 225;
			this->NameCol->HeaderText = L"Name";
			this->NameCol->Name = L"NameCol";
			this->NameCol->Width = 225;
			// 
			// EmailCol
			// 
			this->EmailCol->FillWeight = 250;
			this->EmailCol->HeaderText = L"Email";
			this->EmailCol->Name = L"EmailCol";
			this->EmailCol->Width = 250;
			// 
			// FeesCol
			// 
			this->FeesCol->FillWeight = 200;
			this->FeesCol->HeaderText = L"Fees";
			this->FeesCol->Name = L"FeesCol";
			this->FeesCol->Width = 200;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(71, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(214, 39);
			this->label12->TabIndex = 0;
			this->label12->Text = L"All Students List";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Cornsilk;
			this->panel3->Controls->Add(this->password);
			this->panel3->Controls->Add(this->parentNo);
			this->panel3->Controls->Add(this->mobileNo);
			this->panel3->Controls->Add(this->DOB);
			this->panel3->Controls->Add(this->regdate);
			this->panel3->Controls->Add(this->fees);
			this->panel3->Controls->Add(this->error);
			this->panel3->Controls->Add(this->parentemailText);
			this->panel3->Controls->Add(this->label49);
			this->panel3->Controls->Add(this->label50);
			this->panel3->Controls->Add(this->label52);
			this->panel3->Controls->Add(this->label55);
			this->panel3->Controls->Add(this->label61);
			this->panel3->Controls->Add(this->label62);
			this->panel3->Controls->Add(this->label59);
			this->panel3->Controls->Add(this->label77);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Controls->Add(this->label58);
			this->panel3->Controls->Add(this->label57);
			this->panel3->Controls->Add(this->label56);
			this->panel3->Controls->Add(this->label51);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->label48);
			this->panel3->Controls->Add(this->label47);
			this->panel3->Controls->Add(this->label53);
			this->panel3->Controls->Add(this->label46);
			this->panel3->Controls->Add(this->label45);
			this->panel3->Controls->Add(this->B_grp);
			this->panel3->Controls->Add(this->mother_prof);
			this->panel3->Controls->Add(this->father_prof);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->gender);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->email);
			this->panel3->Controls->Add(this->lName);
			this->panel3->Controls->Add(this->mother);
			this->panel3->Controls->Add(this->address);
			this->panel3->Controls->Add(this->father);
			this->panel3->Controls->Add(this->fName);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1028, 441);
			this->panel3->TabIndex = 2;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(872, 73);
			this->password->Margin = System::Windows::Forms::Padding(2);
			this->password->Mask = L"0000";
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(182, 26);
			this->password->TabIndex = 2;
			// 
			// parentNo
			// 
			this->parentNo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parentNo->Location = System::Drawing::Point(512, 106);
			this->parentNo->Margin = System::Windows::Forms::Padding(2);
			this->parentNo->Mask = L"0000-0000000";
			this->parentNo->Name = L"parentNo";
			this->parentNo->Size = System::Drawing::Size(225, 26);
			this->parentNo->TabIndex = 4;
			// 
			// mobileNo
			// 
			this->mobileNo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mobileNo->Location = System::Drawing::Point(512, 140);
			this->mobileNo->Margin = System::Windows::Forms::Padding(2);
			this->mobileNo->Mask = L"0000-0000000";
			this->mobileNo->Name = L"mobileNo";
			this->mobileNo->Size = System::Drawing::Size(225, 26);
			this->mobileNo->TabIndex = 7;
			// 
			// DOB
			// 
			this->DOB->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DOB->Location = System::Drawing::Point(872, 106);
			this->DOB->Margin = System::Windows::Forms::Padding(2);
			this->DOB->Mask = L"00/00/0000";
			this->DOB->Name = L"DOB";
			this->DOB->Size = System::Drawing::Size(182, 26);
			this->DOB->TabIndex = 5;
			this->DOB->ValidatingType = System::DateTime::typeid;
			// 
			// regdate
			// 
			this->regdate->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regdate->Location = System::Drawing::Point(160, 136);
			this->regdate->Margin = System::Windows::Forms::Padding(2);
			this->regdate->Mask = L"00/00/0000";
			this->regdate->Name = L"regdate";
			this->regdate->Size = System::Drawing::Size(162, 26);
			this->regdate->TabIndex = 6;
			this->regdate->ValidatingType = System::DateTime::typeid;
			// 
			// fees
			// 
			this->fees->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fees->Location = System::Drawing::Point(160, 267);
			this->fees->Margin = System::Windows::Forms::Padding(2);
			this->fees->Mask = L"00000";
			this->fees->Name = L"fees";
			this->fees->Size = System::Drawing::Size(162, 26);
			this->fees->TabIndex = 17;
			this->fees->ValidatingType = System::Int32::typeid;
			// 
			// error
			// 
			this->error->Controls->Add(this->error_ok);
			this->error->Controls->Add(this->label14);
			this->error->Location = System::Drawing::Point(314, 167);
			this->error->Name = L"error";
			this->error->Size = System::Drawing::Size(572, 270);
			this->error->TabIndex = 5;
			this->error->Visible = false;
			// 
			// error_ok
			// 
			this->error_ok->Location = System::Drawing::Point(226, 145);
			this->error_ok->Name = L"error_ok";
			this->error_ok->Size = System::Drawing::Size(75, 23);
			this->error_ok->TabIndex = 1;
			this->error_ok->Text = L"OK";
			this->error_ok->UseVisualStyleBackColor = true;
			this->error_ok->Click += gcnew System::EventHandler(this, &MyForm::error_ok_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(179, 54);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(195, 45);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Invalid Data";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// parentemailText
			// 
			this->parentemailText->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parentemailText->Location = System::Drawing::Point(512, 270);
			this->parentemailText->Name = L"parentemailText";
			this->parentemailText->Size = System::Drawing::Size(225, 26);
			this->parentemailText->TabIndex = 18;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(13, 136);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(86, 19);
			this->label49->TabIndex = 6;
			this->label49->Text = L"Reg Date";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(13, 170);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(72, 19);
			this->label50->TabIndex = 6;
			this->label50->Text = L"gender";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(17, 271);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(41, 19);
			this->label52->TabIndex = 6;
			this->label52->Text = L"Fees";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(341, 109);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(155, 19);
			this->label55->TabIndex = 6;
			this->label55->Text = L"Parents Mobile #";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(752, 73);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(97, 19);
			this->label61->TabIndex = 6;
			this->label61->Text = L"password";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(774, 143);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(56, 19);
			this->label62->TabIndex = 6;
			this->label62->Text = L"Class";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(752, 107);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(103, 19);
			this->label59->TabIndex = 6;
			this->label59->Text = L"Birth Date";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(343, 269);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(142, 19);
			this->label77->TabIndex = 6;
			this->label77->Text = L"Parent \' s Email";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(343, 241);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(78, 19);
			this->label60->TabIndex = 6;
			this->label60->Text = L"Address";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(743, 181);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(128, 19);
			this->label58->TabIndex = 6;
			this->label58->Text = L"Blood Group";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(327, 207);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(180, 19);
			this->label57->TabIndex = 6;
			this->label57->Text = L"Mother Profession";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(332, 175);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(171, 19);
			this->label56->TabIndex = 6;
			this->label56->Text = L"Father Profession";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(341, 142);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(80, 19);
			this->label51->TabIndex = 6;
			this->label51->Text = L"Mobile #";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(15, 235);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(129, 19);
			this->label54->TabIndex = 6;
			this->label54->Text = L"Mother Name";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(13, 203);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(120, 19);
			this->label48->TabIndex = 6;
			this->label48->Text = L"Father Name";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(341, 71);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(55, 19);
			this->label47->TabIndex = 6;
			this->label47->Text = L"Email";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(15, 104);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(98, 19);
			this->label53->TabIndex = 6;
			this->label53->Text = L"Last Name";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(15, 69);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(102, 19);
			this->label46->TabIndex = 6;
			this->label46->Text = L"First Name";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(51, 10);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(162, 39);
			this->label45->TabIndex = 5;
			this->label45->Text = L"Add Student";
			this->label45->Click += gcnew System::EventHandler(this, &MyForm::label45_Click);
			// 
			// B_grp
			// 
			this->B_grp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->B_grp->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_grp->Location = System::Drawing::Point(872, 177);
			this->B_grp->Name = L"B_grp";
			this->B_grp->Size = System::Drawing::Size(182, 26);
			this->B_grp->TabIndex = 11;
			// 
			// mother_prof
			// 
			this->mother_prof->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mother_prof->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mother_prof->Location = System::Drawing::Point(512, 205);
			this->mother_prof->Name = L"mother_prof";
			this->mother_prof->Size = System::Drawing::Size(225, 26);
			this->mother_prof->TabIndex = 13;
			// 
			// father_prof
			// 
			this->father_prof->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->father_prof->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->father_prof->Location = System::Drawing::Point(512, 173);
			this->father_prof->Name = L"father_prof";
			this->father_prof->Size = System::Drawing::Size(225, 26);
			this->father_prof->TabIndex = 10;
			this->father_prof->Text = L"\r\n";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SeaGreen;
			this->button8->Font = (gcnew System::Drawing::Font(L"Castellar", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::LemonChiffon;
			this->button8->Location = System::Drawing::Point(187, 315);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(133, 39);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Cancel";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Castellar", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button7->Location = System::Drawing::Point(547, 318);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(122, 36);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Submit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// gender
			// 
			this->gender->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->FormattingEnabled = true;
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->gender->Location = System::Drawing::Point(160, 167);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(161, 27);
			this->gender->TabIndex = 9;
			this->gender->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Pre-Nursery", L"Prep", L"1", L"2", L"3", L"4",
					L"5", L"6", L"7", L"8", L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(872, 141);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 27);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(512, 70);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(225, 26);
			this->email->TabIndex = 2;
			// 
			// lName
			// 
			this->lName->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lName->Location = System::Drawing::Point(159, 104);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(162, 26);
			this->lName->TabIndex = 1;
			this->lName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// mother
			// 
			this->mother->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mother->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mother->Location = System::Drawing::Point(159, 233);
			this->mother->Name = L"mother";
			this->mother->Size = System::Drawing::Size(161, 26);
			this->mother->TabIndex = 14;
			// 
			// address
			// 
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->address->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(512, 237);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(225, 26);
			this->address->TabIndex = 15;
			// 
			// father
			// 
			this->father->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->father->Location = System::Drawing::Point(160, 200);
			this->father->Name = L"father";
			this->father->Size = System::Drawing::Size(161, 26);
			this->father->TabIndex = 12;
			this->father->Text = L"\r\n";
			// 
			// fName
			// 
			this->fName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fName->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fName->Location = System::Drawing::Point(160, 68);
			this->fName->Name = L"fName";
			this->fName->Size = System::Drawing::Size(161, 26);
			this->fName->TabIndex = 0;
			this->fName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// EditStudentPanel
			// 
			this->EditStudentPanel->BackColor = System::Drawing::Color::Cornsilk;
			this->EditStudentPanel->Controls->Add(this->edit_number);
			this->EditStudentPanel->Controls->Add(this->edit_fees);
			this->EditStudentPanel->Controls->Add(this->error_editstudent);
			this->EditStudentPanel->Controls->Add(this->label66);
			this->EditStudentPanel->Controls->Add(this->label65);
			this->EditStudentPanel->Controls->Add(this->label64);
			this->EditStudentPanel->Controls->Add(this->label63);
			this->EditStudentPanel->Controls->Add(this->submit_edit);
			this->EditStudentPanel->Controls->Add(this->cancel_edit);
			this->EditStudentPanel->Controls->Add(this->edit_address);
			this->EditStudentPanel->Controls->Add(this->label6);
			this->EditStudentPanel->Controls->Add(this->student_combobox);
			this->EditStudentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EditStudentPanel->Location = System::Drawing::Point(0, 0);
			this->EditStudentPanel->Name = L"EditStudentPanel";
			this->EditStudentPanel->Size = System::Drawing::Size(1028, 441);
			this->EditStudentPanel->TabIndex = 3;
			this->EditStudentPanel->Visible = false;
			this->EditStudentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::EditStudentPanel_Paint);
			// 
			// edit_number
			// 
			this->edit_number->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_number->Location = System::Drawing::Point(208, 190);
			this->edit_number->Margin = System::Windows::Forms::Padding(2);
			this->edit_number->Mask = L"000-0000000";
			this->edit_number->Name = L"edit_number";
			this->edit_number->Size = System::Drawing::Size(354, 26);
			this->edit_number->TabIndex = 2;
			// 
			// edit_fees
			// 
			this->edit_fees->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_fees->Location = System::Drawing::Point(208, 231);
			this->edit_fees->Margin = System::Windows::Forms::Padding(2);
			this->edit_fees->Mask = L"00000";
			this->edit_fees->Name = L"edit_fees";
			this->edit_fees->Size = System::Drawing::Size(355, 26);
			this->edit_fees->TabIndex = 3;
			this->edit_fees->ValidatingType = System::Int32::typeid;
			// 
			// error_editstudent
			// 
			this->error_editstudent->Controls->Add(this->ok_editstudentbtn);
			this->error_editstudent->Controls->Add(this->label34);
			this->error_editstudent->Location = System::Drawing::Point(137, 258);
			this->error_editstudent->Name = L"error_editstudent";
			this->error_editstudent->Size = System::Drawing::Size(506, 158);
			this->error_editstudent->TabIndex = 6;
			this->error_editstudent->Visible = false;
			// 
			// ok_editstudentbtn
			// 
			this->ok_editstudentbtn->Location = System::Drawing::Point(195, 101);
			this->ok_editstudentbtn->Name = L"ok_editstudentbtn";
			this->ok_editstudentbtn->Size = System::Drawing::Size(75, 23);
			this->ok_editstudentbtn->TabIndex = 1;
			this->ok_editstudentbtn->Text = L"OK";
			this->ok_editstudentbtn->UseVisualStyleBackColor = true;
			this->ok_editstudentbtn->Click += gcnew System::EventHandler(this, &MyForm::ok_editstudentbtn_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(152, 21);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(195, 45);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Invalid Data";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(16, 11);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(166, 39);
			this->label66->TabIndex = 7;
			this->label66->Text = L"Edit Student";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(50, 187);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(101, 19);
			this->label65->TabIndex = 6;
			this->label65->Text = L"Mobile No.";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(72, 223);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(41, 19);
			this->label64->TabIndex = 6;
			this->label64->Text = L"Fees";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(59, 149);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(78, 19);
			this->label63->TabIndex = 6;
			this->label63->Text = L"Address";
			// 
			// submit_edit
			// 
			this->submit_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->submit_edit->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_edit->Location = System::Drawing::Point(512, 279);
			this->submit_edit->Name = L"submit_edit";
			this->submit_edit->Size = System::Drawing::Size(115, 38);
			this->submit_edit->TabIndex = 4;
			this->submit_edit->Text = L"Submit";
			this->submit_edit->UseVisualStyleBackColor = false;
			this->submit_edit->Click += gcnew System::EventHandler(this, &MyForm::submit_edit_Click);
			// 
			// cancel_edit
			// 
			this->cancel_edit->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->cancel_edit->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_edit->Location = System::Drawing::Point(151, 279);
			this->cancel_edit->Name = L"cancel_edit";
			this->cancel_edit->Size = System::Drawing::Size(111, 38);
			this->cancel_edit->TabIndex = 5;
			this->cancel_edit->Text = L"Cancel";
			this->cancel_edit->UseVisualStyleBackColor = false;
			this->cancel_edit->Click += gcnew System::EventHandler(this, &MyForm::cancel_edit_Click);
			// 
			// edit_address
			// 
			this->edit_address->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_address->Location = System::Drawing::Point(208, 146);
			this->edit_address->Name = L"edit_address";
			this->edit_address->Size = System::Drawing::Size(356, 26);
			this->edit_address->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 24);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Select Student";
			// 
			// student_combobox
			// 
			this->student_combobox->FormattingEnabled = true;
			this->student_combobox->Location = System::Drawing::Point(197, 86);
			this->student_combobox->Name = L"student_combobox";
			this->student_combobox->Size = System::Drawing::Size(389, 21);
			this->student_combobox->TabIndex = 0;
			// 
			// AddCoursepanel
			// 
			this->AddCoursepanel->BackColor = System::Drawing::Color::Cornsilk;
			this->AddCoursepanel->Controls->Add(this->submit_addcourse);
			this->AddCoursepanel->Controls->Add(this->coursecode_box);
			this->AddCoursepanel->Controls->Add(this->parentcouurse_combo);
			this->AddCoursepanel->Controls->Add(this->class_combo);
			this->AddCoursepanel->Controls->Add(this->coursename_box);
			this->AddCoursepanel->Controls->Add(this->label11);
			this->AddCoursepanel->Controls->Add(this->label10);
			this->AddCoursepanel->Controls->Add(this->label9);
			this->AddCoursepanel->Controls->Add(this->label8);
			this->AddCoursepanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddCoursepanel->Location = System::Drawing::Point(0, 0);
			this->AddCoursepanel->Name = L"AddCoursepanel";
			this->AddCoursepanel->Size = System::Drawing::Size(1028, 441);
			this->AddCoursepanel->TabIndex = 4;
			this->AddCoursepanel->Visible = false;
			this->AddCoursepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// submit_addcourse
			// 
			this->submit_addcourse->BackColor = System::Drawing::Color::Fuchsia;
			this->submit_addcourse->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_addcourse->ForeColor = System::Drawing::SystemColors::InfoText;
			this->submit_addcourse->Location = System::Drawing::Point(429, 357);
			this->submit_addcourse->Name = L"submit_addcourse";
			this->submit_addcourse->Size = System::Drawing::Size(147, 43);
			this->submit_addcourse->TabIndex = 6;
			this->submit_addcourse->Text = L"Submit";
			this->submit_addcourse->UseVisualStyleBackColor = false;
			this->submit_addcourse->Click += gcnew System::EventHandler(this, &MyForm::submit_addcourse_Click);
			// 
			// coursecode_box
			// 
			this->coursecode_box->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursecode_box->Location = System::Drawing::Point(667, 160);
			this->coursecode_box->Name = L"coursecode_box";
			this->coursecode_box->Size = System::Drawing::Size(290, 26);
			this->coursecode_box->TabIndex = 5;
			// 
			// parentcouurse_combo
			// 
			this->parentcouurse_combo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parentcouurse_combo->FormattingEnabled = true;
			this->parentcouurse_combo->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"English", L"Urdu", L"Mathematics",
					L"Physics", L"Chemistry", L"Biology", L"Computer Science", L"Islamiyat", L"Pakistan Studies"
			});
			this->parentcouurse_combo->Location = System::Drawing::Point(667, 209);
			this->parentcouurse_combo->Name = L"parentcouurse_combo";
			this->parentcouurse_combo->Size = System::Drawing::Size(290, 27);
			this->parentcouurse_combo->TabIndex = 4;
			// 
			// class_combo
			// 
			this->class_combo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class_combo->FormattingEnabled = true;
			this->class_combo->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Pre-Nursery", L"Prep", L"1", L"2", L"3", L"4",
					L"5", L"6", L"7", L"8", L"9", L"10"
			});
			this->class_combo->Location = System::Drawing::Point(187, 209);
			this->class_combo->Name = L"class_combo";
			this->class_combo->Size = System::Drawing::Size(299, 27);
			this->class_combo->TabIndex = 3;
			// 
			// coursename_box
			// 
			this->coursename_box->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursename_box->Location = System::Drawing::Point(187, 161);
			this->coursename_box->Name = L"coursename_box";
			this->coursename_box->Size = System::Drawing::Size(299, 26);
			this->coursename_box->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(513, 211);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 19);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Parent Course\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(513, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Course Code";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(25, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Select Class";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(25, 166);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 19);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Course Name";
			// 
			// ViewFeeStatus_panel
			// 
			this->ViewFeeStatus_panel->BackColor = System::Drawing::Color::Cornsilk;
			this->ViewFeeStatus_panel->Controls->Add(this->ViewFee_back);
			this->ViewFeeStatus_panel->Controls->Add(this->FeeStatusGrid);
			this->ViewFeeStatus_panel->Controls->Add(this->label33);
			this->ViewFeeStatus_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ViewFeeStatus_panel->Location = System::Drawing::Point(0, 0);
			this->ViewFeeStatus_panel->Name = L"ViewFeeStatus_panel";
			this->ViewFeeStatus_panel->Size = System::Drawing::Size(1028, 441);
			this->ViewFeeStatus_panel->TabIndex = 3;
			this->ViewFeeStatus_panel->Visible = false;
			// 
			// ViewFee_back
			// 
			this->ViewFee_back->BackColor = System::Drawing::Color::Crimson;
			this->ViewFee_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewFee_back->Location = System::Drawing::Point(439, 368);
			this->ViewFee_back->Name = L"ViewFee_back";
			this->ViewFee_back->Size = System::Drawing::Size(75, 32);
			this->ViewFee_back->TabIndex = 2;
			this->ViewFee_back->Text = L"Back";
			this->ViewFee_back->UseVisualStyleBackColor = false;
			this->ViewFee_back->Click += gcnew System::EventHandler(this, &MyForm::ViewFee_back_Click);
			// 
			// FeeStatusGrid
			// 
			this->FeeStatusGrid->BackgroundColor = System::Drawing::Color::FloralWhite;
			this->FeeStatusGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FeeStatusGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->rollNO_col,
					this->Name_Col, this->Section_Col, this->Status_Col
			});
			this->FeeStatusGrid->GridColor = System::Drawing::Color::Black;
			this->FeeStatusGrid->Location = System::Drawing::Point(155, 95);
			this->FeeStatusGrid->Name = L"FeeStatusGrid";
			this->FeeStatusGrid->Size = System::Drawing::Size(691, 236);
			this->FeeStatusGrid->TabIndex = 1;
			// 
			// rollNO_col
			// 
			this->rollNO_col->FillWeight = 150;
			this->rollNO_col->HeaderText = L"Roll No";
			this->rollNO_col->Name = L"rollNO_col";
			this->rollNO_col->Width = 150;
			// 
			// Name_Col
			// 
			this->Name_Col->FillWeight = 200;
			this->Name_Col->HeaderText = L"Month";
			this->Name_Col->Name = L"Name_Col";
			this->Name_Col->Width = 200;
			// 
			// Section_Col
			// 
			this->Section_Col->HeaderText = L"Section";
			this->Section_Col->Name = L"Section_Col";
			// 
			// Status_Col
			// 
			this->Status_Col->FillWeight = 200;
			this->Status_Col->HeaderText = L"Fee Status";
			this->Status_Col->Name = L"Status_Col";
			this->Status_Col->Width = 200;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(22, 20);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(206, 39);
			this->label33->TabIndex = 0;
			this->label33->Text = L"View Fee Status";
			// 
			// StudentPanel
			// 
			this->StudentPanel->BackColor = System::Drawing::Color::Cornsilk;
			this->StudentPanel->Controls->Add(this->label71);
			this->StudentPanel->Controls->Add(this->button19);
			this->StudentPanel->Controls->Add(this->button18);
			this->StudentPanel->Controls->Add(this->textBox18);
			this->StudentPanel->Controls->Add(this->label40);
			this->StudentPanel->Controls->Add(this->textBox17);
			this->StudentPanel->Controls->Add(this->label38);
			this->StudentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StudentPanel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->StudentPanel->Location = System::Drawing::Point(0, 0);
			this->StudentPanel->Name = L"StudentPanel";
			this->StudentPanel->Size = System::Drawing::Size(1028, 441);
			this->StudentPanel->TabIndex = 6;
			this->StudentPanel->Visible = false;
			this->StudentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::StudentPanel_Paint);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(409, 28);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(88, 31);
			this->label71->TabIndex = 6;
			this->label71->Text = L"Parent";
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button19->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->Location = System::Drawing::Point(91, 293);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(128, 55);
			this->button19->TabIndex = 5;
			this->button19->Text = L"Back";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DodgerBlue;
			this->button18->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(552, 298);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(134, 50);
			this->button18->TabIndex = 4;
			this->button18->Text = L"Log In";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(187, 157);
			this->textBox18->Name = L"textBox18";
			this->textBox18->PasswordChar = '*';
			this->textBox18->Size = System::Drawing::Size(262, 26);
			this->textBox18->TabIndex = 3;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(50, 160);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(97, 19);
			this->label40->TabIndex = 2;
			this->label40->Text = L"Password";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(187, 118);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(262, 26);
			this->textBox17->TabIndex = 1;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(48, 117);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(55, 19);
			this->label38->TabIndex = 0;
			this->label38->Text = L"Email";
			// 
			// TeacherPanel
			// 
			this->TeacherPanel->BackColor = System::Drawing::Color::Cornsilk;
			this->TeacherPanel->Controls->Add(this->teachercourses_btn);
			this->TeacherPanel->Controls->Add(this->addmarks_btn);
			this->TeacherPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TeacherPanel->Location = System::Drawing::Point(0, 0);
			this->TeacherPanel->Name = L"TeacherPanel";
			this->TeacherPanel->Size = System::Drawing::Size(1028, 441);
			this->TeacherPanel->TabIndex = 4;
			this->TeacherPanel->Visible = false;
			// 
			// teachercourses_btn
			// 
			this->teachercourses_btn->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teachercourses_btn->Location = System::Drawing::Point(105, 136);
			this->teachercourses_btn->Name = L"teachercourses_btn";
			this->teachercourses_btn->Size = System::Drawing::Size(150, 63);
			this->teachercourses_btn->TabIndex = 1;
			this->teachercourses_btn->Text = L"Teacher Courses";
			this->teachercourses_btn->UseVisualStyleBackColor = true;
			this->teachercourses_btn->Click += gcnew System::EventHandler(this, &MyForm::teachercourses_btn_Click);
			// 
			// addmarks_btn
			// 
			this->addmarks_btn->Font = (gcnew System::Drawing::Font(L"Calisto MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addmarks_btn->Location = System::Drawing::Point(105, 43);
			this->addmarks_btn->Name = L"addmarks_btn";
			this->addmarks_btn->Size = System::Drawing::Size(150, 61);
			this->addmarks_btn->TabIndex = 0;
			this->addmarks_btn->Text = L"Add Marks";
			this->addmarks_btn->UseVisualStyleBackColor = true;
			this->addmarks_btn->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// teachercoursepanel
			// 
			this->teachercoursepanel->BackColor = System::Drawing::Color::Cornsilk;
			this->teachercoursepanel->Controls->Add(this->backteachercourse);
			this->teachercoursepanel->Controls->Add(this->teachercoursesgrid);
			this->teachercoursepanel->Controls->Add(this->label78);
			this->teachercoursepanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->teachercoursepanel->Location = System::Drawing::Point(0, 0);
			this->teachercoursepanel->Name = L"teachercoursepanel";
			this->teachercoursepanel->Size = System::Drawing::Size(1028, 441);
			this->teachercoursepanel->TabIndex = 5;
			this->teachercoursepanel->Visible = false;
			// 
			// backteachercourse
			// 
			this->backteachercourse->BackColor = System::Drawing::Color::AntiqueWhite;
			this->backteachercourse->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backteachercourse->Location = System::Drawing::Point(414, 341);
			this->backteachercourse->Margin = System::Windows::Forms::Padding(2);
			this->backteachercourse->Name = L"backteachercourse";
			this->backteachercourse->Size = System::Drawing::Size(118, 40);
			this->backteachercourse->TabIndex = 2;
			this->backteachercourse->Text = L"Back";
			this->backteachercourse->UseVisualStyleBackColor = false;
			this->backteachercourse->Click += gcnew System::EventHandler(this, &MyForm::backteachercourse_Click);
			// 
			// teachercoursesgrid
			// 
			this->teachercoursesgrid->BackgroundColor = System::Drawing::Color::MistyRose;
			this->teachercoursesgrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->teachercoursesgrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->CourseName_Col,
					this->Class_Col, this->Section
			});
			this->teachercoursesgrid->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->teachercoursesgrid->Location = System::Drawing::Point(197, 108);
			this->teachercoursesgrid->Margin = System::Windows::Forms::Padding(2);
			this->teachercoursesgrid->Name = L"teachercoursesgrid";
			this->teachercoursesgrid->RowTemplate->Height = 24;
			this->teachercoursesgrid->Size = System::Drawing::Size(595, 171);
			this->teachercoursesgrid->TabIndex = 1;
			this->teachercoursesgrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::teachercoursesgrid_CellContentClick);
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(41, 24);
			this->label78->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(171, 39);
			this->label78->TabIndex = 0;
			this->label78->Text = L"View Courses";
			// 
			// teacherloginpanel
			// 
			this->teacherloginpanel->BackColor = System::Drawing::Color::Cornsilk;
			this->teacherloginpanel->Controls->Add(this->label81);
			this->teacherloginpanel->Controls->Add(this->teacherusername_textbox);
			this->teacherloginpanel->Controls->Add(this->teacherpassword_textbox);
			this->teacherloginpanel->Controls->Add(this->label80);
			this->teacherloginpanel->Controls->Add(this->label79);
			this->teacherloginpanel->Controls->Add(this->teacherback_btn);
			this->teacherloginpanel->Controls->Add(this->teacherloginbtn);
			this->teacherloginpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->teacherloginpanel->Location = System::Drawing::Point(0, 0);
			this->teacherloginpanel->Name = L"teacherloginpanel";
			this->teacherloginpanel->Size = System::Drawing::Size(1028, 441);
			this->teacherloginpanel->TabIndex = 5;
			this->teacherloginpanel->Visible = false;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::Color::Red;
			this->label81->Location = System::Drawing::Point(142, 50);
			this->label81->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(307, 24);
			this->label81->TabIndex = 5;
			this->label81->Text = L"Invalid login username or password";
			this->label81->Visible = false;
			// 
			// teacherusername_textbox
			// 
			this->teacherusername_textbox->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacherusername_textbox->Location = System::Drawing::Point(146, 109);
			this->teacherusername_textbox->Margin = System::Windows::Forms::Padding(2);
			this->teacherusername_textbox->Name = L"teacherusername_textbox";
			this->teacherusername_textbox->Size = System::Drawing::Size(256, 26);
			this->teacherusername_textbox->TabIndex = 4;
			// 
			// teacherpassword_textbox
			// 
			this->teacherpassword_textbox->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacherpassword_textbox->Location = System::Drawing::Point(146, 153);
			this->teacherpassword_textbox->Margin = System::Windows::Forms::Padding(2);
			this->teacherpassword_textbox->Name = L"teacherpassword_textbox";
			this->teacherpassword_textbox->PasswordChar = '*';
			this->teacherpassword_textbox->Size = System::Drawing::Size(256, 26);
			this->teacherpassword_textbox->TabIndex = 3;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(42, 153);
			this->label80->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(97, 19);
			this->label80->TabIndex = 2;
			this->label80->Text = L"Password";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(42, 108);
			this->label79->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(93, 19);
			this->label79->TabIndex = 2;
			this->label79->Text = L"Username";
			// 
			// teacherback_btn
			// 
			this->teacherback_btn->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacherback_btn->Location = System::Drawing::Point(96, 282);
			this->teacherback_btn->Margin = System::Windows::Forms::Padding(2);
			this->teacherback_btn->Name = L"teacherback_btn";
			this->teacherback_btn->Size = System::Drawing::Size(56, 38);
			this->teacherback_btn->TabIndex = 1;
			this->teacherback_btn->Text = L"Back";
			this->teacherback_btn->UseVisualStyleBackColor = true;
			this->teacherback_btn->Click += gcnew System::EventHandler(this, &MyForm::teacherback_btn_Click);
			// 
			// teacherloginbtn
			// 
			this->teacherloginbtn->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacherloginbtn->Location = System::Drawing::Point(571, 284);
			this->teacherloginbtn->Margin = System::Windows::Forms::Padding(2);
			this->teacherloginbtn->Name = L"teacherloginbtn";
			this->teacherloginbtn->Size = System::Drawing::Size(56, 36);
			this->teacherloginbtn->TabIndex = 0;
			this->teacherloginbtn->Text = L"Log In";
			this->teacherloginbtn->UseVisualStyleBackColor = true;
			this->teacherloginbtn->Click += gcnew System::EventHandler(this, &MyForm::teacherloginbtn_Click);
			// 
			// addmarkspanel
			// 
			this->addmarkspanel->BackColor = System::Drawing::Color::Cornsilk;
			this->addmarkspanel->Controls->Add(this->add_btn);
			this->addmarkspanel->Controls->Add(this->showlistbtn);
			this->addmarkspanel->Controls->Add(this->backbtn_AddMaks);
			this->addmarkspanel->Controls->Add(this->AddMarksGrid);
			this->addmarkspanel->Controls->Add(this->totalmarks);
			this->addmarkspanel->Controls->Add(this->date);
			this->addmarkspanel->Controls->Add(this->selectnumbercombo);
			this->addmarkspanel->Controls->Add(this->selecttypecombo);
			this->addmarkspanel->Controls->Add(this->selectsectioncombo);
			this->addmarkspanel->Controls->Add(this->selectcoursecombo);
			this->addmarkspanel->Controls->Add(this->selectclasscombo);
			this->addmarkspanel->Controls->Add(this->label88);
			this->addmarkspanel->Controls->Add(this->label87);
			this->addmarkspanel->Controls->Add(this->label86);
			this->addmarkspanel->Controls->Add(this->label85);
			this->addmarkspanel->Controls->Add(this->label84);
			this->addmarkspanel->Controls->Add(this->label83);
			this->addmarkspanel->Controls->Add(this->label82);
			this->addmarkspanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addmarkspanel->Location = System::Drawing::Point(0, 0);
			this->addmarkspanel->Margin = System::Windows::Forms::Padding(2);
			this->addmarkspanel->Name = L"addmarkspanel";
			this->addmarkspanel->Size = System::Drawing::Size(1028, 441);
			this->addmarkspanel->TabIndex = 2;
			this->addmarkspanel->Visible = false;
			this->addmarkspanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::addmarkspanel_Paint);
			// 
			// add_btn
			// 
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(658, 410);
			this->add_btn->Margin = System::Windows::Forms::Padding(2);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(101, 29);
			this->add_btn->TabIndex = 11;
			this->add_btn->Text = L"ADD";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MyForm::add_btn_Click);
			// 
			// showlistbtn
			// 
			this->showlistbtn->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->showlistbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showlistbtn->ForeColor = System::Drawing::Color::Snow;
			this->showlistbtn->Location = System::Drawing::Point(906, 132);
			this->showlistbtn->Margin = System::Windows::Forms::Padding(2);
			this->showlistbtn->Name = L"showlistbtn";
			this->showlistbtn->Size = System::Drawing::Size(124, 30);
			this->showlistbtn->TabIndex = 10;
			this->showlistbtn->Text = L"Show List";
			this->showlistbtn->UseVisualStyleBackColor = false;
			this->showlistbtn->Click += gcnew System::EventHandler(this, &MyForm::showlistbtn_Click);
			// 
			// backbtn_AddMaks
			// 
			this->backbtn_AddMaks->Location = System::Drawing::Point(132, 410);
			this->backbtn_AddMaks->Margin = System::Windows::Forms::Padding(2);
			this->backbtn_AddMaks->Name = L"backbtn_AddMaks";
			this->backbtn_AddMaks->Size = System::Drawing::Size(56, 19);
			this->backbtn_AddMaks->TabIndex = 9;
			this->backbtn_AddMaks->Text = L"back";
			this->backbtn_AddMaks->UseVisualStyleBackColor = true;
			this->backbtn_AddMaks->Click += gcnew System::EventHandler(this, &MyForm::backbtn_AddMaks_Click);
			// 
			// AddMarksGrid
			// 
			this->AddMarksGrid->BackgroundColor = System::Drawing::Color::White;
			this->AddMarksGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AddMarksGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->rollNo_marksCol,
					this->name_MarksCol, this->obtainedmarksCol
			});
			this->AddMarksGrid->Location = System::Drawing::Point(178, 166);
			this->AddMarksGrid->Margin = System::Windows::Forms::Padding(2);
			this->AddMarksGrid->Name = L"AddMarksGrid";
			this->AddMarksGrid->RowTemplate->Height = 24;
			this->AddMarksGrid->Size = System::Drawing::Size(708, 194);
			this->AddMarksGrid->TabIndex = 8;
			this->AddMarksGrid->Visible = false;
			// 
			// rollNo_marksCol
			// 
			this->rollNo_marksCol->HeaderText = L"Roll No";
			this->rollNo_marksCol->Name = L"rollNo_marksCol";
			this->rollNo_marksCol->ReadOnly = true;
			this->rollNo_marksCol->Width = 250;
			// 
			// name_MarksCol
			// 
			this->name_MarksCol->FillWeight = 300;
			this->name_MarksCol->HeaderText = L"Name";
			this->name_MarksCol->Name = L"name_MarksCol";
			this->name_MarksCol->ReadOnly = true;
			this->name_MarksCol->Width = 300;
			// 
			// obtainedmarksCol
			// 
			this->obtainedmarksCol->HeaderText = L"Obt.Marks";
			this->obtainedmarksCol->MaxInputLength = 3;
			this->obtainedmarksCol->Name = L"obtainedmarksCol";
			this->obtainedmarksCol->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// totalmarks
			// 
			this->totalmarks->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalmarks->Location = System::Drawing::Point(934, 92);
			this->totalmarks->Margin = System::Windows::Forms::Padding(2);
			this->totalmarks->Mask = L"000";
			this->totalmarks->Name = L"totalmarks";
			this->totalmarks->Size = System::Drawing::Size(76, 26);
			this->totalmarks->TabIndex = 7;
			// 
			// date
			// 
			this->date->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->Location = System::Drawing::Point(832, 92);
			this->date->Margin = System::Windows::Forms::Padding(2);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(76, 26);
			this->date->TabIndex = 6;
			this->date->ValidatingType = System::DateTime::typeid;
			// 
			// selectnumbercombo
			// 
			this->selectnumbercombo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectnumbercombo->FormattingEnabled = true;
			this->selectnumbercombo->Location = System::Drawing::Point(727, 92);
			this->selectnumbercombo->Margin = System::Windows::Forms::Padding(2);
			this->selectnumbercombo->Name = L"selectnumbercombo";
			this->selectnumbercombo->Size = System::Drawing::Size(66, 27);
			this->selectnumbercombo->TabIndex = 5;
			this->selectnumbercombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::selectnumbercombo_SelectedIndexChanged);
			this->selectnumbercombo->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectnumbercombo_MouseClick);
			// 
			// selecttypecombo
			// 
			this->selecttypecombo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selecttypecombo->FormattingEnabled = true;
			this->selecttypecombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Assignment", L"Sessional", L"Final" });
			this->selecttypecombo->Location = System::Drawing::Point(571, 92);
			this->selecttypecombo->Margin = System::Windows::Forms::Padding(2);
			this->selecttypecombo->Name = L"selecttypecombo";
			this->selecttypecombo->Size = System::Drawing::Size(132, 27);
			this->selecttypecombo->TabIndex = 4;
			// 
			// selectsectioncombo
			// 
			this->selectsectioncombo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectsectioncombo->FormattingEnabled = true;
			this->selectsectioncombo->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"A" });
			this->selectsectioncombo->Location = System::Drawing::Point(409, 92);
			this->selectsectioncombo->Margin = System::Windows::Forms::Padding(2);
			this->selectsectioncombo->Name = L"selectsectioncombo";
			this->selectsectioncombo->Size = System::Drawing::Size(123, 27);
			this->selectsectioncombo->TabIndex = 3;
			// 
			// selectcoursecombo
			// 
			this->selectcoursecombo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectcoursecombo->FormattingEnabled = true;
			this->selectcoursecombo->Location = System::Drawing::Point(208, 92);
			this->selectcoursecombo->Margin = System::Windows::Forms::Padding(2);
			this->selectcoursecombo->Name = L"selectcoursecombo";
			this->selectcoursecombo->Size = System::Drawing::Size(172, 27);
			this->selectcoursecombo->TabIndex = 2;
			// 
			// selectclasscombo
			// 
			this->selectclasscombo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectclasscombo->FormattingEnabled = true;
			this->selectclasscombo->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Pre-Nursery", L"Prep", L"1", L"2", L"3",
					L"4", L"5", L"6", L"7", L"8", L"9", L"10"
			});
			this->selectclasscombo->Location = System::Drawing::Point(43, 91);
			this->selectclasscombo->Margin = System::Windows::Forms::Padding(2);
			this->selectclasscombo->Name = L"selectclasscombo";
			this->selectclasscombo->Size = System::Drawing::Size(140, 27);
			this->selectclasscombo->TabIndex = 1;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(931, 58);
			this->label88->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(76, 19);
			this->label88->TabIndex = 0;
			this->label88->Text = L"T.Marks";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(829, 57);
			this->label87->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(51, 19);
			this->label87->TabIndex = 0;
			this->label87->Text = L"Date";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->Location = System::Drawing::Point(724, 58);
			this->label86->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(75, 19);
			this->label86->TabIndex = 0;
			this->label86->Text = L"number";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->Location = System::Drawing::Point(568, 58);
			this->label85->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(108, 19);
			this->label85->TabIndex = 0;
			this->label85->Text = L"select Type";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->Location = System::Drawing::Point(405, 58);
			this->label84->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(140, 19);
			this->label84->TabIndex = 0;
			this->label84->Text = L"select Section";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(214, 57);
			this->label83->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(133, 19);
			this->label83->TabIndex = 0;
			this->label83->Text = L"select Course";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(40, 58);
			this->label82->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(116, 19);
			this->label82->TabIndex = 0;
			this->label82->Text = L"select Class";
			// 
			// parent_optpanel
			// 
			this->parent_optpanel->BackColor = System::Drawing::Color::Cornsilk;
			this->parent_optpanel->Controls->Add(this->viewTranscriptbtn);
			this->parent_optpanel->Controls->Add(this->label90);
			this->parent_optpanel->Controls->Add(this->viewmarksbtn);
			this->parent_optpanel->Controls->Add(this->ViewFeeBTN);
			this->parent_optpanel->Controls->Add(this->GiveFeedbackBTN);
			this->parent_optpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->parent_optpanel->Location = System::Drawing::Point(0, 0);
			this->parent_optpanel->Name = L"parent_optpanel";
			this->parent_optpanel->Size = System::Drawing::Size(1028, 441);
			this->parent_optpanel->TabIndex = 12;
			this->parent_optpanel->Visible = false;
			// 
			// viewTranscriptbtn
			// 
			this->viewTranscriptbtn->BackColor = System::Drawing::Color::Orange;
			this->viewTranscriptbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->viewTranscriptbtn->Location = System::Drawing::Point(71, 240);
			this->viewTranscriptbtn->Name = L"viewTranscriptbtn";
			this->viewTranscriptbtn->Size = System::Drawing::Size(227, 39);
			this->viewTranscriptbtn->TabIndex = 3;
			this->viewTranscriptbtn->Text = L"View Transcript";
			this->viewTranscriptbtn->UseVisualStyleBackColor = false;
			this->viewTranscriptbtn->Click += gcnew System::EventHandler(this, &MyForm::viewTranscriptbtn_Click);
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->Location = System::Drawing::Point(345, 22);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(178, 39);
			this->label90->TabIndex = 2;
			this->label90->Text = L"Parents Login";
			// 
			// viewmarksbtn
			// 
			this->viewmarksbtn->BackColor = System::Drawing::Color::Orange;
			this->viewmarksbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewmarksbtn->Location = System::Drawing::Point(71, 180);
			this->viewmarksbtn->Name = L"viewmarksbtn";
			this->viewmarksbtn->Size = System::Drawing::Size(227, 39);
			this->viewmarksbtn->TabIndex = 2;
			this->viewmarksbtn->Text = L"View Marks";
			this->viewmarksbtn->UseVisualStyleBackColor = false;
			this->viewmarksbtn->Click += gcnew System::EventHandler(this, &MyForm::viewmarksbtn_Click);
			// 
			// ViewFeeBTN
			// 
			this->ViewFeeBTN->BackColor = System::Drawing::Color::Orange;
			this->ViewFeeBTN->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewFeeBTN->Location = System::Drawing::Point(71, 124);
			this->ViewFeeBTN->Name = L"ViewFeeBTN";
			this->ViewFeeBTN->Size = System::Drawing::Size(227, 39);
			this->ViewFeeBTN->TabIndex = 1;
			this->ViewFeeBTN->Text = L"View Fee Status";
			this->ViewFeeBTN->UseVisualStyleBackColor = false;
			this->ViewFeeBTN->Click += gcnew System::EventHandler(this, &MyForm::ViewFeeBTN_Click);
			// 
			// GiveFeedbackBTN
			// 
			this->GiveFeedbackBTN->BackColor = System::Drawing::Color::Orange;
			this->GiveFeedbackBTN->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GiveFeedbackBTN->Location = System::Drawing::Point(71, 70);
			this->GiveFeedbackBTN->Name = L"GiveFeedbackBTN";
			this->GiveFeedbackBTN->Size = System::Drawing::Size(227, 39);
			this->GiveFeedbackBTN->TabIndex = 0;
			this->GiveFeedbackBTN->Text = L"Give Feedback";
			this->GiveFeedbackBTN->UseVisualStyleBackColor = false;
			this->GiveFeedbackBTN->Click += gcnew System::EventHandler(this, &MyForm::GiveFeedbackBTN_Click);
			// 
			// WhichChildPanel
			// 
			this->WhichChildPanel->BackColor = System::Drawing::Color::Cornsilk;
			this->WhichChildPanel->Controls->Add(this->FeeStatusGridForParents);
			this->WhichChildPanel->Controls->Add(this->label89);
			this->WhichChildPanel->Controls->Add(this->button29);
			this->WhichChildPanel->Controls->Add(this->SeeChildFeeStatusBTN);
			this->WhichChildPanel->Controls->Add(this->View_Fee_OfMonthCB);
			this->WhichChildPanel->Controls->Add(this->RollNoCB);
			this->WhichChildPanel->Controls->Add(this->label91);
			this->WhichChildPanel->Controls->Add(this->label92);
			this->WhichChildPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WhichChildPanel->Location = System::Drawing::Point(0, 0);
			this->WhichChildPanel->Name = L"WhichChildPanel";
			this->WhichChildPanel->Size = System::Drawing::Size(1028, 441);
			this->WhichChildPanel->TabIndex = 31;
			this->WhichChildPanel->Visible = false;
			// 
			// FeeStatusGridForParents
			// 
			this->FeeStatusGridForParents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FeeStatusGridForParents->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Roll_no_Col,
					this->Month_Col, this->Prev_dues_Col, this->Fine_Col, this->Library_Col, this->Academic_Col, this->LateFine_Col, this->FeeStatus_Col
			});
			this->FeeStatusGridForParents->Location = System::Drawing::Point(127, 181);
			this->FeeStatusGridForParents->Name = L"FeeStatusGridForParents";
			this->FeeStatusGridForParents->Size = System::Drawing::Size(842, 186);
			this->FeeStatusGridForParents->TabIndex = 7;
			this->FeeStatusGridForParents->Visible = false;
			// 
			// Roll_no_Col
			// 
			this->Roll_no_Col->HeaderText = L"Roll No.";
			this->Roll_no_Col->Name = L"Roll_no_Col";
			// 
			// Month_Col
			// 
			this->Month_Col->HeaderText = L"Month";
			this->Month_Col->Name = L"Month_Col";
			// 
			// Prev_dues_Col
			// 
			this->Prev_dues_Col->HeaderText = L"Prev dues";
			this->Prev_dues_Col->Name = L"Prev_dues_Col";
			// 
			// Fine_Col
			// 
			this->Fine_Col->HeaderText = L"Fine";
			this->Fine_Col->Name = L"Fine_Col";
			// 
			// Library_Col
			// 
			this->Library_Col->HeaderText = L"Library Charges";
			this->Library_Col->Name = L"Library_Col";
			// 
			// Academic_Col
			// 
			this->Academic_Col->HeaderText = L"Academic Fee";
			this->Academic_Col->Name = L"Academic_Col";
			// 
			// LateFine_Col
			// 
			this->LateFine_Col->HeaderText = L"Late Fine";
			this->LateFine_Col->Name = L"LateFine_Col";
			// 
			// FeeStatus_Col
			// 
			this->FeeStatus_Col->HeaderText = L"Status";
			this->FeeStatus_Col->Name = L"FeeStatus_Col";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->Location = System::Drawing::Point(372, 17);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(151, 39);
			this->label89->TabIndex = 6;
			this->label89->Text = L"Select Child";
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button29->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16));
			this->button29->ForeColor = System::Drawing::Color::Cornsilk;
			this->button29->Location = System::Drawing::Point(28, 382);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(116, 46);
			this->button29->TabIndex = 5;
			this->button29->Text = L"Back";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// SeeChildFeeStatusBTN
			// 
			this->SeeChildFeeStatusBTN->BackColor = System::Drawing::Color::LightSeaGreen;
			this->SeeChildFeeStatusBTN->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16));
			this->SeeChildFeeStatusBTN->ForeColor = System::Drawing::Color::Cornsilk;
			this->SeeChildFeeStatusBTN->Location = System::Drawing::Point(547, 87);
			this->SeeChildFeeStatusBTN->Name = L"SeeChildFeeStatusBTN";
			this->SeeChildFeeStatusBTN->Size = System::Drawing::Size(116, 46);
			this->SeeChildFeeStatusBTN->TabIndex = 4;
			this->SeeChildFeeStatusBTN->Text = L"Submit";
			this->SeeChildFeeStatusBTN->UseVisualStyleBackColor = false;
			this->SeeChildFeeStatusBTN->Click += gcnew System::EventHandler(this, &MyForm::SeeChildFeeStatusBTN_Click);
			// 
			// View_Fee_OfMonthCB
			// 
			this->View_Fee_OfMonthCB->FormattingEnabled = true;
			this->View_Fee_OfMonthCB->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April",
					L"May", L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->View_Fee_OfMonthCB->Location = System::Drawing::Point(127, 125);
			this->View_Fee_OfMonthCB->Name = L"View_Fee_OfMonthCB";
			this->View_Fee_OfMonthCB->Size = System::Drawing::Size(190, 21);
			this->View_Fee_OfMonthCB->TabIndex = 3;
			// 
			// RollNoCB
			// 
			this->RollNoCB->FormattingEnabled = true;
			this->RollNoCB->Location = System::Drawing::Point(127, 75);
			this->RollNoCB->Name = L"RollNoCB";
			this->RollNoCB->Size = System::Drawing::Size(190, 21);
			this->RollNoCB->TabIndex = 2;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->Location = System::Drawing::Point(22, 127);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(75, 19);
			this->label91->TabIndex = 1;
			this->label91->Text = L"Month:";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->Location = System::Drawing::Point(19, 80);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(81, 19);
			this->label92->TabIndex = 0;
			this->label92->Text = L"Roll No";
			// 
			// AddFeePanel
			// 
			this->AddFeePanel->BackColor = System::Drawing::Color::Cornsilk;
			this->AddFeePanel->Controls->Add(this->label93);
			this->AddFeePanel->Controls->Add(this->button22);
			this->AddFeePanel->Controls->Add(this->WriteFeetoFileBTN);
			this->AddFeePanel->Controls->Add(this->label94);
			this->AddFeePanel->Controls->Add(this->LateFineTB);
			this->AddFeePanel->Controls->Add(this->label95);
			this->AddFeePanel->Controls->Add(this->FineTB);
			this->AddFeePanel->Controls->Add(this->label96);
			this->AddFeePanel->Controls->Add(this->Prev_Due_TB);
			this->AddFeePanel->Controls->Add(this->label97);
			this->AddFeePanel->Controls->Add(this->LibraryFeeTB);
			this->AddFeePanel->Controls->Add(this->label98);
			this->AddFeePanel->Controls->Add(this->FeeTB);
			this->AddFeePanel->Controls->Add(this->label99);
			this->AddFeePanel->Controls->Add(this->label100);
			this->AddFeePanel->Controls->Add(this->MonthFeeCB);
			this->AddFeePanel->Controls->Add(this->StudentAddFeeCB);
			this->AddFeePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddFeePanel->Location = System::Drawing::Point(0, 0);
			this->AddFeePanel->Name = L"AddFeePanel";
			this->AddFeePanel->Size = System::Drawing::Size(1028, 441);
			this->AddFeePanel->TabIndex = 30;
			this->AddFeePanel->Visible = false;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic));
			this->label93->Location = System::Drawing::Point(402, 12);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(113, 39);
			this->label93->TabIndex = 16;
			this->label93->Text = L"Add Fee";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Orange;
			this->button22->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16));
			this->button22->ForeColor = System::Drawing::Color::Cornsilk;
			this->button22->Location = System::Drawing::Point(756, 161);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(135, 51);
			this->button22->TabIndex = 15;
			this->button22->Text = L"Back";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click_1);
			// 
			// WriteFeetoFileBTN
			// 
			this->WriteFeetoFileBTN->BackColor = System::Drawing::Color::Orange;
			this->WriteFeetoFileBTN->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16));
			this->WriteFeetoFileBTN->ForeColor = System::Drawing::Color::Cornsilk;
			this->WriteFeetoFileBTN->Location = System::Drawing::Point(502, 158);
			this->WriteFeetoFileBTN->Name = L"WriteFeetoFileBTN";
			this->WriteFeetoFileBTN->Size = System::Drawing::Size(135, 51);
			this->WriteFeetoFileBTN->TabIndex = 14;
			this->WriteFeetoFileBTN->Text = L"Submit";
			this->WriteFeetoFileBTN->UseVisualStyleBackColor = false;
			this->WriteFeetoFileBTN->Click += gcnew System::EventHandler(this, &MyForm::WriteFeetoFileBTN_Click);
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->Location = System::Drawing::Point(15, 293);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(88, 19);
			this->label94->TabIndex = 13;
			this->label94->Text = L"Late Fine:";
			// 
			// LateFineTB
			// 
			this->LateFineTB->Location = System::Drawing::Point(159, 289);
			this->LateFineTB->Name = L"LateFineTB";
			this->LateFineTB->Size = System::Drawing::Size(182, 20);
			this->LateFineTB->TabIndex = 12;
			this->LateFineTB->Text = L"--";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(19, 258);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(45, 19);
			this->label95->TabIndex = 11;
			this->label95->Text = L"Fine:";
			// 
			// FineTB
			// 
			this->FineTB->Location = System::Drawing::Point(159, 259);
			this->FineTB->Name = L"FineTB";
			this->FineTB->Size = System::Drawing::Size(182, 20);
			this->FineTB->TabIndex = 10;
			this->FineTB->Text = L"--";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->Location = System::Drawing::Point(16, 222);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(133, 19);
			this->label96->TabIndex = 9;
			this->label96->Text = L"Previous Dues:";
			// 
			// Prev_Due_TB
			// 
			this->Prev_Due_TB->Location = System::Drawing::Point(160, 222);
			this->Prev_Due_TB->Name = L"Prev_Due_TB";
			this->Prev_Due_TB->Size = System::Drawing::Size(182, 20);
			this->Prev_Due_TB->TabIndex = 8;
			this->Prev_Due_TB->Text = L"--";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->Location = System::Drawing::Point(17, 185);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(104, 19);
			this->label97->TabIndex = 7;
			this->label97->Text = L"Library Fee:";
			// 
			// LibraryFeeTB
			// 
			this->LibraryFeeTB->Location = System::Drawing::Point(160, 184);
			this->LibraryFeeTB->Name = L"LibraryFeeTB";
			this->LibraryFeeTB->Size = System::Drawing::Size(182, 20);
			this->LibraryFeeTB->TabIndex = 6;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->Location = System::Drawing::Point(16, 155);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(125, 19);
			this->label98->TabIndex = 5;
			this->label98->Text = L"Academic Fee:";
			// 
			// FeeTB
			// 
			this->FeeTB->Location = System::Drawing::Point(159, 155);
			this->FeeTB->Name = L"FeeTB";
			this->FeeTB->Size = System::Drawing::Size(182, 20);
			this->FeeTB->TabIndex = 4;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12));
			this->label99->Location = System::Drawing::Point(19, 121);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(75, 19);
			this->label99->TabIndex = 3;
			this->label99->Text = L"Month:";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->Location = System::Drawing::Point(20, 90);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(137, 19);
			this->label100->TabIndex = 2;
			this->label100->Text = L"Student Name:";
			// 
			// MonthFeeCB
			// 
			this->MonthFeeCB->FormattingEnabled = true;
			this->MonthFeeCB->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April", L"May",
					L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->MonthFeeCB->Location = System::Drawing::Point(160, 122);
			this->MonthFeeCB->Name = L"MonthFeeCB";
			this->MonthFeeCB->Size = System::Drawing::Size(182, 21);
			this->MonthFeeCB->TabIndex = 1;
			// 
			// StudentAddFeeCB
			// 
			this->StudentAddFeeCB->FormattingEnabled = true;
			this->StudentAddFeeCB->Location = System::Drawing::Point(159, 88);
			this->StudentAddFeeCB->Name = L"StudentAddFeeCB";
			this->StudentAddFeeCB->Size = System::Drawing::Size(182, 21);
			this->StudentAddFeeCB->TabIndex = 0;
			// 
			// ViewMarksstudentpanel
			// 
			this->ViewMarksstudentpanel->BackColor = System::Drawing::Color::Cornsilk;
			this->ViewMarksstudentpanel->Controls->Add(this->select);
			this->ViewMarksstudentpanel->Controls->Add(this->selectstudentcombo);
			this->ViewMarksstudentpanel->Controls->Add(this->chemistrydatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->physicsdatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->Computerdatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->urdudatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->PSdatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->sciencedatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->PSlabel);
			this->ViewMarksstudentpanel->Controls->Add(this->chemistrylabel);
			this->ViewMarksstudentpanel->Controls->Add(this->physicslabel);
			this->ViewMarksstudentpanel->Controls->Add(this->computerlabel);
			this->ViewMarksstudentpanel->Controls->Add(this->urdulabel);
			this->ViewMarksstudentpanel->Controls->Add(this->ISlabel);
			this->ViewMarksstudentpanel->Controls->Add(this->math_label);
			this->ViewMarksstudentpanel->Controls->Add(this->label101);
			this->ViewMarksstudentpanel->Controls->Add(this->english_label);
			this->ViewMarksstudentpanel->Controls->Add(this->Mathdatagrid);
			this->ViewMarksstudentpanel->Controls->Add(this->englishdatagrid);
			this->ViewMarksstudentpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ViewMarksstudentpanel->Location = System::Drawing::Point(0, 0);
			this->ViewMarksstudentpanel->Margin = System::Windows::Forms::Padding(2);
			this->ViewMarksstudentpanel->Name = L"ViewMarksstudentpanel";
			this->ViewMarksstudentpanel->Size = System::Drawing::Size(1028, 441);
			this->ViewMarksstudentpanel->TabIndex = 12;
			this->ViewMarksstudentpanel->Visible = false;
			this->ViewMarksstudentpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::ViewMarksstudentpanel_Paint);
			// 
			// select
			// 
			this->select->Location = System::Drawing::Point(736, 41);
			this->select->Margin = System::Windows::Forms::Padding(2);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(56, 19);
			this->select->TabIndex = 11;
			this->select->Text = L"Select";
			this->select->UseVisualStyleBackColor = true;
			// 
			// selectstudentcombo
			// 
			this->selectstudentcombo->FormattingEnabled = true;
			this->selectstudentcombo->Location = System::Drawing::Point(284, 39);
			this->selectstudentcombo->Margin = System::Windows::Forms::Padding(2);
			this->selectstudentcombo->Name = L"selectstudentcombo";
			this->selectstudentcombo->Size = System::Drawing::Size(404, 21);
			this->selectstudentcombo->TabIndex = 10;
			// 
			// chemistrydatagrid
			// 
			this->chemistrydatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->chemistrydatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->chemistrydatagrid->Location = System::Drawing::Point(835, 253);
			this->chemistrydatagrid->Margin = System::Windows::Forms::Padding(2);
			this->chemistrydatagrid->Name = L"chemistrydatagrid";
			this->chemistrydatagrid->RowTemplate->Height = 24;
			this->chemistrydatagrid->Size = System::Drawing::Size(218, 122);
			this->chemistrydatagrid->TabIndex = 9;
			this->chemistrydatagrid->Visible = false;
			// 
			// physicsdatagrid
			// 
			this->physicsdatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->physicsdatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->physicsdatagrid->Location = System::Drawing::Point(835, 101);
			this->physicsdatagrid->Margin = System::Windows::Forms::Padding(2);
			this->physicsdatagrid->Name = L"physicsdatagrid";
			this->physicsdatagrid->RowTemplate->Height = 24;
			this->physicsdatagrid->Size = System::Drawing::Size(218, 122);
			this->physicsdatagrid->TabIndex = 8;
			this->physicsdatagrid->Visible = false;
			// 
			// Computerdatagrid
			// 
			this->Computerdatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Computerdatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Computerdatagrid->Location = System::Drawing::Point(555, 254);
			this->Computerdatagrid->Margin = System::Windows::Forms::Padding(2);
			this->Computerdatagrid->Name = L"Computerdatagrid";
			this->Computerdatagrid->RowTemplate->Height = 24;
			this->Computerdatagrid->Size = System::Drawing::Size(237, 122);
			this->Computerdatagrid->TabIndex = 7;
			this->Computerdatagrid->Visible = false;
			// 
			// urdudatagrid
			// 
			this->urdudatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->urdudatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->urdudatagrid->Location = System::Drawing::Point(555, 95);
			this->urdudatagrid->Margin = System::Windows::Forms::Padding(2);
			this->urdudatagrid->Name = L"urdudatagrid";
			this->urdudatagrid->RowTemplate->Height = 24;
			this->urdudatagrid->Size = System::Drawing::Size(237, 122);
			this->urdudatagrid->TabIndex = 6;
			this->urdudatagrid->Visible = false;
			// 
			// PSdatagrid
			// 
			this->PSdatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PSdatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PSdatagrid->Location = System::Drawing::Point(284, 254);
			this->PSdatagrid->Margin = System::Windows::Forms::Padding(2);
			this->PSdatagrid->Name = L"PSdatagrid";
			this->PSdatagrid->RowTemplate->Height = 24;
			this->PSdatagrid->Size = System::Drawing::Size(214, 122);
			this->PSdatagrid->TabIndex = 5;
			this->PSdatagrid->Visible = false;
			// 
			// sciencedatagrid
			// 
			this->sciencedatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sciencedatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->sciencedatagrid->Location = System::Drawing::Point(284, 95);
			this->sciencedatagrid->Margin = System::Windows::Forms::Padding(2);
			this->sciencedatagrid->Name = L"sciencedatagrid";
			this->sciencedatagrid->RowTemplate->Height = 24;
			this->sciencedatagrid->Size = System::Drawing::Size(213, 122);
			this->sciencedatagrid->TabIndex = 4;
			this->sciencedatagrid->Visible = false;
			// 
			// PSlabel
			// 
			this->PSlabel->AutoSize = true;
			this->PSlabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PSlabel->Location = System::Drawing::Point(280, 232);
			this->PSlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PSlabel->Name = L"PSlabel";
			this->PSlabel->Size = System::Drawing::Size(157, 19);
			this->PSlabel->TabIndex = 3;
			this->PSlabel->Text = L"Pakistan Studies";
			this->PSlabel->Visible = false;
			// 
			// chemistrylabel
			// 
			this->chemistrylabel->AutoSize = true;
			this->chemistrylabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chemistrylabel->Location = System::Drawing::Point(834, 232);
			this->chemistrylabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->chemistrylabel->Name = L"chemistrylabel";
			this->chemistrylabel->Size = System::Drawing::Size(100, 19);
			this->chemistrylabel->TabIndex = 3;
			this->chemistrylabel->Text = L"Chemistry";
			this->chemistrylabel->Visible = false;
			// 
			// physicslabel
			// 
			this->physicslabel->AutoSize = true;
			this->physicslabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->physicslabel->Location = System::Drawing::Point(834, 72);
			this->physicslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->physicslabel->Name = L"physicslabel";
			this->physicslabel->Size = System::Drawing::Size(74, 19);
			this->physicslabel->TabIndex = 3;
			this->physicslabel->Text = L"physics";
			this->physicslabel->Visible = false;
			// 
			// computerlabel
			// 
			this->computerlabel->AutoSize = true;
			this->computerlabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->computerlabel->Location = System::Drawing::Point(552, 232);
			this->computerlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->computerlabel->Name = L"computerlabel";
			this->computerlabel->Size = System::Drawing::Size(170, 19);
			this->computerlabel->TabIndex = 3;
			this->computerlabel->Text = L"Computer Science";
			this->computerlabel->Visible = false;
			// 
			// urdulabel
			// 
			this->urdulabel->AutoSize = true;
			this->urdulabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->urdulabel->Location = System::Drawing::Point(552, 71);
			this->urdulabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->urdulabel->Name = L"urdulabel";
			this->urdulabel->Size = System::Drawing::Size(55, 19);
			this->urdulabel->TabIndex = 3;
			this->urdulabel->Text = L"Urdu";
			this->urdulabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->urdulabel->Visible = false;
			// 
			// ISlabel
			// 
			this->ISlabel->AutoSize = true;
			this->ISlabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ISlabel->Location = System::Drawing::Point(280, 71);
			this->ISlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ISlabel->Name = L"ISlabel";
			this->ISlabel->Size = System::Drawing::Size(93, 19);
			this->ISlabel->TabIndex = 3;
			this->ISlabel->Text = L"Islamiyat";
			this->ISlabel->Visible = false;
			// 
			// math_label
			// 
			this->math_label->AutoSize = true;
			this->math_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->math_label->Location = System::Drawing::Point(26, 232);
			this->math_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->math_label->Name = L"math_label";
			this->math_label->Size = System::Drawing::Size(57, 19);
			this->math_label->TabIndex = 2;
			this->math_label->Text = L"Math";
			this->math_label->Visible = false;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label101->Location = System::Drawing::Point(130, 40);
			this->label101->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(146, 19);
			this->label101->TabIndex = 2;
			this->label101->Text = L"Select Student:";
			this->label101->Visible = false;
			// 
			// english_label
			// 
			this->english_label->AutoSize = true;
			this->english_label->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->english_label->Location = System::Drawing::Point(26, 68);
			this->english_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->english_label->Name = L"english_label";
			this->english_label->Size = System::Drawing::Size(75, 19);
			this->english_label->TabIndex = 2;
			this->english_label->Text = L"English";
			this->english_label->Visible = false;
			// 
			// Mathdatagrid
			// 
			this->Mathdatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Mathdatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Mathdatagrid->Location = System::Drawing::Point(28, 253);
			this->Mathdatagrid->Margin = System::Windows::Forms::Padding(2);
			this->Mathdatagrid->Name = L"Mathdatagrid";
			this->Mathdatagrid->RowTemplate->Height = 24;
			this->Mathdatagrid->Size = System::Drawing::Size(208, 122);
			this->Mathdatagrid->TabIndex = 1;
			this->Mathdatagrid->Visible = false;
			// 
			// englishdatagrid
			// 
			this->englishdatagrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->englishdatagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->englishdatagrid->Location = System::Drawing::Point(28, 95);
			this->englishdatagrid->Margin = System::Windows::Forms::Padding(2);
			this->englishdatagrid->Name = L"englishdatagrid";
			this->englishdatagrid->RowTemplate->Height = 24;
			this->englishdatagrid->Size = System::Drawing::Size(208, 122);
			this->englishdatagrid->TabIndex = 0;
			this->englishdatagrid->Visible = false;
			// 
			// viewtranscriptpanel
			// 
			this->viewtranscriptpanel->BackColor = System::Drawing::Color::Cornsilk;
			this->viewtranscriptpanel->Controls->Add(this->viewtranscript_btn);
			this->viewtranscriptpanel->Controls->Add(this->percentage);
			this->viewtranscriptpanel->Controls->Add(this->studentnamelabel);
			this->viewtranscriptpanel->Controls->Add(this->submittranscriptbtn);
			this->viewtranscriptpanel->Controls->Add(this->ViewTranscriptGrid);
			this->viewtranscriptpanel->Controls->Add(this->studentnamecombo);
			this->viewtranscriptpanel->Controls->Add(this->selectsessioncombo);
			this->viewtranscriptpanel->Controls->Add(this->label104);
			this->viewtranscriptpanel->Controls->Add(this->percentagelabel);
			this->viewtranscriptpanel->Controls->Add(this->label103);
			this->viewtranscriptpanel->Controls->Add(this->label102);
			this->viewtranscriptpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->viewtranscriptpanel->Location = System::Drawing::Point(0, 0);
			this->viewtranscriptpanel->Margin = System::Windows::Forms::Padding(2);
			this->viewtranscriptpanel->Name = L"viewtranscriptpanel";
			this->viewtranscriptpanel->Size = System::Drawing::Size(1028, 441);
			this->viewtranscriptpanel->TabIndex = 12;
			this->viewtranscriptpanel->Visible = false;
			// 
			// viewtranscript_btn
			// 
			this->viewtranscript_btn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewtranscript_btn->Location = System::Drawing::Point(335, 403);
			this->viewtranscript_btn->Margin = System::Windows::Forms::Padding(2);
			this->viewtranscript_btn->Name = L"viewtranscript_btn";
			this->viewtranscript_btn->Size = System::Drawing::Size(89, 29);
			this->viewtranscript_btn->TabIndex = 6;
			this->viewtranscript_btn->Text = L"Back";
			this->viewtranscript_btn->UseVisualStyleBackColor = true;
			this->viewtranscript_btn->Click += gcnew System::EventHandler(this, &MyForm::viewtranscript_btn_Click);
			// 
			// percentage
			// 
			this->percentage->AutoSize = true;
			this->percentage->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percentage->Location = System::Drawing::Point(516, 185);
			this->percentage->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->percentage->Name = L"percentage";
			this->percentage->Size = System::Drawing::Size(85, 21);
			this->percentage->TabIndex = 5;
			this->percentage->Text = L"label106";
			this->percentage->Visible = false;
			// 
			// studentnamelabel
			// 
			this->studentnamelabel->AutoSize = true;
			this->studentnamelabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentnamelabel->Location = System::Drawing::Point(516, 158);
			this->studentnamelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->studentnamelabel->Name = L"studentnamelabel";
			this->studentnamelabel->Size = System::Drawing::Size(85, 21);
			this->studentnamelabel->TabIndex = 5;
			this->studentnamelabel->Text = L"label106";
			this->studentnamelabel->Visible = false;
			// 
			// submittranscriptbtn
			// 
			this->submittranscriptbtn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submittranscriptbtn->Location = System::Drawing::Point(680, 117);
			this->submittranscriptbtn->Margin = System::Windows::Forms::Padding(2);
			this->submittranscriptbtn->Name = L"submittranscriptbtn";
			this->submittranscriptbtn->Size = System::Drawing::Size(102, 25);
			this->submittranscriptbtn->TabIndex = 3;
			this->submittranscriptbtn->Text = L"submit";
			this->submittranscriptbtn->UseVisualStyleBackColor = true;
			this->submittranscriptbtn->Click += gcnew System::EventHandler(this, &MyForm::submittranscriptbtn_Click);
			// 
			// ViewTranscriptGrid
			// 
			this->ViewTranscriptGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ViewTranscriptGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewTranscriptGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->C_NameCol,
					this->obtmarkscol, this->TotalMarksCol, this->gradeCol
			});
			this->ViewTranscriptGrid->Location = System::Drawing::Point(134, 215);
			this->ViewTranscriptGrid->Margin = System::Windows::Forms::Padding(2);
			this->ViewTranscriptGrid->Name = L"ViewTranscriptGrid";
			this->ViewTranscriptGrid->RowTemplate->Height = 24;
			this->ViewTranscriptGrid->Size = System::Drawing::Size(824, 176);
			this->ViewTranscriptGrid->TabIndex = 4;
			// 
			// C_NameCol
			// 
			this->C_NameCol->HeaderText = L"Course Name";
			this->C_NameCol->Name = L"C_NameCol";
			this->C_NameCol->ReadOnly = true;
			this->C_NameCol->Width = 200;
			// 
			// obtmarkscol
			// 
			this->obtmarkscol->HeaderText = L"Obtained Marks";
			this->obtmarkscol->Name = L"obtmarkscol";
			this->obtmarkscol->ReadOnly = true;
			this->obtmarkscol->Width = 200;
			// 
			// TotalMarksCol
			// 
			this->TotalMarksCol->HeaderText = L"Total Marks";
			this->TotalMarksCol->Name = L"TotalMarksCol";
			this->TotalMarksCol->ReadOnly = true;
			this->TotalMarksCol->Width = 200;
			// 
			// gradeCol
			// 
			this->gradeCol->FillWeight = 175;
			this->gradeCol->HeaderText = L"Grade";
			this->gradeCol->Name = L"gradeCol";
			this->gradeCol->ReadOnly = true;
			this->gradeCol->Width = 175;
			// 
			// studentnamecombo
			// 
			this->studentnamecombo->FormattingEnabled = true;
			this->studentnamecombo->Location = System::Drawing::Point(309, 119);
			this->studentnamecombo->Margin = System::Windows::Forms::Padding(2);
			this->studentnamecombo->Name = L"studentnamecombo";
			this->studentnamecombo->Size = System::Drawing::Size(297, 21);
			this->studentnamecombo->TabIndex = 2;
			// 
			// selectsessioncombo
			// 
			this->selectsessioncombo->FormattingEnabled = true;
			this->selectsessioncombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Assignment", L"Sessional", L"Final" });
			this->selectsessioncombo->Location = System::Drawing::Point(309, 68);
			this->selectsessioncombo->Margin = System::Windows::Forms::Padding(2);
			this->selectsessioncombo->Name = L"selectsessioncombo";
			this->selectsessioncombo->Size = System::Drawing::Size(297, 21);
			this->selectsessioncombo->TabIndex = 1;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->Location = System::Drawing::Point(152, 120);
			this->label104->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(135, 19);
			this->label104->TabIndex = 0;
			this->label104->Text = L"student name";
			// 
			// percentagelabel
			// 
			this->percentagelabel->AutoSize = true;
			this->percentagelabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percentagelabel->Location = System::Drawing::Point(214, 187);
			this->percentagelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->percentagelabel->Name = L"percentagelabel";
			this->percentagelabel->Size = System::Drawing::Size(111, 38);
			this->percentagelabel->TabIndex = 0;
			this->percentagelabel->Text = L"Percentage\r:\n";
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->Location = System::Drawing::Point(214, 158);
			this->label103->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(137, 19);
			this->label103->TabIndex = 0;
			this->label103->Text = L"student name:";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label102->Location = System::Drawing::Point(152, 72);
			this->label102->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(133, 19);
			this->label102->TabIndex = 0;
			this->label102->Text = L"Select session";
			// 
			// CourseName_Col
			// 
			this->CourseName_Col->FillWeight = 250;
			this->CourseName_Col->HeaderText = L"Course Name";
			this->CourseName_Col->Name = L"CourseName_Col";
			this->CourseName_Col->Width = 250;
			// 
			// Class_Col
			// 
			this->Class_Col->FillWeight = 150;
			this->Class_Col->HeaderText = L"Class";
			this->Class_Col->Name = L"Class_Col";
			this->Class_Col->Width = 150;
			// 
			// Section
			// 
			this->Section->FillWeight = 150;
			this->Section->HeaderText = L"Section";
			this->Section->Name = L"Section";
			this->Section->Width = 150;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 441);
			this->Controls->Add(this->teachercoursepanel);
			this->Controls->Add(this->ViewTeacherspanel);
			this->Controls->Add(this->FeedBack);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->ViewFeeStatus_panel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->EditStudentPanel);
			this->Controls->Add(this->LoginFeedback);
			this->Controls->Add(this->viewtranscriptpanel);
			this->Controls->Add(this->parent_optpanel);
			this->Controls->Add(this->mainpanel);
			this->Controls->Add(this->teacherloginpanel);
			this->Controls->Add(this->AssignCoursepanel);
			this->Controls->Add(this->ViewStudentpanel);
			this->Controls->Add(this->StudentPanel);
			this->Controls->Add(this->ViewMarksstudentpanel);
			this->Controls->Add(this->AddCoursepanel);
			this->Controls->Add(this->addmarkspanel);
			this->Controls->Add(this->WhichChildPanel);
			this->Controls->Add(this->AddFeePanel);
			this->Controls->Add(this->TeacherPanel);
			this->Controls->Add(this->ViewCoursespanel);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->mainpanel->ResumeLayout(false);
			this->FeedBack->ResumeLayout(false);
			this->FeedBack->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->error_teacher->ResumeLayout(false);
			this->error_teacher->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->LoginFeedback->ResumeLayout(false);
			this->LoginFeedback->PerformLayout();
			this->AssignCoursepanel->ResumeLayout(false);
			this->AssignCoursepanel->PerformLayout();
			this->ViewTeacherspanel->ResumeLayout(false);
			this->ViewTeacherspanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTeacherGrid))->EndInit();
			this->ViewCoursespanel->ResumeLayout(false);
			this->ViewCoursespanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewCourseGrid))->EndInit();
			this->ViewStudentpanel->ResumeLayout(false);
			this->ViewStudentpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentGrid))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->error->ResumeLayout(false);
			this->error->PerformLayout();
			this->EditStudentPanel->ResumeLayout(false);
			this->EditStudentPanel->PerformLayout();
			this->error_editstudent->ResumeLayout(false);
			this->error_editstudent->PerformLayout();
			this->AddCoursepanel->ResumeLayout(false);
			this->AddCoursepanel->PerformLayout();
			this->ViewFeeStatus_panel->ResumeLayout(false);
			this->ViewFeeStatus_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FeeStatusGrid))->EndInit();
			this->StudentPanel->ResumeLayout(false);
			this->StudentPanel->PerformLayout();
			this->TeacherPanel->ResumeLayout(false);
			this->teachercoursepanel->ResumeLayout(false);
			this->teachercoursepanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teachercoursesgrid))->EndInit();
			this->teacherloginpanel->ResumeLayout(false);
			this->teacherloginpanel->PerformLayout();
			this->addmarkspanel->ResumeLayout(false);
			this->addmarkspanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddMarksGrid))->EndInit();
			this->parent_optpanel->ResumeLayout(false);
			this->parent_optpanel->PerformLayout();
			this->WhichChildPanel->ResumeLayout(false);
			this->WhichChildPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FeeStatusGridForParents))->EndInit();
			this->AddFeePanel->ResumeLayout(false);
			this->AddFeePanel->PerformLayout();
			this->ViewMarksstudentpanel->ResumeLayout(false);
			this->ViewMarksstudentpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chemistrydatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->physicsdatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Computerdatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->urdudatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PSdatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sciencedatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mathdatagrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->englishdatagrid))->EndInit();
			this->viewtranscriptpanel->ResumeLayout(false);
			this->viewtranscriptpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTranscriptGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		mainpanel->Visible = false;
		panel1->Visible = true;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void panel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = false;
		mainpanel->Visible = true;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		mainpanel->Visible = false;
		teacherloginpanel->Visible = true;
		teacher_count = 0;
		string data;
		ifstream in("Teachers.txt");
		while (getline(in, data))
			teacher_count++;
		in.close();
		teacher_arr = new string *[teacher_count];
		for (int i = 0; i < teacher_count; i++)
			teacher_arr[i] = new string[12];
		in.open("Teachers.txt");
		int j = 0, k = 0;
		while (j < teacher_count)
		{
			if (k == 11)
			{
				getline(in, data);
				teacher_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, ' ');
				teacher_arr[j][k] = data;
				k++;
			}
		}
		in.close();
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		string username = context.marshal_as<string>(textBox2->Text);
		string password = context.marshal_as<string>(textBox1->Text);
		if (admin.checkpassword(username, password))
		{
			panel1->Visible = false;
			label4->Visible = false;
			panel2->Visible = true;
		}
		else
			label4->Visible = true;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		panel3->Visible = true;
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		panel1->Visible = true;
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		panel3->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		string first, last, Email, date, Contactno, pass, Address, Class, fathername, mothername, f_prof, m_prof, parent_contact, BloodGroup, Birth, g, parent_email;
		int Fees;
		bool errorfound = false;
		msclr::interop::marshal_context context;
		first = context.marshal_as<string>(fName->Text);
		last = context.marshal_as<string>(lName->Text);
		Email = context.marshal_as<string>(email->Text);
		date = context.marshal_as<string>(regdate->Text);
		pass = context.marshal_as<string>(password->Text);
		Address = context.marshal_as<string>(address->Text);
		fathername = context.marshal_as<string>(father->Text);
		mothername = context.marshal_as<string>(mother->Text);
		f_prof = context.marshal_as<string>(father_prof->Text);
		m_prof = context.marshal_as<string>(mother_prof->Text);
		Contactno = context.marshal_as<string>(mobileNo->Text);
		Birth = context.marshal_as<string>(DOB->Text);
		parent_contact = context.marshal_as<string>(parentNo->Text);
		parent_email = context.marshal_as<string>(parentemailText->Text);
		Class = context.marshal_as<string>(comboBox1->Text);
		g = context.marshal_as<string>(gender->Text);
		BloodGroup = context.marshal_as<string>(B_grp->Text);
		if (fName->Text == "" || lName->Text == "" || email->Text == "" || regdate->Text == "" || password->Text == "" || address->Text == "" || father->Text == "" || mother->Text == "" || father_prof->Text == "" || mother_prof->Text == "" || mobileNo->Text == "" || DOB->Text == "" || parentNo->Text == "" || parentemailText->Text == "" || comboBox1->Text == "" || gender->Text == "" || B_grp->Text == "" || fees->Text == "")
		{
			errorfound = true;
			if (fees->Text == "")
				fees->Text = "99999";
		}
		Fees = Convert::ToInt32(fees->Text);
		if (Fees < 0 || Fees>25000)
		{
			fees->Text = "";
			errorfound = true;
		}
		if (errorfound)
			error->Visible = true;
		else
		{
			panel3->Visible = false;
			panel2->Visible = true;
			admin.AddNewStudent(student, first, last, Email, date, Contactno, pass, Address, g, Class, fathername, mothername, f_prof, m_prof, Birth, parent_contact, BloodGroup, Fees, parent_email);
		}
	}
	private: System::Void password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void EditStudentPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		student_index = 0;
		student_combobox->Items->Clear();
		string data;
		ifstream indata("Students.txt");
		while (getline(indata, data))
			student_index++;
		indata.close();
		arr = new string *[student_index];
		for (int i = 0; i < student_index; i++)
			arr[i] = new string[19];
		indata.open("Students.txt");
		int j = 0, k = 0;
		while (j < student_index)
		{
			if (k == 18)
			{
				getline(indata, data);
				arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(indata, data, '<');
				arr[j][k] = data;
				k++;
			}
		}
		indata.close();
		j = 3;
		for (int i = 0; i < student_index; i++)
		{
			data = arr[i][j];
			student_combobox->Items->Add(gcnew String(data.c_str()));
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		EditStudentPanel->Visible = true;
	}
	private: System::Void cancel_edit_Click(System::Object^  sender, System::EventArgs^  e) {
		EditStudentPanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void submit_edit_Click(System::Object^  sender, System::EventArgs^  e) {
		/*Submit*/
		bool errorfound = false;
		msclr::interop::marshal_context context;
		string key = context.marshal_as<string>(student_combobox->Text);
		string address = context.marshal_as<string>(edit_address->Text);
		string mobileno = context.marshal_as<string>(edit_number->Text);
		if (student_combobox->Text == "" || edit_address->Text == "" || edit_number->Text == "" || edit_fees->Text == "")
		{
			if (edit_fees->Text == "")
				edit_fees->Text = "999999";
			errorfound = true;
		}
		string fees = context.marshal_as<string>(edit_fees->Text);
		int Fees = Convert::ToInt32(edit_fees->Text);
		if (Fees < 0 || Fees>25000)
		{
			edit_fees->Text = "";
			errorfound = true;
		}
		if (errorfound == true)
			error_editstudent->Visible = true;
		else
		{
			EditStudentPanel->Visible = false;
			panel2->Visible = true;
			admin.EditSudentData(arr, key, student_index, address, mobileno, fees);
			for (int i = 0; i < student_index; i++)
				delete[]arr[i];
			delete[] arr;
			arr = NULL;
		}
	}
	private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void submit_addcourse_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		string p_course = context.marshal_as<string>(parentcouurse_combo->Text);
		string name = context.marshal_as<string>(coursename_box->Text);
		string code = context.marshal_as<string>(coursecode_box->Text);
		string Class = context.marshal_as<string>(class_combo->Text);
		admin.Addcourses(course_obj, p_course, name, code, Class);
		AddCoursepanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void AddCoursebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		AddCoursepanel->Visible = true;
	}
	private: System::Void ViewStudentbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		StudentGrid->Rows->Clear();
		panel2->Visible = false;
		ViewStudentpanel->Visible = true;
		string data;
		int index = 0;
		ifstream indata("Students.txt");
		while (getline(indata, data))
			index++;
		indata.close();
		string **student_arr = new string *[index];
		for (int i = 0; i < index; i++)
			student_arr[i] = new string[19];
		indata.open("Students.txt");
		int j = 0, k = 0;
		while (j < index)
		{
			if (k == 18)
			{
				getline(indata, data);
				student_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(indata, data, '<');
				student_arr[j][k] = data;
				k++;
			}
		}
		indata.close();
		for (int i = 0; i < index; i++)
		{
			String ^RollNo = gcnew String(student_arr[i][0].c_str());
			string temp = student_arr[i][1] + " " + student_arr[i][2];
			String ^name = gcnew String(temp.c_str());
			String ^email = gcnew String(student_arr[i][3].c_str());
			String ^fee = gcnew String(student_arr[i][17].c_str());
			StudentGrid->Rows->Add(RollNo, name, email, fee);
		}
		for (int i = 0; i < index; i++)
			delete[]student_arr[i];
		delete[]student_arr;
		student_arr = NULL;
	}
	private: System::Void viewStudentsback_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		ViewStudentpanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void ViewCoursesBack_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		ViewCoursespanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
		ViewCourseGrid->Rows->Clear();
		panel2->Visible = false;
		ViewCoursespanel->Visible = true;
		int index = 0;
		string data;
		ifstream indata("Courses.txt");
		while (getline(indata, data))
			index++;
		indata.close();
		string **courses_arr = new string*[index];
		for (int i = 0; i < index; i++)
			courses_arr[i] = new string[4];
		indata.open("Courses.txt");
		int j = 0, k = 0;
		while (j < index)
		{
			if (k == 3)
			{
				getline(indata, data);
				courses_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(indata, data, '<');
				courses_arr[j][k] = data;
				k++;
			}
		}
		indata.close();
		for (int i = 0; i < index; i++)
		{
			String ^parent = gcnew String(courses_arr[i][0].c_str());
			String ^name = gcnew String(courses_arr[i][1].c_str());
			String ^code = gcnew String(courses_arr[i][2].c_str());
			ViewCourseGrid->Rows->Add(code, name, parent);
		}
		for (int i = 0; i < index; i++)
			delete[]courses_arr[i];
		delete[]courses_arr;
		arr = NULL;
	}
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void error_ok_Click(System::Object^  sender, System::EventArgs^  e) {
		error->Visible = false;
	}
	private: System::Void Teacher_Submit_Click(System::Object^  sender, System::EventArgs^  e) {
		string fname, lname, email, joining, password, cnic, qualification, contact, birth, address, gender;
		int salary;
		bool errorfound = false;
		msclr::interop::marshal_context context;
		fname = context.marshal_as<string>(textBox3->Text);
		lname = context.marshal_as<string>(textBox4->Text);
		email = context.marshal_as<string>(textBox5->Text);
		joining = context.marshal_as<string>(textBox6->Text);
		password = context.marshal_as<string>(textBox7->Text);
		cnic = context.marshal_as<string>(textBox8->Text);
		qualification = context.marshal_as<string>(comboBox3->Text);
		gender = context.marshal_as<string>(comboBox2->Text);
		contact = context.marshal_as<string>(textBox11->Text);
		birth = context.marshal_as<string>(textBox12->Text);
		address = context.marshal_as<string>(textBox13->Text);
		if (textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox11->Text == "" || textBox12->Text == "" || textBox13->Text == "" || textBox14->Text == "" || comboBox2->Text == "" || comboBox3->Text == "")
		{
			if (textBox14->Text == "")
				textBox14->Text = "99999";
			errorfound = true;
		}
		salary = Convert::ToInt32(textBox14->Text);
		if (!errorfound)
		{
			admin.AddNewTeacher(teacher, fname, lname, email, joining, password, cnic, gender, qualification, contact, birth, address, salary);
			panel5->Visible = false;
			panel2->Visible = true;
		}
		else
			error_teacher->Visible = true;
	}
	private: System::Void Teacher_Canel_Click(System::Object^  sender, System::EventArgs^  e) {
		panel5->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
		string email_edit, qualification_edit, contact_edit, address_edit, salary_edit;
		msclr::interop::marshal_context context;
		string id =
			email_edit = context.marshal_as<string>(comboBox4->Text);
		qualification_edit = context.marshal_as<string>(textBox9->Text);
		contact_edit = context.marshal_as<string>(textBox16->Text);
		address_edit = context.marshal_as<string>(textBox15->Text);
		salary_edit = context.marshal_as<string>(textBox10->Text);
		panel4->Visible = false;
		panel2->Visible = true;
		admin.EditTeacherData(teacher_arr, teacher_count, email_edit, address_edit, qualification_edit, contact_edit, salary_edit);
		for (int i = 0; i < teacher_count; i++)
			delete[]teacher_arr[i];
		delete[]teacher_arr;
		teacher_arr = NULL;
	}
	private: System::Void AddTeacherBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		panel5->Visible = true;
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		teacher_count = 0;
		comboBox4->Items->Clear();
		string data;
		ifstream in("Teachers.txt");
		while (getline(in, data))
			teacher_count++;
		in.close();
		teacher_arr = new string *[teacher_count];
		for (int i = 0; i < teacher_count; i++)
			teacher_arr[i] = new string[12];
		in.open("Teachers.txt");
		int j = 0, k = 0;
		while (j < teacher_count)
		{
			if (k == 11)
			{
				getline(in, data);
				teacher_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, ' ');
				teacher_arr[j][k] = data;
				k++;
			}
		}
		in.close();
		for (int i = 0; i < teacher_count; i++)
		{
			data = teacher_arr[i][1] + "." + teacher_arr[i][0];
			comboBox4->Items->Add(gcnew String(data.c_str()));
		}
		panel2->Visible = false;
		panel4->Visible = true;
	}
	private: System::Void ViewStudMarksbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label32_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ViewFee_back_Click(System::Object^  sender, System::EventArgs^  e) {
		ViewFeeStatus_panel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void ViewFeeStatusbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		ViewFeeStatus_panel->Visible = true;
		FeeStatusGrid->Rows->Clear();
		int count = 0;
		string data;
		ifstream indata("Fees.txt");
		while (getline(indata, data))
			count++;
		indata.close();
		string **fees = new string*[count];
		for (int i = 0; i < count; i++)
			fees[i] = new string[8];
		indata.open("Fees.txt");
		int j = 0, k = 0;
		while (j < count)
		{
			if (k == 7)
			{
				getline(indata, data);
				fees[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(indata, data, '<');
				fees[j][k] = data;
				k++;
			}
		}
		indata.close();
		for (int i = 0; i < count; i++)
		{
			String ^rollno = gcnew String(fees[i][0].c_str());
			String ^month = gcnew String(fees[i][1].c_str());
			String ^status = gcnew String(fees[i][7].c_str());
			FeeStatusGrid->Rows->Add(rollno, month, "A", status);
		}
		for (int i = 0; i < count; i++)
			delete[]fees[i];
		delete[]fees;
		fees = NULL;
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ok_editstudentbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		error_editstudent->Visible = false;
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		ViewTeacherGrid->Rows->Clear();
		panel2->Visible = false;
		ViewTeacherspanel->Visible = true;
		string data;
		int count = 0;
		ifstream in("Teachers.txt");
		while (getline(in, data))
			count++;
		in.close();
		string **t_arr = new string *[count];
		for (int i = 0; i < count; i++)
			t_arr[i] = new string[12];
		in.open("Teachers.txt");
		int j = 0, k = 0;
		while (j < count)
		{
			if (k == 11)
			{
				getline(in, data);
				t_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, ' ');
				t_arr[j][k] = data;
				k++;
			}
		}
		in.close();
		for (int i = 0; i < count; i++)
		{
			data = t_arr[i][1] + "." + t_arr[i][0];
			String ^name = gcnew String(data.c_str());
			String ^gender = gcnew String(t_arr[i][6].c_str());
			String ^degree = gcnew String(t_arr[i][7].c_str());
			String ^mobile = gcnew String(t_arr[i][8].c_str());
			String ^email = gcnew String(t_arr[i][2].c_str());
			ViewTeacherGrid->Rows->Add(name, gender, degree, mobile, email);
		}
		for (int i = 0; i < count; i++)
			delete[]t_arr[i];
		delete[]t_arr;
		t_arr = NULL;
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		ViewTeacherspanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		AssignCoursepanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		int count = 0;
		msclr::interop::marshal_context context;
		string t = context.marshal_as <string>(TeachercomboBox->Text);
		string c = context.marshal_as <string>(CoursecomboBox->Text);
		string s = context.marshal_as <string>(SectioncomboBox->Text);
		for (int i = 0; c[i] != ','; i++)
			count++;
		string course = c.substr(0, count);
		string C = c.substr(count + 1, c.length());
		admin.AssignCourse(course_obj, t, course, C, s);
	}
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void AssignCoursebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		AssignCoursepanel->Visible = true;
		TeachercomboBox->Items->Clear();
		CoursecomboBox->Items->Clear();
		string data;
		int count = 0;
		ifstream in("Teachers.txt");
		while (getline(in, data))
			count++;
		in.close();
		string **t_arr = new string *[count];
		for (int i = 0; i < count; i++)
			t_arr[i] = new string[12];
		in.open("Teachers.txt");
		int j = 0, k = 0;
		while (j < count)
		{
			if (k == 11)
			{
				getline(in, data);
				t_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, ' ');
				t_arr[j][k] = data;
				k++;
			}
		}
		in.close();
		for (int i = 0; i < count; i++)
		{
			data = t_arr[i][1] + "." + t_arr[i][0];
			TeachercomboBox->Items->Add(gcnew String(data.c_str()));
		}
		count = 0;
		ifstream indata("Courses.txt");
		while (getline(indata, data))
			count++;
		indata.close();
		string **courses_arr = new string*[count];
		for (int i = 0; i < count; i++)
			courses_arr[i] = new string[4];
		indata.open("Courses.txt");
		j = 0, k = 0;
		while (j < count)
		{
			if (k == 3)
			{
				getline(indata, data);
				courses_arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(indata, data, '<');
				courses_arr[j][k] = data;
				k++;
			}
		}
		indata.close();
		for (int i = 0; i < count; i++)
		{
			data = courses_arr[i][1] + "," + courses_arr[i][3];
			CoursecomboBox->Items->Add(gcnew String(data.c_str()));
		}
	}
	private: System::Void label38_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Feedback_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		mainpanel->Visible = false;
		StudentPanel->Visible = true;
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		StudentPanel->Visible = false;
		mainpanel->Visible = true;
	}
	private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		mail = context.marshal_as<string>(textBox17->Text);
		string password = context.marshal_as<string>(textBox18->Text);
		if (p.validatelogin(arr, student_index, mail, password))
		{
			StudentPanel->Visible = false;
			parent_optpanel->Visible = true;
			RollNoCB->Items->Clear();
			selectstudentcombo->Items->Clear();
			for (int i = 0; i < student_index; i++){
				if (arr[i][18] == mail)
				{
					RollNoCB->Items->Add(gcnew String(arr[i][0].c_str()));
					string name = arr[i][1] + " " + arr[i][2];
					studentnamecombo->Items->Add(gcnew String(name.c_str()));
				}
			}
			for (int i = 0; i < student_index; i++)
				delete[]arr[i];
			delete[]arr;
			arr = NULL;
			ifstream indata("Marks.txt");
			marks_count = 0;
			string data;
			while (getline(indata, data))
				marks_count++;
			marks_arr = new string*[marks_count];
			for (int i = 0; i < marks_count; i++)
				marks_arr[i] = new string[9];
			indata.close();
			indata.open("Marks.txt");
			int i = 0, j = 0;
			while (i < marks_count)
			{
				if (j == 8)
				{
					getline(indata, data);
					marks_arr[i][j] = data;
					i++;
					j = 0;
				}
				else
				{
					getline(indata, data, '<');
					marks_arr[i][j] = data;
					j++;
				}
			}
		}
	}
	private: System::Void FeedBack_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		textBox19->Text = gcnew String(mail.c_str());
	}
	private: System::Void label42_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		FeedBack->Visible = false;
		StudentPanel->Visible = true;
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e)
	{
		msclr::interop::marshal_context context;
		string email = context.marshal_as<string>(textBox19->Text);
		string subject = context.marshal_as<string>(textBox21->Text);
		string f_back = context.marshal_as<string>(richTextBox1->Text);
		p.addfeedback(email, subject, f_back);
		FeedBack->Visible = false;
		parent_optpanel->Visible = true;
	}
	private: System::Void StudentPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		string data;
		student_index = 0;
		ifstream indata("Students.txt");
		while (getline(indata, data))
			student_index++;
		indata.close();
		arr = new string *[student_index];
		for (int i = 0; i < student_index; i++)
			arr[i] = new string[19];
		indata.open("Students.txt");
		int j = 0, k = 0;
		while (j < student_index)
		{
			if (k == 18)
			{
				getline(indata, data);
				arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(indata, data, '<');
				arr[j][k] = data;
				k++;
			}
		}
		indata.close();
	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		parent_optpanel->Visible = false;
		FeedBack->Visible = true;
	}
	private: System::Void button21_Click_1(System::Object^  sender, System::EventArgs^  e) {
		FeedBack->Visible = false;
		parent_optpanel->Visible = true;
	}
	private: System::Void label45_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void edit_number_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void AssignCoursepanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		panel4->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		AddFeePanel->Visible = true;
		StudentAddFeeCB->Items->Clear();

		string **arr, data;
		int count = 0;
		ifstream in("Students.txt");

		while (getline(in, data))
			count++;

		in.close();

		arr = new string*[count];

		for (int i = 0; i < count; i++)
			arr[i] = new string[19];

		in.open("Students.txt");
		int j = 0, k = 0;
		while (j < count)
		{
			if (k == 18)
			{
				getline(in, data);
				arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, '<');
				arr[j][k] = data;
				k++;
			}
		}
		in.close();
		for (int i = 0; i < count; i++)
		{
			string s = arr[i][1] + " " + arr[i][2];
			StudentAddFeeCB->Items->Add(gcnew String(s.c_str()));
		}
	}
	private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		mail = context.marshal_as<string>(emailfeedbackcombo->Text);
		int i = 0, j;
		bool found = false;
		while (i < student_index&&found == false)
		{
			if (arr[i][0] == mail)
			{
				j = i;
				found = true;
			}
			i++;
		}
		if (found == true)
		{
			subject_login->Text = gcnew String(arr[j][1].c_str());
			feedback_login->Text = gcnew String(arr[j][2].c_str());
		}
	}
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
		LoginFeedback->Visible = false;
		panel2->Visible = true;
		for (int i = 0; i < student_index; i++)
			delete[]arr[i];
		delete[]arr;
		arr = NULL;
	}
	private: System::Void ViewFeedbackbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		emailfeedbackcombo->Items->Clear();
		panel2->Visible = false;
		LoginFeedback->Visible = true;
		emailfeedbackcombo->Text = "";
		subject_login->Text = "";
		feedback_login->Text = "";
		student_index = 0;
		ifstream indata("Feedback.txt");
		string data;
		while (getline(indata, data))
			student_index++;
		arr = new string *[student_index];
		for (int i = 0; i < student_index; i++)
			arr[i] = new string[3];
		indata.close();
		indata.open("Feedback.txt");
		int i = 0, j = 0;
		while (i < student_index)
		{
			if (j == 2)
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
		indata.close();
		for (int i = 0; i < student_index; i++)
			emailfeedbackcombo->Items->Add(gcnew String(arr[i][0].c_str()));
	}
	private: System::Void teachercoursesgrid_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void backteachercourse_Click(System::Object^  sender, System::EventArgs^  e) {
		teachercoursepanel->Visible = false;
		TeacherPanel->Visible = true;
	}
	private: System::Void teachercourses_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 TeacherPanel->Visible = false;
				 teachercoursepanel->Visible = true;
				 teachercoursesgrid->Rows->Clear();

				 string **teacher, **teacher_courses, teacherdata, teacherCoursesdata, username;
				 ifstream in_teacher("Teachers.txt"), in_teacherCourses("TeacherCourses.txt");
				 int i = 0, j = 0, count1 = 0, count2 = 0;

				 while (getline(in_teacher, teacherdata))
					 count1++;
				 in_teacher.close();

				 teacher = new string*[count1];

				 for (i = 0; i < count1; i++)
					 teacher[i] = new string[12];


				 while (getline(in_teacherCourses, teacherCoursesdata))
					 count2++;
				 in_teacherCourses.close();

				 teacher_courses = new string*[count2];

				 for (i = 0; i < count2; i++)
					 teacher_courses[i] = new string[4];

				 in_teacher.open("Teachers.txt");

				 for (i = 0; i < count1; i++)
				 for (j = 0; j < 12; j++){

					 if (j == 11)
						 getline(in_teacher, teacherdata);

					 else getline(in_teacher, teacherdata, ' ');

					 teacher[i][j] = teacherdata;

				 }
				 in_teacher.close();

				 in_teacherCourses.open("TeacherCourses.txt");

				 for (i = 0; i < count2; i++)
				 for (j = 0; j < 4; j++){

					 if (j == 3)
						 getline(in_teacherCourses, teacherCoursesdata);

					 else getline(in_teacherCourses, teacherCoursesdata, '<');

					 teacher_courses[i][j] = teacherCoursesdata;

				 }
				 in_teacherCourses.close();

				 for (i = 0; i < count1; i++)

				 if (teacher[i][2] == mail)
					 username = teacher[i][1] + "." + teacher[i][0];

				 for (i = 0; i < count2; i++)
				 if (teacher_courses[i][0] == username){

					 String^ coursename = gcnew String(teacher_courses[i][1].c_str());
					 String^ Class = gcnew String(teacher_courses[i][2].c_str());
					 String^ Section = gcnew String(teacher_courses[i][3].c_str());

					 teachercoursesgrid->Rows->Add(coursename, Class, Section);

				 }
	}
	private: System::Void teacherback_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		teacherloginpanel->Visible = false;
		mainpanel->Visible = true;
		for (int i = 0; i < teacher_count; i++)
			delete[] teacher_arr[i];
		delete[]teacher_arr;
		teacher_arr = NULL;
		for (int i = 0; i < student_index; i++)
			delete[] arr[i];
		delete[]arr;
		arr = NULL;
	}
	private: System::Void teacherloginbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		mail = context.marshal_as<string>(teacherusername_textbox->Text);
		string code = context.marshal_as<string>(teacherpassword_textbox->Text);
		int index = 0;
		if (teacher.TeacherLogin(teacher_arr, teacher_count, index, mail, code))
		{
			teacherloginpanel->Visible = false;
			TeacherPanel->Visible = true;
			int count = 0;
			ifstream indata("TeacherCourses.txt");
			string data, **course;
			while (getline(indata, data))
				count++;
			indata.close();
			course = new string*[count];
			for (int j = 0; j < count; j++)
				course[j] = new string[4];
			indata.open("TeacherCourses.txt");
			int i = 0, k = 0;
			while (i < count)
			{
				if (k == 3)
				{
					getline(indata, data);
					course[i][k] = data;
					i++;
					k = 0;
				}
				else
				{
					getline(indata, data, '<');
					course[i][k] = data;
					k++;
				}
			}
			indata.close();
			string c = teacher_arr[index][1] + '.' + teacher_arr[index][0];
			for (int j = 0; j < count; j++)
				if (course[j][0] == c)
					selectcoursecombo->Items->Add(gcnew String(course[j][1].c_str()));
			for (i = 0; i < count; i++)
				delete[]course[i];
			delete[]course;
			course = NULL;
			student_index = 0;
			indata.open("Students.txt");
			while (getline(indata, data))
				student_index++;
			indata.close();
			arr = new string *[student_index];
			for (int i = 0; i < student_index; i++)
				arr[i] = new string[19];
			indata.open("Students.txt");
			int j = 0;
			i = 0;
			while (i < student_index)
			{
				if (j == 18)
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
			indata.close();
		}
		else
			label81->Visible = true;
	}
	private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
		TeacherPanel->Visible = false;
		addmarkspanel->Visible = true;

	}
	private: System::Void addmarkspanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void backbtn_AddMaks_Click(System::Object^  sender, System::EventArgs^  e) {
		addmarkspanel->Visible = false;
		TeacherPanel->Visible = true;
	}
	private: System::Void selectnumbercombo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void selectnumbercombo_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		selectnumbercombo->Items->Clear();
		String^type = selecttypecombo->Text;
		string arr[5] = { "1", "2", "3", "4", "5" };
		if (type == "Assignment")
			for (int i = 0; i < 5; i++)
				selectnumbercombo->Items->Add(gcnew String(arr[i].c_str()));
		else if (type = "Sessional")
			for (int i = 0; i < 2; i++)
				selectnumbercombo->Items->Add(gcnew String(arr[i].c_str()));
		else if (type = "Final")
			selectnumbercombo->Items->Add("1");
	}
	private: System::Void showlistbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMarksGrid->Rows->Clear();
		AddMarksGrid->Visible = true;
		msclr::interop::marshal_context context;
		string Class = context.marshal_as<string>(selectclasscombo->Text);
		count = 0;
		for (int i = 0; i < student_index; i++)
			if (arr[i][9] == Class)
			{
			String ^rollNo = gcnew String(arr[i][0].c_str());
			string n = arr[i][1] + ' ' + arr[i][2];
			String ^name = gcnew String(n.c_str());
			AddMarksGrid->Rows->Add(rollNo, name);
			count++;
			}
	}
	private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		int marks = Convert::ToInt32(totalmarks->Text);
		bool found = false;
		for (int i = 0; i < count; i++)
		{
			string obtmarks = context.marshal_as<string>((System::String^)this->AddMarksGrid->Rows[i]->Cells[2]->Value);
			if (admin.checkdigit(obtmarks))
			{
				int obt = Convert::ToInt32((System::String^)this->AddMarksGrid->Rows[i]->Cells[2]->Value);
				if (obt > marks || obt < 0)
				{
					found = true;
					this->AddMarksGrid->Rows[i]->Cells[2]->Value = "";
				}
			}
			else
				this->AddMarksGrid->Rows[i]->Cells[2]->Value = "";
		}
		if (found == false)
		{
			ifstream indata("Marks.txt");
			marks_count = 0;
			string data;
			while (getline(indata, data))
				marks_count++;
			marks_arr = new string*[marks_count];
			for (int i = 0; i < marks_count; i++)
				marks_arr[i] = new string[9];
			indata.close();
			indata.open("Marks.txt");
			int i = 0, j = 0;
			while (i < marks_count)
			{
				if (j == 8)
				{
					getline(indata, data);
					marks_arr[i][j] = data;
					i++;
					j = 0;
				}
				else
				{
					getline(indata, data, '<');
					marks_arr[i][j] = data;
					j++;
				}
			}
			string Class = context.marshal_as<string>(selectclasscombo->Text);
			string c = context.marshal_as<string>(selectcoursecombo->Text);
			string type = context.marshal_as<string>(selecttypecombo->Text);
			string d = context.marshal_as<string>(date->Text);
			string number = context.marshal_as<string>(selectnumbercombo->Text);
			for (int i = 0; i < count; i++)
			{
				string rollNo = context.marshal_as<string>((System::String^)this->AddMarksGrid->Rows[i]->Cells[0]->Value);
				string name = context.marshal_as<string>((System::String^)this->AddMarksGrid->Rows[i]->Cells[1]->Value);
				string obtmarks = context.marshal_as<string>((System::String^)this->AddMarksGrid->Rows[i]->Cells[2]->Value);
				teacher.AddMarks(marks_arr, marks_count, rollNo, name, type, number, c, Class, d, obtmarks, marks);
			}
		}
		else
		{
		}
	}
	private: System::Void GiveFeedbackBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		parent_optpanel->Visible = false;
		FeedBack->Visible = true;
	}
	private: System::Void ViewFeeBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		parent_optpanel->Visible = false;
		WhichChildPanel->Visible = true;
	}
	private: System::Void SeeChildFeeStatusBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		FeeStatusGridForParents->Rows->Clear();
		FeeStatusGridForParents->Visible = true;
		string **arr, data, month, rollno;
		int count = 0;
		ifstream in("Fees.txt");
		msclr::interop::marshal_context context;

		month = context.marshal_as<string>(View_Fee_OfMonthCB->Text);
		rollno = context.marshal_as<string>(RollNoCB->Text);

		while (getline(in, data))
			count++;
		in.close();

		arr = new string*[count];

		for (int i = 0; i < count; i++)
			arr[i] = new string[8];

		in.open("Fees.txt");
		int j = 0, k = 0;
		while (j < count)
		{
			if (k == 7)
			{
				getline(in, data);
				arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, '<');
				arr[j][k] = data;
				k++;
			}
		}
		in.close();
		for (int i = 0; i < count; i++){

			if (arr[i][0] == rollno && arr[i][1] == month){

				String^ rollno = gcnew String(arr[i][0].c_str());
				String^ month = gcnew String(arr[i][1].c_str());
				String^ prev_due = gcnew String(arr[i][2].c_str());
				String^ fine = gcnew String(arr[i][3].c_str());
				String^ library_Chrg = gcnew String(arr[i][4].c_str());
				String^ fee = gcnew String(arr[i][5].c_str());
				String^ latefine = gcnew String(arr[i][6].c_str());
				String^ status = gcnew String(arr[i][7].c_str());

				FeeStatusGridForParents->Rows->Add(rollno, month, prev_due, fine, library_Chrg, fee, latefine, status);
			}
		}
	}
	private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
		WhichChildPanel->Visible = false;
		parent_optpanel->Visible = true;
	}
	private: System::Void WriteFeetoFileBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = true;
		AddFeePanel->Visible = false;
		StudentAddFeeCB->Items->Clear();

		string **arr, data, fee, name, month, prev_due, libraryfee, latefine, fine;
		int count = 0, index;
		bool found = false;
		ifstream in("Students.txt");
		msclr::interop::marshal_context context;

		fee = context.marshal_as<string>(FeeTB->Text);
		name = context.marshal_as<string>(StudentAddFeeCB->Text);
		month = context.marshal_as<string>(MonthFeeCB->Text);
		libraryfee = context.marshal_as<string>(LibraryFeeTB->Text);
		latefine = context.marshal_as<string>(LateFineTB->Text);
		fine = context.marshal_as<string>(FineTB->Text);
		prev_due = context.marshal_as<string>(Prev_Due_TB->Text);

		while (getline(in, data))
			count++;

		in.close();

		arr = new string*[count];

		for (int i = 0; i < count; i++)
			arr[i] = new string[19];

		in.open("Students.txt");
		int j = 0, k = 0;
		while (j < count)
		{
			if (k == 18)
			{
				getline(in, data);
				arr[j][k] = data;
				j++;
				k = 0;
			}
			else
			{
				getline(in, data, '<');
				arr[j][k] = data;
				k++;
			}
		}
		in.close();

		ofstream out("Fees.txt", ios::app);

		for (int i = 0; i < count; i++){
			for (int j = 0; j < 18; j++){
				if (arr[i][1] + " " + arr[i][2] == name){
					out << arr[i][0] << '<' << month << '<' << prev_due << '<' << fine << '<' << libraryfee << '<' << fee << '<' << latefine << "<Unpaid\n";
					found = true;
				}
				if (found)
					break;
			}
			if (found)
				break;
		}
		out.close();
	}
	private: System::Void button22_Click_1(System::Object^  sender, System::EventArgs^  e) {
		AddFeePanel->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void ViewMarksstudentpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void viewmarksbtn_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void submittranscriptbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		percentage->Visible = false;
		studentnamelabel->Visible = false;
		msclr::interop::marshal_context context;
		string name = context.marshal_as<string>(studentnamecombo->Text);
		string session = context.marshal_as<string>(selectsessioncombo->Text);
		string subjects[10];
		ViewTranscriptGrid->Rows->Clear();
		ViewTranscriptGrid->Visible = true;
		studentnamelabel->Text = studentnamecombo->Text;
		studentnamelabel->Visible = true;
		int obtainedmarks[10], totalmarks[10], size = 0;
		for (int i = 0; i < 10; i++)
		{
			obtainedmarks[i] = 0;
			totalmarks[i] = 0;
		}
		for (int i = 0; i < marks_count; i++)
		{
			if (marks_arr[i][1] == name&&marks_arr[i][2] == session)
			{
				int j = 0, pos = 0;
				bool found = false;
				while (j < size&&found == false)
				{
					if (subjects[j] == marks_arr[i][4])
					{
						found = true;
						obtainedmarks[j] = obtainedmarks[j] + student.StringtoInt(marks_arr[i][7]);
						totalmarks[j] = totalmarks[j] + student.StringtoInt(marks_arr[i][8]);
					}
					j++;
				}
				if (found == false)
				{
					subjects[size] = marks_arr[i][4];
					obtainedmarks[size] = obtainedmarks[j] + student.StringtoInt(marks_arr[i][7]);
					totalmarks[size++] = totalmarks[j] + student.StringtoInt(marks_arr[i][8]);
				}
			}
		}
		int obt = 0, total = 0;
		for (int i = 0; i < size; i++)
		{
			String ^g = gcnew String(student.calculateGrade(obtainedmarks[i], totalmarks[i]).c_str());
			String ^s = gcnew String(subjects[i].c_str());
			ViewTranscriptGrid->Rows->Add(s, obtainedmarks[i], totalmarks[i], g);
			obt = obt + obtainedmarks[i];
			total = total + totalmarks[i];
		}
		int p;
		if (total != 0)
			p = (obt * 100) / total;
		else
			p = 0;
		percentage->Text = Convert::ToString(p);
		percentage->Visible = true;
	}
	private: System::Void viewTranscriptbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		parent_optpanel->Visible = false;
		viewtranscriptpanel->Visible = true;
		ViewTranscriptGrid->Visible = false;
		studentnamelabel->Visible = false;
		percentage->Visible = false;
		studentnamelabel->Text = "";
		percentage->Text = "";
		studentnamecombo->Text = "";
		selectsessioncombo->Text = "";
	}
	private: System::Void viewtranscript_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		viewtranscriptpanel->Visible = false;
		parent_optpanel->Visible = true;
	}
	private: System::Void error_teacherOK_Click(System::Object^  sender, System::EventArgs^  e) {
		error_teacher->Visible = false;
	}
	};
}