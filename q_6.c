
#include <stdio.h>

int main()
{
int input[100001]; //scan all entries through indexing
int prime[100001]={0}; //to store all prime numbers via sieve of erosthenes
int i,x,k,n;
scanf("%d",&n);   // 1<=n<=4000000
// input through indexing starts
for(i=0;i<n;i++)
{
	scanf("%d",&x);
	input[x]++;
}

for(i=2;i<=100000;i++)
{
	if(prime[i]==0)
	{
		k=2*i;
		while(k<=100000)
		{
			prime[k]=1;
			k=k+i;
		}

	}
}

for(i=2;i<=100000;i++)
{
	if(prime[i]==0)
	{
	while(input[i]--)
	printf("%d\t",i);
	}
}

return 0;
}
