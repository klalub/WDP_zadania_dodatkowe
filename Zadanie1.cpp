#include <iostream>
using namespace std;

int main() 
{
    double a, b, c;
    
    cout<<"write out numerator: ";
    cin>>a;
    cout<<"\nwrite out denominator: ";
    cin>>b;
    
    c=a/b;
    
    if(a-int(a)!=0)
    {
      cout<<"it wouldn't be a rational number";
    }
    else if(b - int(b)!=0)
    {
      cout<<"it wouldn't be a rational number";  
    }
    else
    {
    cout<<"\nRational number: "<<c;
    }

    return 0;
}
