#include <iostream>
using namespace std;

int main() 
{
    int a=1, b=3, c=4, d=6, x, A, B;
    
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    
    cout<<"Write out x: ";
    cin>>x;
    
    A = (a*x*x*x)+(b*x*x)+(c*x)+d;
    B = (a*x*x)+(b*x)+c;
    
    cout<<"\nA(x) = "<<A;
    cout<<"\nB(x) = "<<B;
    
    return 0;
}
