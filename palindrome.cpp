#include<iostream>
using namespace std;

 
int main () 
{
  
 
int num, reverse = 0, org, dig;
  
 
cout << "Program to check palindrome no:\n\nEnter the number:";
  
 
cin >> num;
  
 
org = num;
  
 
  do
    
 
    {
      
 
dig = num % 10;
      
 
reverse = (reverse * 10) + dig;
      
 
num = num / 10;
    
 
}
  
while (num != 0);
  
 
if (org == reverse)
    
 
cout << "The integer is a palindrome";
  
 
  else
    
 
cout << "The integer is not a palindrome";
  
 
 
return 0;

 
}


