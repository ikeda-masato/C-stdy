#include <stdio.h>
#include <stdlib.h>

int main(){
	int *a,N,i;

	scanf("%d",&N);
	if(N>=100){
	printf("N is too large.Input N<100.\n");
	return 1;
	}


	a=(int *)malloc(sizeof(int)*N);/*malloc*/

	if(a==NULL){
	fprintf(stderr,"malloc error\n");
	return 1;
	}

	printf("\nThe list a starts at %p.\n",&a[0]);
	for(i=0;i<N;i++){
		a[i]=i*i;
		printf("a[%d]=%d\n",i,a[i]);
	}

	free(a);
	return 0;
}