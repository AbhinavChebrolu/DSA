#include<stdio.h>
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selection_Sort(int array[], int n){
	int i, j, minimum;
	for (i=0;i<n-1;i++)
	{
		minimum=i;
		for(j=i+1;j<n;j++)
		if(array[j]<array[minimum])
			minimum=j;
		swap(&array[minimum], &array[i]);
	}
}
void print_Array(int array[], int size){
	int i;
	for (i=0;i<size;i++)
		printf("%d ",array[i]);
	printf("\n");
}
int main(){
	int array[]={25,10,5,30,15};
	int n=sizeof(array)/sizeof(array[0]);
	selection_Sort(array, n);
	printf("Selection Sort : ");
	print_Array(array, n);
	return 0;
}
