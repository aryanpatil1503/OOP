//============================================================================
// Name        : StudentDB_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>

using namespace std;
class Student
{
	int rollno;
	string name,Class,div,DOB,BG,phone,contact_address,liscence;
	static int count;
public:
	friend class personal;


	Student()
{
		name="abcd";
		rollno=50;
		Class="13";
		div="B";
		DOB="10/10/10";
		BG="B+";
		phone="9920360735";
		contact_address="zxcvb";
		liscence="ghjkl";
		count++;
}
	Student(int rollno,string name,string Class,string div,string DOB,string BG,string phone,string contact_address,string liscence)
	{
		this->name=name;
		this->rollno=rollno;
		this->Class=Class;
		this->div=div;
		this->DOB=DOB;
		this->BG=BG;
		this->phone=phone;
		this->contact_address=contact_address;
		this->liscence=liscence;
		count++;
	}
	Student(const Student& obj1)
	{
		name=obj1.name;
		rollno=obj1.rollno;
		Class=obj1.Class;
		div=obj1.div;
		DOB=obj1.DOB;
		BG=obj1.BG;
		phone=obj1.phone;
		contact_address=obj1.contact_address;
		liscence=obj1.liscence;
		count++;
	}
	inline void getdata()
	{
		cout<<"\n\n Enter:Name,Roll number,Class,Division,Date of birth,Blood group,phone number,contact address,liscence number \n\n";
		cin>>name>>rollno>>Class>>div>>DOB>>BG>>phone>>contact_address>>liscence;
	}
	static void show_count()
	{
		cout<<"\n total number of instance is :"<<count<<endl;
	};
	~Student()
	{
		cout<<"object destroyed"<<endl;
		count--;
	};







};
class personal
{
public:
	void display(Student &s)
	{
		cout<<"Name: "<<s.name<<endl;
		cout<<"Roll number: "<<s.rollno<<endl;
		cout<<"Class: "<<s.Class<<endl;
		cout<<"Division: "<<s.div<<endl;
		cout<<"Date of Birth: "<<s.DOB<<endl;
		cout<<"Phone number: "<<s.phone<<endl;
		cout<<"Contact address: "<<s.contact_address<<endl;
		cout<<"License number: "<<s.liscence<<endl;

	}
};
int Student::count=0;
int main() {
	Student s1,s2,*object[5];
	personal a;
	a.display(s1);
	s2.getdata();
	Student s3(s2);
	cout<<"\n for copy constructor"<<endl;
	a.display(s3);
	int n;
	cout<<"\n Enter number of students whose data is to be filled: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		object[i]= new Student();
		object[i]->getdata();
	}
	for(int i=0;i<n;i++)
	{
		a.display(*object[i]);

	};
	Student::show_count();
	delete[] object;



	return 0;
}
