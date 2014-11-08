#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,m,sum,c,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        int a[21];
        sum=0;
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<pow(2,n);i++)
        {
            for(j=0;j<n;j++)
            {
                if(i&1)
                {
                sum=sum+a[j];
                if(sum>m)
                    break;
                }
                  i=i>>1;
                  if(i==0)
                  break;

            }
            if(sum==m)
            {
                printf("Yes\n");
                c++;
                break;
            }
            sum=0;
        }
        if(c==0)
        {
            printf("No\n");
        }
  }
}
