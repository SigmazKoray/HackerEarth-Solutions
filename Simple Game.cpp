#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M,i,j,monk=0,monk2=0;
    int *A,*B,*ARF,*ARG,*BRF,*BRG;
    scanf("%d",&M);
    scanf("%d",&N);
    A=(int*)malloc(M*sizeof(int));
    B=(int*)malloc(N*sizeof(int));
    ARF=(int*)calloc(M,sizeof(int));
    ARG=ARF;
    BRF=(int*)calloc(N,sizeof(int));
    BRG=BRF;
    for(i=0;i<M;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&B[i]);
    }
    // END OF INPUT LINE
    
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            if(A[i]>B[j]){
            ARG[i]++;
            BRF[j]++;
            }
            else if(A[i]<B[j]){
            ARF[i]++;
            BRG[j]++;
            }
            else{}
        }
        monk+=ARG[i]*ARF[i];
    }
    
    for(i=0;i<N;i++)
    monk2+=BRG[i]*BRF[i];
    if(monk>monk2){
    	printf("%s %d","Monk",monk-monk2);
	}
	else if(monk<monk2){
        printf("%s %d","!Monk",monk2-monk);
    }
    else{
        printf("Tie");
    }
    return 0;
}
