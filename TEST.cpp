#include <iostream>
using namespace std;

int main() {
	int a[100],i;
	for(i=0;i<100;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=100;i++)
		{
			if(a[i]==42)
			{
				break;
				
			}
		else
		{
			cout<<a[i]<< endl;
			//cout<<endl;
		
	}
		}
	return 0;
}
