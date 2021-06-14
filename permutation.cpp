#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
string s="abc";
int n=s.size();
void Permituations(string abc,int frq[])
{

    if(s.size()==abc.size())
    {
        cout<<abc<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(frq[i]==0)
        {
            frq[i]=1;
            Permituations(abc+s[i],frq);
            frq[i]=0;
        }
    }
}
int main() {
	string abc="";
	int res[n]={0};

	Permituations(abc,res);
	return 0;
}
