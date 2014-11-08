#include <stdio.h>


void swap (int a[], int left, int right)
{
 int temp;
 temp=a[left];
 a[left]=a[right];
 a[right]=temp;
}
int partition( int a[], int low, int high )
{
 int left, right;
 int pivot_item;
 int pivot = left = low;
 pivot_item = a[low];
 right = high;
 while ( left < right )
 {

  while( a[left] <= pivot_item )
   left++;

  while( a[right] > pivot_item )
   right--;
  if ( left < right )
   swap(a,left,right);
 }

 a[low] = a[right];
 a[right] = pivot_item;
 return right;
}

void quicksort( int a[], int low, int high )
{
 int pivot;
 if ( high > low )
 {
  pivot = partition( a, low, high );
  quicksort( a, low, pivot-1 );
  quicksort( a, pivot+1, high );
 }
}



int main(void)
{
	int A[100],size,i,sum;
	printf("Enter the size of array.\n");
	scanf("%d",&size);
	printf("Enter the array elements.\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the sum value.\n");
	scanf("%d",&sum);

	quicksort(A,0,size-1);
	for(i=0;i<size;i++)
	printf("%d ",A[i]);
	for( i=0;i<size-2;i++)
	{
		int high,low;
		low=i+1;
		high=size-1;
		while(low<high)
		{
			if(A[i]+A[low]+A[high]==sum)
		{
			printf("Triplet is  %d ,%d ,%d ",A[i],A[low],A[high]);
			break;
		}
		else if (A[i]+A[low]+A[high]<sum)
		{
			low++;
		}
		else
		high--;


		}
	}

	return 0;
}







