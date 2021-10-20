#include <stdio.h>
#include <stdlib.h>


int main(){
	int i,N,M,**map,j,*A,*B,*C,*D,*P,k;
	scanf("%d",&N);
	scanf("%d",&M);
	A=(int*)malloc(M*sizeof(int));
	B=(int*)malloc(M*sizeof(int));
	C=(int*)malloc(M*sizeof(int));
	D=(int*)malloc(M*sizeof(int));
	P=(int*)malloc(M*sizeof(int));
	map=(int**)calloc(N,sizeof(int*));
	for(i=0;i<N;i++){
		map[i]=(int*)calloc(N,sizeof(int));
	}

	
	for(i=0;i<M;i++){
		scanf("%d %d %d %d %d",&P[i],&A[i],&B[i],&C[i],&D[i]);
	}
	
	for(i=0;i<M;i++){
		for(j=A[i];j<=C[i];j++){
			for(k=B[i];k<=D[i];k++){
				if(P[i]==map[j-1][k-1]){
					map[j-1][k-1]=0;
					}
				else if(map[j-1][k-1]!=0 && map[j-1][k-1]!=P[i]){
					map[j-1][k-1]=1;
				}
				else{
				
					map[j-1][k-1]=P[i];
					}
			}
		}
	}

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",map[i][j]);
		}
		printf("\n");
	}
}
