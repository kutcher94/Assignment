#include<iostream.h>
int main()
{
	int num, reverse = 0, org, dig;
	cout<<"Program to check palindrome no:";
	cin>>num;
	org = num;
	do
	{
		dig = num%10;
		reverse = (reverse*10) + dig;
		num = num/10;
	}while(num!=0);
	if(org==reverse)
		cout<<"The integer is a palindomre";
	else
		cout<<"The integer is not a palindrome";

	return 0;
}