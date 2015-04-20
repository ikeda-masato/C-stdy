#include <stdio.h>

int main(int argc,char **argv){
	int i,j;
	FILE *fp;

	if(argc<2){
	fprintf(stderr,"%s infile",argv[0]);
	return 1;
	}

	fp = fopen( "out.txt", "w");/*コマンドラインからfopen、fpで取得*/

	if(fp==NULL){
		fprintf(stderr,"open error %s\n",argv[1]);
		return 1;
	}

	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
	
		fprintf(fp,"%d*%d=%d\r\n",i,j,i*j);/*i*jをfprintfでfpに出力*/
		
		}
	}
	return 0;
}
