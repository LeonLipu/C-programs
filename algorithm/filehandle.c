#include "stdio.h"
#include "stdlib.h"
void main(){

        FILE *fp;
        char str[100];

        if ((fp=fopen ("algorithm/text.txt","r"))==NULL) {
                printf("this not opening here");
                exit(0);
        }

        while (!feof(fp)) {
                fgets(str,88,fp);

        }
  printf("%s\n",str );
fclose(fp);

}
