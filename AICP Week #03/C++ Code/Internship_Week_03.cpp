#include<iostream>
using namespace std;

// Use two-dimensional Array to store source data
int matrix[3][3] = {	{55, 65, 75	},
						{120, 150, 170},
						{210, 230, 240}
					};

// Write User-Defined Functions
void costSlab1();
void costSlab2();
void costSlab3();

int main()
{
	string ID="XY12345678";
	/*
	cout<<"Enter you're Student ID:"<<endl;
	cin>>ID;
	*/
	cout<<"My Student ID is "<<ID<<endl;
	
	int i=1;
	while(i!=0)	// Create a Repeating Menu
	{
		char choice;
		cout<<"Enter your choice"<<endl;
		cout<<"Press 1 to display the bill of slab 1 and slab 2."<<endl;
		cout<<"Press 2 to display the bill of slab 3."<<endl;
		cout<<"Press any other key to exit."<<endl;
		cin>>choice;
		switch(choice)
		{
		case '1':
			costSlab1();
			costSlab2();
			break;
		case '2':
			costSlab3();
			break;
		default:
			i=0;
			break;
		}
		if(i==0)
			break;
	}
	return false;
}

void costSlab1()
{
	cout<<"Bill for Slab 1 is"<<endl;
	for(int i=0; i<3;i++)
	{
		cout<<*(*(matrix + 0) + i) * 10<<'\t';
	}
	cout<<endl;
}
void costSlab2()
{
	cout<<"Bill for Slab 2 is"<<endl;
	for(int i=0; i<3;i++)
	{
		cout<<*(*(matrix + 1) + i) * 15<<'\t';
	}
	cout<<endl;
}
void costSlab3()
{
	cout<<"Bill for Slab 3 is"<<endl;
	for(int i=0; i<3;i++)
	{
		cout<<*(*(matrix + 2) + i) * 20<<'\t';
	}
	cout<<endl;
}
