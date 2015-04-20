#include<stdio.h>
#define N 3

	void swap1(int* i1,int* i2)
	{
		int tmp;
		tmp=*i1;
		*i1=*i2;
		*i2=tmp;
	}

	void swap2(int i1,int i2)
	{
		int tmp;
		tmp=i1;
		i1=i2;
		i2=tmp;
	}


int main()
{
	int i1,i2;
	i1=100;
	i2=200;
	

	printf("i1=%d,i2=%d\n",i1,i2);

	swap1(&i1,&i2);
	printf("i1=%d,i2=%d\n",i1,i2);
	

	swap2(i1,i2);
	printf("i1=%d,i2=%d\n",i1,i2);
	
	return 0;
}