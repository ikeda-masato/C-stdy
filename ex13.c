#include <stdio.h>
#define N 3

typedef struct seiseki{
	int gakuseki;
	int mid;
	int final;
	};


	int main(){
	struct seiseki a, *ap;
	double ave;
	
	a.gakuseki=1;
	a.mid=80;
	a.final=90;

	printf("%d:MID=%d,FINAL=%d\n",a.gakuseki,a.mid,a.final);

	ap=&a;
	printf("%d:MID=%d,FINAL=%d\n\n",ap->gakuseki,ap->mid,ap->final);

	ave=(a.mid+a.final)/2;
	printf("%d:AVERAGE=%.1f\n",a.gakuseki,ave);
	return 0;
}