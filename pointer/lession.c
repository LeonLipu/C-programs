#include <stdio.h>
void main(){
        int a[4][4]={
                {1,2,3,5},
                {1,2,3,5},
                {1,2,3,5},
                {1,2,3,5}
        };
//a[i][j]=*a[i]+j=**a+i+j


        int i=0,j=0;
        for ( i = 0; i < 4; i++) {
                for (j=0; j<4; j++)
                {
                 printf("%d ",*a[i]+j );//a[i][j] is same as *a[i]+j
                 printf("%d ",**a+i+j );//a[i][j] is same as *a[i]+j
                }
                printf("\n");
        }

        char *hello="something\nwould be better ";

        printf("%s",hello);


}
