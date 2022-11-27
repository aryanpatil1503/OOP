//============================================================================
// Name        : STL_map_assignment7_SEM3_OOP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
#include <iterator>
#include<string>
#include <iomanip>
using namespace std;

int main() {
	map<string,long>states;
	map<string,long>::iterator itr;
	int ch;
	do{
		cout<<"\n1.Entry of states.";
		cout<<"\n2.Population of particular state.";
		cout<<"\n3.All sates populations.";
		cout<<"\nEnter choice : ";
		cin>>ch;
		switch(ch){
		case 1:{
			int n; long P;
			string S;
			cout<<"\n*****\n";
			cout<<"\nEnter no. of states to be added : ";
			cin>>n;
			for(int i=0; i<n; i++)
			{
				cout<<"\nEnter state : ";
				cin>>S;
				cout<<"Enter population : ";
				cin>>P;
				states.insert(pair<string,long>(S,P));
			}
			cout<<"\n*****\n";
			break;
		}
		case 2:{
			string S;
			cout<<"\n*****\n";
			cout<<"\nEnter name of state : ";
			cin>>S;

            for( itr=states.begin(); itr!=states.end(); itr++)
            {
            	if(states.find(S)!=states.end())
            	{
            	if(itr->first==S){
            		cout<<"\nPopulation : ";
            		cout<<itr->second;
            		break;
            	}
            	}
            	else{
            		cout<<"\nNO";
            		break;
            	}
            }
            cout<<"\n*****\n";
			break;
		}
		case 3:{
			cout<<"\n*****\n";
			for( itr=states.begin(); itr!=states.end(); itr++)
			{
				cout<<setw(20)<<itr->first<<setw(20)<<itr->second<<endl;
			}
			cout<<"\n*****\n";
		}
		}
	}while(ch!=0);
}
