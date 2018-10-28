#include<iostream>
using namespace std;

int
main () 
{
  
int N, i, val = 1;
  
double sum = 0;
  
cout << "Program to find sum of series\n\n";
  
cout << "Enter value of N: ";
  
cin >> N;
  
if (N != 0)
    
    {
      
for (i = 0; i < N; i++)
	
	{
	  
sum += 1 / (double) val;
	  
val += 2;
	
} 
cout << "Sum is " << sum;
    
}
  
  else
    
cout << "Sum is 0";
  
return 0;

}
