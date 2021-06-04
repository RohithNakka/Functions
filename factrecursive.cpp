#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int i)
{
	if(i<=1)
	return i;
	return i*fact(i-1);
}
int main()
{
	cout<<"Enter the number u want the factorial of ";
	cin>>n;
	cout<<"factorial is "<<fact(n);
}
