#include "stdio.h"
void main (int args, char *argv[])
{


        int i =0;
        for (i = 0; i  <args; i++) {
                printf("%s\n",argv[i] );
        }
}
