#include <stdio.h>
int main(){
        printf("**********************recursion ************************\n");
        int f=fact(5);
        printf("the factorial is %d",f);
        return 0;
}

int fact(int n){

        if(n>1)
        {

        printf("the number is %d",n);
                return n*fact(n-1);
        }
}
