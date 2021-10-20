#include <stdlib.h>
#include <stdio.h>

int *fibonacci(int **F);

int main(){
    int *array,T,**a;
    int z=0,i,j,maxn=0;
    scanf("%d",&T);
    a=(int**)malloc(sizeof(int*)*T);
    for(i=0 ;i<T;i++){
        a[i]=(int*)malloc(sizeof(int)*2);
    }
    for(i=0 ;i<T;i++){
        for(j=0 ; j<2 ; j++){
            scanf("%d",&a[i][j]);
            if(i==0 && j==0){
                maxn=a[i][j];
            }
            else if(a[i][j]>=maxn){
                maxn=a[i][j];
                
            }
        }
    }
    array=(int*)malloc(sizeof(int)*maxn);
    array[0]=0; array[1]=1,array[2]=1;
    for(i=3 ;i<maxn;i++){
        array[i]=array[i-1]+array[i-2];
    }
    for(i=0 ;i<T;i++){
        for(j=a[i][0] ; j<=a[i][1] ; j++){
            if(j==0){}
            else{z+=array[j-1];}
        }
        printf("%d\n",z);
        z=0;
    }
    
}

