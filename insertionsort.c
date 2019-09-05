//Insertion Sort 
#include<stdio.h>
void insertion_sort(int a[],int n)
{	int i;   
   for(i=1;i<n;i++)
	{ int temp=a[i];
	  int j=i;
	  while(j>0&&temp<a[j-1])
	  { a[j]=a[j-1];
		 j=j-1;
	  }
	  a[j]=temp;
   }
}

int main()
{ int a[100],n,i;
  printf("Enter the size of the array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
	scanf("%d",&a[i]);
  insertion_sort(a,n);
  printf("Sorted array");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
  return 0;
}


		
