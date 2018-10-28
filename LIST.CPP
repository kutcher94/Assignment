#include<iostream.h>
int main()
{
	int num, dig, reverse=0,n;
	cout<<"Program to split a number";
	cout<<"\n Enter number";
	cin>>num;
	do
	{
		dig=num%10;
		reverse = (reverse*10) + dig;
		num = num/10;
	}while(num!=0);

	do
	{
		n = num%10;
		cout<<n<<",";
		num=num/10;
	}while(num!=0);
	return 0;
}