#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct cell{
	int no;
	struct cell *next;
	};

int main(){
	int i;
	struct cell *root,*node;
	root=NULL;
	for(i=0;i<N;i++){
		node=(struct cell *)malloc(sizeof(struct cell));/*構造体のサイズ確保*/
	if(node==NULL){
		fprintf(stderr,"malloc error\n");
	return 1;
	}

	node->no=i;　　　/*node*/
	node->next=root;
	root=node;
	}

	node=root;
	while(node!=NULL){
	printf("no=%d\n",node->no);
	node=node->next;
	}

	while(root!=NULL){
		node=root->next;
	free(root);
	root=node;
	}
	return 0;
	}