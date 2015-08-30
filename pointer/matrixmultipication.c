#include <stdio.h>
int  main (){

        printf("%s\n","************Matrix multipication ************" );


        int X[3][3]={{ 1,3,4 },{3,4,2},{1,6,3}};
        int Y[3][3]={{ 4,3,1 },{2,2,7},{9,6,3}};
        int Z[3][3];


        int i=0,j=0,k=0;


        for(i=0; i<3; i++)
        {
                for(j=0; j<3; j++) {

                        int sum=0;
                        for (k=0; k<3; k++) {

                                sum=sum+X[i][k]*Y[k][j];
                        }


                        Z[i][j]=sum;

                }

        }

        for (i=0; i<3; i++)
        {
                for(j=0; j<3; j++)
                {
                        printf("%d  ",Z[i][j]);
                }
                printf("\n");
        }


        return 0;
}
