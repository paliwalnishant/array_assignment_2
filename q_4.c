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

int main()

{
int a[100],size,i;
printf("Enter the no. of elements\n");
scanf("%d",&size);
printf("Enter elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
quicksort(a ,0,size-1);
for(i=0;i<size;i++)
{
  printf("%d",a[i]);
}

}
