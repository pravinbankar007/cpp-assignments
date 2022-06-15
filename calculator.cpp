#include <iostream>
using namespace std;

int main(){

float n1,n2;
char op ;

cout <<"Enter the required operator ( +,-,*,/) :";
cin >> op;   //taking input from user

cout <<"Enter the first number :";
cin >> n1;

cout<<"Enter the second number :";
cin >> n2;


switch(op)
{

case '+':
cout<< n1+n2;
break;

case '-':
cout<< n1-n2;
break;

case '*':
cout<< n1*n2;
break;


case '/':
if (n2!=0)
{
cout<< n1/n2;
}

else
{
    cout<<" Please enter second number n2 as a nonzero number";  //divide by zero condition
}
break;


default:
cout<<"Please enter the valid operator";

}

return 0;

}