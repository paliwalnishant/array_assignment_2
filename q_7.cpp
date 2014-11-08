#include<stdio.h>
int main()
{
int i,j=0,k,size,a[100],sum,x=0;
printf("Enter the size of array\n");
scanf("%d",&size);
printf("Enter the elements of array.\n");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("Enter the value of sum");
scanf("%d",&sum);
     x=x+a[0];

for(i=1;i<size;i++)
{
        while (x > sum && j < i-1)
        {
            x=x-a[j];
            j++;


        }
        if (x == sum)
        {
            for(k=j;k<i;k++)
            printf ("Elements are %d \n",a[k]);
            return 1;
        }

        if (x < sum)
          x = x + a[i];
}
printf("no subarray found");
return 0;
}


