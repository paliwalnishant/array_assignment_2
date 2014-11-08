#include<stdio.h>
int main()
{
int i,j=0,e=0,k,size,a[100],sum,x=0,mlen;
printf("Enter the size of array\n");
scanf("%d",&size);
printf("Enter the elements of array.\n");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("Enter the value of sum");
scanf("%d",&sum);

     mlen=size+1;

while(e<size)
{
        while(x<=sum && e<size)
            x=x+a[e];
            e++;

        while (x>sum && j<size)
        {
           if(e-j+1<mlen)
            mlen=e-j+1;

            x=x-a[j];
            j++;
        }


}

printf("%d",mlen);
return 0;
}


