#include<stdio.h>

int main()
{	int n,a[6]={5,10,15,30,20,0},key,i,j,pos;
   printf("Enter the element and the position to be inserted");
   scanf("%d %d",&key,&pos);
   for(j=5;j>=pos;j--)
    {a[j]=a[j-1];
    }
   a[pos]=key;
   printf("New array");
   for(i=0;i<6;i++)
    printf("%d ",a[i]);
   return 0;
}
