#include<iostream>
using namespace std;
int fibonacci(int n)
{
if((n==1)||(n==0))
{
return(n);
}
else
{
return(fibonacci(n-1)+fibonacci(n-2));
}
}
int main()
{
int x,i=1;
cout<<"enter positive intiger";
cin>> x;
while(i<x)
{
cout<<fibonacci(i)<<",";
i++;
}
return 0;
}
