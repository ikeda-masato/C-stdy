#include <stdio.h>
#define N 10


int main(){
	int i,a[N]={80,55,60,100,95,30,40,80,75,90};
	int s=0;


	for(i=0;i<10;i++){
		if(a[i]>=60){
			s++;
		}
	}

	printf("%d",s);
	return 0;
}