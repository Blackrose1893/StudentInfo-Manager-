#include <iostream>
#include <string.h>
using namespace std;
class University{
	public:
		University(){
			cout<<"\t\t\t<---University of Layyah--->"<<endl;
		}
	};
class Campus{
	int n;
	public:
		Campus(){
			cout<<"\t\t 1. Main Campus \n \t\t 2. City Campus " << endl;
			cout<<"Select Your Campus! : ";
			cin>>n;

			switch(n){
				case 1:
					cout<< "\t\tMain Campus" << endl;
					break;
				case 2: 
					cout<< "\t\tCity Campus" << endl;
				    break;
				default:
					cout<<" Invalid Choice, Enter correct choice to procceed! "<<endl;
				}
		}
	};
class Programs{
	char p;
	public:
		Programs(){
		cout<<"Available BS Programs: "<<endl;
		cout<<"\t\t1. CS \n\t\t2. DS \n\t\t3. IT \n\t\t4. AI \n\t\t5. ENG \n\t\t6. URDU \n\t\t7. MATHS \n\t\t8. FOOD SCIENCE \n\t\t9. BOTONAY \n\t\t10. ZOLOGY \n\t\t11. Isl \n\t\t12. PHY"<<endl;
	    cout<<"Enter your Program :";
		cin>>p;
	}
	};
class Level{
	public:
	Level(){
		cout<< "  Let us know! \n \t Teacher or Student? "<<endl;
	    }
  	class Student{
  		int roll, age, marks;
		string qualification, name;
	    public:
	    Student(){
			cout<< "Enter your name : " ;
			cin.ignore();
			getline(cin,name);
			cout<< "Enter Your Roll number : ";
			cin>>roll;
			cout<< "Enter your age : " ;
			cin>>age;
			cout << "Enter your Qualification! 1. Inter 2. graduated 3. Masters" <<endl;
			cin.ignore();
			getline(cin,qualification);	
			cout<<"Enter your Marks : ";
			cin>>marks;	
		}
	};
	class Teacher{
		int id;
		string name, qualification;
		public:
			Teacher(){
				cout<<" Enter your Name: ";
				cin.ignore();
                getline(cin,name);	
                cout<<" Enter your id: ";
                cin>>id;
                cout<<"Enter your Qualification! 1. Graduated 2. Masters 3. Ph.D"<<endl;
                cin.ignore();
                getline(cin,qualification);
			}
	};
};
int main() 
{
	int s;
	University U1;
	Campus C1;
	Programs P1;
	Level l1;
	cout<<"If you're student than Type ""1"" if teacher Type ""2"" "<<endl;
	cin.ignore();
	cin>>s;
	if(s==1)
	{
	Level::Student S1;
	}
	else if(s==2)
	{
	Level::Teacher T1;
	}
	else
	{
	cout<<"Invalid! "<<endl;
	}
	cout<<" Thanks! Your data has been Recorded, You'll inform soon about the updates!"<<endl;
	return 0;
}
