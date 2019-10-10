//Quick Sort
#include<stdio.h>
void quicksort(int x[], int lb, int ub)
{	int j;
	if(lb>=ub)
		return;
 //printf("Before Partition");
  // printf("lb=%d,ub=%d",lb,ub);
	j=partition(x,lb,ub);	
  //rintf("After Partition");
	quicksort(x,j+1,ub);
	quicksort(x,lb,j-1);
	
}

int partition(int x[], int lb, int ub)
{ 	int pivot,down,up,temp;
	pivot=x[lb];
  	up=ub;
	down=lb;
 //  printf("Pivot=%d,Down=%d, up=%d",pivot,down,up);
// printf("Entering while loop");
   while(down<up)
	{ 
	while(x[up]>pivot)
		{up--; 
	//		printf("Up= %d",up);
      }
		while(x[down]<=pivot && down<=ub)
		{down++;
		//	printf("Down= %d",down);
      }
		if(down<up)
		 { temp=x[up];
			x[up]=x[down];
			x[down]=temp;
		 }
	}
	x[lb]=x[up];
	x[up]=pivot;
	return up;
}

int main()
{	int a[10];
	int n,i;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	quicksort(a,0,n-1);
	printf("Sorted array");
   for(i=0;i<n;i++)
		printf("%d ",a[i]);
   return 0;
}
