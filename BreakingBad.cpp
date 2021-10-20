#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,C,i,j;
	char *a;
	a=(char*)malloc(10*sizeof(char));
	scanf("%d",&N);
	scanf("%d",&C);
	for(i=0;i<N;i++){
		for(j=0;j<C;j++){
			scanf("%c",&a[i]);
			printf("%c\n",a[j]);
		}
	}
}
