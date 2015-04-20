#include <stdio.h>
#define N 5

int main(){
	int i,sum;
	
	int a[N]={1,10,100,1000,10000};
	sum = 0;
	for(i=0;i<N;i++){
		sum+=a[i];
	}


	printf("%d",sum);
	return 0;
}