//============================================================================
// Name        : function_template_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

template <class P>
void get(P arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}

template <class T>
void swap(T *a, T *b)
{
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

template <class T>
void selectionSort(T A[],int n){
    int i,j;
    for ( i = 0; i < n; i++)
    {
    	int min=i;

		for ( j=i+1; j < n; j++)
        {
            if(A[j]<A[min])
                min = j;


        }
        swap(&A[i],&A[min]);
    }

}

template <class S>
void display(S arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

int main()
{
	int *arri;
	float *arrf;
	int ni,nf,ch;
	while(1)
	{
		cout<<"1. to sort int array\n";
		cout<<"2. to sort float array\n";
		cout<<"3. to exit\n";
		cout<<"\nEnter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter number of elements\n";
					cin>>ni;
					arri = new int[ni];
					cout<<"\nEnter array of "<<ni<<" integers\n";
					get(arri,ni);
					cout<<"\narray of integers\n";
					display(arri,ni);
					cout<<"\ninteger array after sorting\n";
					selectionSort(arri,ni);
					display(arri,ni);
					cout<<endl;
					break;
			case 2: cout<<"\nEnter number of elements\n";
					cin>>nf;
					arrf = new float[nf];
					cout<<"\nEnter array of "<<nf<<" float values\n";
					get(arrf,nf);
					cout<<"\narray of float values\n";
					display(arrf,nf);
					cout<<"\nfloat array after sorting\n";
					selectionSort(arrf,nf);
					display(arrf,nf);
					cout<<endl;
					break;
			case 3: exit(0);
			default: cout<<"Enter a valid choice\n\n";
					 break;
		}
	}
	return 0;
}
