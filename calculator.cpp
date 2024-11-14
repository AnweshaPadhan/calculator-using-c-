#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char ope;
    cout<<"Enter a value"<<endl;
    cin>>a;
    cout<<"Enter b value"<<endl;
    cin>>b;
    cout<<"Enter operation(+,-,*,/ )";
    cin>>ope;
    if(ope == '+')
    {
        c=a+b;
        cout<<c;

        
    }
    else if( ope=='-' )
    {
        c=a-b;
        cout<<c;
        
    }
    else if(ope=='*')
    {
        c=a*b;
        cout<<c;
        
    }
    else if(ope=='/' )
    {
        c=a/b;
        cout<<c;
        
    }
    else{
        cout<<"Entered wrong input";
    }
    return 0;
}

    