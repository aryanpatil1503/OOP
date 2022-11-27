//============================================================================
// Name        : Complex_Numbers_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<string>
using namespace std;
class complex
{
float real,img;
public:
complex()
{
	real=0.0;
	img=0.0;
}
friend istream& operator >>(istream &ob, complex &ob1)
	{
		cout<<"\nEnter real no.";
		ob>>ob1.real;
		cout<<"\nEnter imaginary no. ";
		ob>>ob1.img;
		return ob;
	}
complex operator + (complex  obj ){
	complex res;
	res.real=real+obj.real;
	res.img=img+obj.img;
    return(res);
}
complex operator * (complex obj1){
	complex res;
	res.real=(real*obj1.real)- (img*obj1.img);
	res.img=(real*obj1.img) + (obj1.real*obj1.img);
    return(res);

}
complex operator - (complex obj2){
	complex res;
	res.real=real-obj2.real;
	res.img=img-obj2.img;
    return(res);
}
complex operator / (complex obj3){
	complex res;
	float a,b,c;
	a=(real*obj3.real)- (img*obj3.img);
	b=(real*obj3.img) + (obj3.real*obj3.img);
	c=(obj3.real*obj3.real)- (obj3.img*obj3.img);
	res.real=a/c;
	res.img=b/c;
	return(res);
}


//void print(){
//	cout<<real<<" +i"<<img<<endl;
//}
friend ostream& operator <<(ostream &ob2, complex &ob3)
{
	ob2<<ob3.real;
	cout<<" +i";
	ob2<<ob3.img;
	return ob2;
}
};
int main()
{
	complex c1, c2;
	cin>>c1;
	cin>>c2;
	int ch;
	do{
		cout<<"\n \t\tMENU\n1. Addition\n2. Multiplication \n3. Subtraction \n4. Division \n5. exit"<<endl;
		cin>>ch;
		switch(ch){
		case 1:{
			complex c3=c1+c2;
			cout<<"addition is= ";
			//c3.print();
			cout<<c3<<endl;
			break;
		}
		case 2:{
			complex c4=c1*c2;
			cout<<"multiplication is= ";
			//c4.print();
			cout<<c4<<endl;
			break;
		}
		case 3:{
			complex c5=c1-c2;
			cout<<"subtraction is= ";
			//c5.print();
			cout<<c5<<endl;
			break;
		}
		case 4:{
			complex c6=c1/c2;
			cout<<"Division is=";
			//c6.print();
			cout<<c6<<endl;
			break;
		}
		case 5:{
			exit(0);
			break;

		};
	};
	}while(ch!=5);
	return 0;
}





