#include <stdio.h>
#include <limits.h>
#include "header/utility.h"
#include <string.h>


struct person {
        char *name;
        char *add;
};

int  main ()
{


        struct person p;
        p.name="radar \n";
        printf("%s",p.name);
        struct person* ob=&p;
        ob->name="brahmananda";
        printf("%s",ob->name);

        printf ("**************************************\n");

        printf ("\nthe addition is %d",add(8,9));
        return 0;
}
