#include <iostream>
using namespace std;

int power(int base,int exponent)
{
	if(exponent==0)
	{
	   return 1	;
	}
	else
	{
		return base*power(base,exponent-1);
	}
}

int main() {
	int n1,n2;
	cin>>n1>>n2;
	cout<<power(n1,n2);
	return 0;
}
