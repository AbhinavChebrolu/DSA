#include <math.h>
#include <stdio.h>
void insertion_Sort(int array[], int n)
{
	int i, key, j;
	for (i=1;i<n;i++) {
		key=array[i];
		j=i-1;
		while(j>=0&&array[j]>key) {
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=key;
	}
}
void print_Array(int array[], int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("%d ", array[i]);
	printf("\n");
}
int main()
{
	int array[] = {25,10,5,30,15};
	int n = sizeof(array)/sizeof(array[0]);
	insertion_Sort(array, n);
	printf("Insertion Sort : ");
	print_Array(array, n);
	return 0;
}
