#include<stdio.h>
int array[100],n;
void display(){       
	int i;
	if(n==0){
		printf("Heap is empty\n");
		return;
	}
	for(i=0;i<n;i++)
		printf("%d ",array[i]);
	printf("\n");
}
void Insertion(int num,int loc){
	int par;
	while(loc>0){
		par=(loc-1)/2;
		if(num<=array[par])
		{
			array[loc]=num;
			return;
		}
		array[loc]=array[par];
		loc=par;
	}
	array[0]=num;
}
void deletion(int num){
	int left,right,i,temp,par;
	for(i=0;i<n;i++){
		if(num==array[i])
		break;
	}
	if( num!=array[i] ){
		printf("%d not found in heap\n",num);
		return;
	}
	array[i]=array[n-1];
	n=n-1;
	par=(i-1)/2;  
	if(array[i] > array[par]){
		Insertion( array[i],i);
		return;
	}
	left=2*i+1;
	right=2*i+2; 
	while(right < n){
		if( array[i]>=array[left] && array[i]>=array[right] )
			return;
		if( array[right]<=array[left] ){
			temp=array[i];
			array[i]=array[left];
			array[left]=temp;
			i=left;
		}
		else{
			temp=array[i];
			array[i]=array[right];
			array[right]=temp;
			i=right;
		}
		left=2*i+1;
		right=2*i+2;
	}
	if( left==n-1 && array[i]<array[left] )
	{	temp=array[i];
		array[i]=array[left];
		array[left]=temp;
	}
}
main()
{
	int choice,num;
	n=0;
	while(1)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			printf("Enter the number to be inserted : ");
			scanf("%d",&num);
			Insertion(num,n);
			n=n+1;
			break;
		 case 2:
			printf("Enter the number to be deleted : ");
			scanf("%d",&num);
			deletion(num);
			break;
		 case 3:
			display();
			break;
		 case 4:
            break;
		 default:
			printf("Wrong choice\n");
		}
	}
}

