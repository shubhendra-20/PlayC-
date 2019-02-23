#include<stdio.h>



int main()

{

    int t;

    long long int sum, n3,l3,a,d,i,n;

    scanf("%d",&t);

    while(t--)

    {

        scanf("%lld %lld %lld",&n3,&l3,&sum);

        n= (2*sum)/(n3+l3);

        d= (l3-n3)/(n-5);

        a= n3 - 2*d;



        printf("%lld\n",n);

        for(i=1;i<=n;i++)

            {

                printf("%lld ",a);

                a= a+d;

            }

            printf("\n");



    }







    return 0;

}
