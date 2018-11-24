#include<stdio.h>
int main(){

    int i,j,k,l;
    int a[]={0,3,4,5,6,7};
    int n=5;
    for( i=1;i<=n-3;i++){
        for( j=i+1;j<=n-2;j++){
            for( k=j+1;k<=n-1;k++){
                for( l=k+1;l<=n;l++){
                printf("%d %d %d %d\n",a[i],a[j],a[k],a[l]);
                }
            }
        }
    }

        return 0;

}
