#include<stdio.h>
int main()
{
	int arr[100],c,first,last,middle,n,search;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n",n);
	for(c=0;c<n;c++) 
	{
		scan("%d",&arr[c]);	
	}
	for(c=0;c<n;c++) 
	{
		printf("%d ",arr[c]);
	}
	printf("\nEnter value to be searched:\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last){
		if(arr[middle]<search)
		{
			first=middle+1;
		}
		else if(arr[middle]==search)
		{
			printf("%d\n",middle+1);
			break;
		}
		else
			last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("Not found %d isn't present in the list.\n",search);
	}
	return 0;	
}
