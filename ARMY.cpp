#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g,mg;
        scanf("%d%d",&g,&mg);
        int i,god[g],mech[mg];
        for(i=0;i<g;i++)
            scanf("%d",&god[i]);
        for(i=0;i<mg;i++)
             scanf("%d",&mech[i]);
        sort(god,god+g);
        sort(mech,mech+mg);
        if(god[g-1]>=mech[mg-1])
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
}
