#include <stdio.h>
int sum(int n);

int main(){
	int i,a[5]={5,10,15,20,25};

	for(i=0;i<5;i++){
		printf("%d\n",sum(a[i]));
}

}
 int sum(int n){
	int i,s=0;

	for(i=1;i<=n;i++){
		s=s+i;
		}

	return s;

}