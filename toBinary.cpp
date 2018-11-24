#include<stdio.h>
using namespace std;
int main(){



    int n,i;
    int A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    int totalSubset=pow(2,n)-1;

    for(int i =0; i <totalSubset;i++){
        string binary=toBinary(i);

        int len=binary.lenght();
        for(int j =len; j < n ;j++) binary +='0';

    printf("{");
    for(int j=-;j<len;j++){
        if(binary[j]=='1'){
            printf("%d",A[j]);
        }
    }

    printf("]\n");

}

return 0;

    }
