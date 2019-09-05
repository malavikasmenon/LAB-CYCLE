//Selection sort
#include<stdio.h>
void selection_sort(int a[],int n)
{ int min,i,j;
  for(i=0;i<n-1;i++)
  { min=i;
    for(j=i+1;j<n;j++)
		{ if(a[j]<a[min])
          { min=j;
			 }
      }
    int t=a[min];
    a[min]=a[i];
    a[i]=t;
  }
}

int main()
{	int a[100],n,i,j;
   printf("Enter the number of elements");
   scanf("%d",&n);
   printf("Enter the elements in the array");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   selection_sort(a,n);
   printf("The sorted array");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
   return 0;
}
