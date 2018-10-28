#include<iostream>
using namespace std;

int
main () 
{
  
int num, dig, reverse = 0, n;
  
cout << "Program to split a number";
  
cout << "\n Enter number: ";
  
cin >> num;
  
  do
    
    {
      
dig = num % 10;
      
reverse = (reverse * 10) + dig;
      
num = num / 10;
    
}
  while (num != 0);
  
cout << "\n[";
  
  do
    
    {
      
n = reverse % 10;
      
cout << n << ",";
      
reverse = reverse / 10;
    
}
  while (reverse != 0);
  
 
cout << "]";
  
return 0;

}
