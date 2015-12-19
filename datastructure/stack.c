#include <stdio.h>

#define max 5
typedef struct stack {
        int stk[max];
        int top;
} SK;

void  push();
void  pop();
void display();

SK sk;



void  main()
{
        sk.top=-1;
        int flag=1;
        int option;
        printf("%d\n",sk.top );


        while (flag) {


                printf(" Enter your option ");
                printf(" 1. push  ");
                printf(" 2. pop  ");
                printf(" 2. display  ");

                scanf("%d\n", &option);

                switch (option) {
                case 1:
                        push();
                        break;
                case 2:
                        pop();
                        break;

                case 3:
                        display();
                        break;
                }
                fflush (stdin);
                printf("are u sure want to continue");
                scanf("%d\n",&flag ); //0 for exit and 1 for continue
            
        }
}


void push (){
printf("%d\n", sk.top);
  if(sk.top>=max-1)
  {
    printf("stack reached max ");
    return ;
  }
  else {
    int no;
    printf("enter the no you want to push ");
  scanf("%d\n",&no );
  sk.top++;
  sk.stk[sk.top]=no;
  return ;
  }

}//end of push function

void pop (){

  if(sk.top<0)
  {
    printf("stack has no element  ");
    return ;
  }
  else {
    int no=sk.stk[sk.top];
  printf(" it poped element %d\n", no);
  sk.top--;
  return ;

  }

}


void display (){

  if(sk.top<0)
  {
    printf("stack has no element  ");
    return ;
  }
  else {

    int i;
                  for(i=0;i<=sk.top;i++)
                {
                        printf("%d\n", sk.stk[i]);
                }
                return ;
  }

}
