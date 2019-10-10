  void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) {
           int mid = (start + end +1) / 2 ;          
           merge_sort (A, start , mid ) ;                
           merge_sort (A,mid+1 , end ) ;            

        
          merge(A,start , mid , end );   
   }                    
}

void merge(int A[ ] , int start, int mid, int end) {

int p = start ,q = mid+1;

int Arr[end-start+1] , k=0,i;

for( i = start ;i <= end ;i++) {
    if(p > mid)      
       Arr[ k++ ] = A[ q++] ;
	else if ( q > end)   
       Arr[ k++ ] = A[ p++ ];
   else if( A[ p ] < A[ q ])   
      Arr[ k++ ] = A[ p++ ];
   else
      Arr[ k++ ] = A[ q++];
 }
  for (p=0 ; p<=k ;p ++) {
  
     A[ start++ ] = Arr[ p ] ;                          
  }
}

int main()
{	int a[10];
	int n,i;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	printf("%d ",a[i]);}
	merge_sort(a,0,n-1);
	printf("Sorted array");
   for(i=0;i<n;i++)
		printf("%d ",a[i]);
   return 0;
}
