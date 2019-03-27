#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int e,n,max,min;
        scanf("%d%d",&e,&n);
        if(e>n)
        {
            max = e;
            min = n;
        }
        else
        {
            max = n;
            min = e;
        }
        if(max==0 || min==0)
            printf("0\n");
        else if(max/min >=2)
            printf("%d\n",min);
        else
            printf("%d\n",(max+min)/3);
    }
    return 0;

}
