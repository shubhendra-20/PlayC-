#include <iostream>
#include<math.h>

using namespace std;

int main() {
	
	// your code here
int t,m,i,j,n,k;
cin>>t;
while(t!=0)
{
cin>>m>>n;
for(i=m;i<=n;i++)
{
k=0;
if(i==1)
continue;
for(j=2;j<=sqrt(i);j++)
{
if(i%j==0)
{
k=1;
break;
}
}
if(k==0)
{
cout<<i<<endl;
}
}
cout<<endl;
t--;
}

	return 0;
}
