#include <iostream>
using namespace std;

int main()
{
	int a = 3, b = 2, c = 4, d;

	d = a++ + b - c % 3; //a= 3  ,b= 2 , c= 1  ,d= 4
	d = ++a + b - c % 3; //a=4  ,b= 2 , c= 1 ,d=5
        d = (b = c) + 2; //a=3  ,b= 4 , c= 4 ,d= 6
	
return 0;
} 
