//============================================================================
// Name        : STL_assignment6_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Person
{
private:
    string name;
    string DOB;
    long long phone;

public:
    Person()
    {
        name = " ";
        phone = 0;
        DOB = " ";
    }
    bool operator<(const Person &p)
    {
        if (name < p.name)
            return true;
        return false;
    }
    bool operator==(const Person &p)
    {
        if (name == p.name)
            return true;
     //   if (DOB !=p.DOB)
      //      return false;
      //  if (phone != p.phone)
       //     return false;
        return false;
    }
    static void display(Person &p){
    	cout<<"\n Person name: "<<p.name;
    	cout<<"\n Person DOB: "<<p.DOB;
    	cout<<"\n Person phone number: "<<p.phone;
    }
    void print();
    void getdata();
    void search();
    friend bool compare(const Person &,const Person &);



};
vector <Person> v;
bool compare(const Person &p,const Person &p1){
	return p.name <p1.name;
}
void Person::getdata(){
	Person p;
	cout<<"\n enter name of person: ";
	cin>>p.name;
	cout<<"\n enter DOB of person: ";
	cin>>p.DOB;
	cout<<"\n enter phone of person: ";
	cin>>p.phone;
	v.push_back(p);

}
void Person::print(){
	for_each(v.begin(),v.end(),display);
}
void Person::search(){
	vector<Person>::iterator i;
	Person p;
	cout<<"\n Enter name to be searched: ";
	cin>>p.name;
	i=find(v.begin(),v.end(),p);
	if(i==v.end())
	{
		cout<<"\n Item not found. ";
	}
	else
		{cout<<"Person found:";
				cout<<"\n Person name:"<<i->name;
				cout<<"\n Person DOB:"<<i->DOB;
				cout<<"\n Person phone:"<<i->phone;}



}
int main() {
	Person i;


int ch;
  do
{
 cout<<"\n------- Menu ------- ";
 cout<<"\n1.Insert";
 cout<<"\n2.Display";
 cout<<"\n3.Search";
 cout<<"\n4.Sort";
 cout<<"\n5.Exit";
 cout<<"\nEnter your choice:";
 cin>>ch;
  switch(ch)
{
    case 1:  i.getdata();
          break;
    case 2:  i.print();
          break;
    case 3:  i.search();
          break;
    case 4:sort(v.begin(),v.end(),compare);
          cout<<"\n Sorted according to name\n";
          i.print();
    	   break;
    case 5:  exit(0);
}

}while(ch!=5);


	return 0;
}
