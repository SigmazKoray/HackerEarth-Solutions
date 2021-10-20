#include <stdio.h>
#include <stdlib.h>

int main(){
    int *C,N,a,r=0,i;
    C=(int*)calloc(9,sizeof(int));
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a);
        C[a]++;
    }
    for(i=0;i<9;i++){
    	printf("%d",C[i]);
	}
    for(i=0;i<9;i++){
        if(C[r]<=C[i+1]){
            r=i+1;
        }
        else{}
    }
    printf("\n%d",r);
}
