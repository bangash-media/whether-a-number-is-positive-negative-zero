#include <iostream>

using namespace std;

int main() 
{
	double num1;
	cout<<"\n\n\t\tPlease enter a number: "; cin>>num1;
	cout<<endl<<endl;
	cout<<"********************************************************\n\n";
	if (num1>0)
	{
		cout<<"\t\tThe Entered number is positive\n";
	}
	if (num1<0)
	{
		cout<<"\t\tThe Entered number is negative\n";
	}
	if (num1==0)
	{
		cout<<"\t\tThe number entered is zero\n";
	}
	return 0;
}
