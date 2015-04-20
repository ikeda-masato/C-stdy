#include<stdio.h>
#define N 5

int main()
{
	int *ip,a[5]={2,3,5,7,11},i;

	ip=&a[0];


	for(i=0;i<N;i++){
		printf("a[%d]=%d.\n",i,*(ip++));
	}
	return 0;
}