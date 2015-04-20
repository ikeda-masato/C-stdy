#include <stdio.h>
void increment(void);
int a=0;

int main(){
	int i;

	for(i=0;i<10;i++){
		increment();
	}


	return 0;
}

	void increment(void){

	int b;

	a++;
	b++;


	printf("a=%d,b=%d\n",a,b);

	return;
}