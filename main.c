#include <stdio.h>
int main()
{
    long long int a=0;
   long long int t1=0,t2=1,dis=0;
   int i;
    for(i=2;;i++)
    {
        dis=t1+t2;
         printf("%d ",dis);
         t1=t2;
         t2=dis;
         if (dis%2==0)
            a=a+dis;
         if(dis>4000000)
            break;
    }
    printf("\n%lld",a);
    return 0;
}
