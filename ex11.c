#include <stdio.h>
#define N 100

	int main(int argc,char **argv){
		int i,a[N],count=0,sum=0;
	FILE *fp;/*fpの定義*/

	if(argc<2){
	fprintf(stderr,"%s infile",argv[0]);
	return 1;
	}
	
	fp=fopen("test.dat","r");/*test.datをfopen,戻り値をfpで取得*/

	if(fp==NULL){
		fprintf(stderr,"open error %s\n",argv[1]);
		return 1;

	}

	for(i=0;i<N;i++){
		if(fscanf(fp,"%d",&a[i])==-1){
		break;
	}
	count++;
	}


	printf("The number of integer is %d.\n",count);

	for(i=0;i<count;i++){
		sum+=a[i];
	}

	printf("sum=%d\n",sum);
	fclose(fp);
	return 0;
}
