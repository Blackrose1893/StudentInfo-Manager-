#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

//Classes
//class 01 data of department
class Department{
	public:
		string deptName;
		int branchesInDept;
		string branch1 = "CS, ";
		string branch2 = "IT, ";
		string branch3 = "DS, ";
		string branch4 = "AI ";
		string HeadName;
		//member functions
		void input(){
			cout<<"Name of Department = ";
			getline(cin,deptName);
			cout<<"Department head name = ";
			getline(cin,HeadName);
			cout<<"Total brances in dept = ";
			cin>>branchesInDept;
			cout<<"Name of branches = "<<branch1+ branch2 + branch3 + branch4<<endl;
		}
};
//Class 02 stores data of teachers
class HOD{
	private:
	int techrID=4567; 
	string HODname;
	string Credentials;
	int phoneNo;
	public:
	void input(){
		{
		cout<<"Head of CS branch = ";
		cin.ignore();
		getline(cin,HODname); 
	}
		cout<<"Qualification = ";
		cin>>Credentials;
		cout<<"contact number, Head of branch = ";
		cin>>phoneNo;
	}
};

//Class 03 stores data of students
class CSsectionB{
	private:
	string name;
	int rollNo;
	int phoneNo;
	int age;
	string degree;
	char section;
	//Member functions
	public:
	void input(){
		
		cout<<"Name of student = ";
		cin.ignore();
		getline(cin,name);
		cout<<"Roll Number = ";
		cin>>rollNo;
		cout<<"Phone number = ";
		cin>>phoneNo;
		cout<<"Age = ";
		cin>>age;
		cout<<"\n"<<endl;
	}
};
//Main function started
int main() {
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole,10);
	string Name= "University of Layyah";
	string Address= "HafzaBad,Layyah road Karor,Layyah!";
	cout<<"\t\t\tNAME OF UNIVERSITY = "<<Name<<endl;
	cout<<"\t\t\tAddress of university = "<<Address<<endl;
	SetConsoleTextAttribute(hconsole,9);
	Department CSdept;
	CSdept.input();
	SetConsoleTextAttribute(hconsole,13);
	cout<<"\t\t****CS Branch, Details!****"<<endl;
	HOD Headteacher;
	Headteacher.input();
	SetConsoleTextAttribute(hconsole,12);
	cout<<"\t\t**DATA of CS 1st semester Students!**"<<endl;
		cout<<"\t\t\t<--Section B-->"<<endl;
	SetConsoleTextAttribute(hconsole,14);
	CSsectionB stu1,stu2,stu3;
	stu1.input();
	stu2.input();
	stu3.input();
	
	return 0;
}
