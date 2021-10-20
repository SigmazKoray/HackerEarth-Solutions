#include <stdio.h>
#include <stdlib.h>

int main(){
    int T,*N,i,j;
    float *D,*a,*b;
    N=(int*)malloc(T*sizeof(int));
    a=(float*)malloc(T*sizeof(float));
    D=(float*)malloc(T*sizeof(float));
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N[i]);
        if(N[i]%2!=0){
            N[i]-=1;
        }
        j=N[i]%4;
        N[i]-=j;
        j/=2;
        a[i]=N[i]/4;
        free(N);
        D[i]=a[i]*(a[i]+j);
    }
    
    for(i=0;i<T;i++){
        printf("%.3f %.3f %.3f\n",a[i],a[i]+j,D[i]);
    }
    return 0;
    
}
