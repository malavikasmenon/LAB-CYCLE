#include<stdio.h>
#include<string.h>
int hash(char s[26][30],int n)
{ char x[30];char h[26][30];
  int i,hkey,y,k;
  for(i=0;i<26;i++)
	strcpy(h[i],"null");
  int sum,j;
  for(i=0;i<n;i++)
	{ 	strcpy(x,s[i]);
		printf("%s",x);
		sum=0;
	  	for(j=0;j<strlen(x);j++)
		{ 	sum+=x[j];
		}

		printf("%d ",sum);
      hkey=sum%26;
		printf("%d \n",sum%26);
		if(strcmp(h[hkey],"null")==0)
			strcpy(h[hkey],x);
		else{ y=hkey;
				k=1;
				while(strcmp(h[y],"null")!=0)
					{ y=(hkey+(k*k))%26;
					  printf("Values Generated");
					  printf("%d ",y);
					  k++;
					}
      		strcpy(h[y],x); 
			}
      		
	}
	printf("Positions in hash table\n");
   for(i=0;i<26;i++)
	{ //if(strcmp(h[i],"null")!=0)
			printf("%s %d \n",h[i],i);
   }
	
}

int main()
{	char s[26][30],  sen[100];
   int i,n;
	//scanf("%s",&sen);
	/*gets(sen);
   printf("%s",sen);
   for(i=0;i<strlen(sen);i++)
	{ pos=0
     if(sen[i]!=" ")
			pos=i;
      for(j=i-pos;j<pos;j++)
			x[k++]=sen[j];
   return 0;*/
  //printf("Enter words,press # to stop");
  printf("Enter number of words");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%s",&s[i]);
  //for(i=0;i<n;i++)
  //printf("%s",&s[i]);
  hash(s,n);
}

	
