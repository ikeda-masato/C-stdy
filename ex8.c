#include <stdio.h>

int main(){
	char s[10];
	int a[10];
	double d[10];

	printf("The size of char is %d byte.\n",sizeof(char));
	printf("The size of int is %d byte.\n",sizeof(int));
	printf("The size of double is %d byte.\n",sizeof(double));

	printf("The list s starts at %p.\n",&s[0]);
	printf("The list a starts at %p.\n",&a[0]);
	printf("The list d starts at %p.\n",&d[0]);

	printf("The length of a is %d bytes\n",sizeof(s));
	printf("The length of a is %d bytes\n",sizeof(a));
	printf("The length of a is %d bytes\n",sizeof(d));

	return 0;
}