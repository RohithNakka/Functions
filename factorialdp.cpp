#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=n*fact(n-1);
	
}
int main()
{
	cout<<"enter a number";
	cin>>n;
	for(i=0;i<n;i++)
	{
		dp[i]=-1;
	}
	cout<<"Factorial of"<<n<<"is:"<<factorial(n);
	return 0;
}
