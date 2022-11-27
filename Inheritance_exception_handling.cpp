//============================================================================
// Name        : Inheritance_exception_handling_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

class publish
{
protected:
	string title;
	int price;
public:
	publish(){
		title="XYZ";
		price=0;
		cout<<"in base class :publish"<<endl;
	}
	void getinput()
	{
		cout<<"\nTitle is :";
		cin>>title;
		cout<<"Price is between 30 to 800 :";
		cin>>price;
	}

	~publish(){
		cout<<"\n base class is destroyed";
	}
};

class book:public publish
{
	int pages;
public:
	book(){
		pages=0;
		cout<<"In child class book"<<endl;
	}
	void getinput()
	{
		cout<<"No. of pages betn 50 to 1000: ";
		cin>>pages;
		try
			{
				if(pages > 50 )
				{
					if(price >30 )
										{
											displayb();
										}
					else throw (price);
				}
				else throw(pages);
			}
			catch(int i){

				cout<<"You entered an invalid data "<<endl;

			}

	}
	void displayb()
	{
		cout<<"\n***\n\nThe book you entered is :"<<endl<<endl;
		cout<<"The entered title is :"<<title<<endl;
		cout<<"The entered price is :"<<price<<endl;
		cout<<"The entered pages are :"<<pages<<endl;
		cout<<"\n***\n"<<endl;
	}

	~book(){
		cout<<"\n book destroyed";
	}
};

class tape:public publish
{
	float time;
public:
	tape(){
		time=0.0;
		cout<<"time"<<endl;
	}
	void getinput()
		{
			cout<<"time of playing (min 30 minutes): ";
			cin>>time;
			try
				{
				if(price >30){
					if(time > 30.00 )
					{
							displayt();
							cout<<"The entered play time is :"<<time<<" minutes"<<endl;
							cout<<"\n***\n"<<endl;
					}

					else throw(time);
				}
				else throw(price);
				}
				catch(float f)
				{

					cout<<"\n you have entered an invalid data - TIME"<<endl;
				}
				catch(int z){
									cout<<"\n you have entered an invalid data - PRICE"<<endl;
								}
		}
	void displayt()
	{
		cout<<"\n***\n\n The details of tape you entered is :"<<endl<<endl;
		cout<<"The entered title is :"<<title<<endl;
		cout<<"The entered price is :"<<price<<endl;

	}

	~tape(){
		cout<<"\n tape destroyed "<<endl;
	}

};
int main() {
	int n1;
	cout<<"Enter number of objects" <<endl;
	cin>>n1;
	book *obj1=new book[n1];
	tape *obj2= new tape[n1];
	for(int i=0;i<n1;i++)
	{
	cout<<"\nabout book :"<<endl;

		                obj1[i].publish::getinput();
						obj1[i].getinput();


	cout<<"\n\nabout tape : "<<endl;

	                        obj2[i].publish::getinput();
	   						obj2[i].getinput();
	}

	delete obj1;
	delete obj2;
	return 0;
}
