//============================================================================
// Name        : file_handling_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<fstream>   // for file I/O
#include <iostream>
#include<string>
using namespace std;

int main() {
	char c='x';
	int j=77;
	double d=6.02;
	string str1= "PICT";
	string str2="College";
	ofstream out("fdata.txt");
	out<<c<<" "<<j<<" "<<d<<" "<<str1<<" "<<str2<<" ";

	cout<<"file written";
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	string str;
	cout<<"\n enter string: "<<endl;
	cin>>str;
	out<<str;
	out<<"\n Hello everyone";
	out<<"\n i am in SY";
	out<<"\n thank you";
	cout<<"\n file written"<<endl;
	out.close();
	char x[100];
	ifstream in("fdata.txt");
	while(!in.eof())
	{
		in.getline(x,100);
		cout<<"\n"<<" "<<x<<endl;

	}
	cout<<"file read";
	out.close();
	return 0;
}
