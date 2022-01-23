#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b, or, and, not, nor, nand, xor, xnor;
    int choice;

    printf("Please Choose an Operation from Below : \n\n");
    printf("\t1 : AND Gate Operation\n");
    printf("\t2 : OR Gate Operation\n");
    printf("\t3 : NOT Gate Operation\n");
    printf("\t4 : NAND Gate Operation\n");
    printf("\t5 : NOR Gate Operation\n");
    printf("\t6 : EXOR Gate Operation\n");
    printf("\t7 : EXNOR Gate Operation\n");
    printf("\t8 : EXIT\n");

    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {

    case 1 :
        {
            printf("\nPlease Enter 2 Binary Value : ");
            scanf("%d%d", &a, &b);
            and=a&&b;
            printf("\t\nAND Gate Value is = %d\n\n", and);
            break;

        }

    case 2 :
        {
            printf("\nPlease Enter 2 Binary Value : ");
            scanf("%d%d", &a, &b);
            or=a||b;
            printf("\t\nOR Gate Value is = %d\n\n", or);
            break;

        }

    case 3 :
        {
            printf("\nPlease Enter a Binary Value : ");
            scanf("%d", &a);
            not=!a;
            printf("\t\nNOT Gate Value is = %d\n\n", not);
            break;

        }

    case 4 :
        {
            printf("\nPlease Enter 2 Binary Value : ");
            scanf("%d%d", &a, &b);
            nand=!(a&&b);
            printf("\t\nNAND Gate Value is = %d\n\n", nand);
            break;

        }

    case 5 :
        {
            printf("\nPlease Enter 2 Binary Value : ");
            scanf("%d%d", &a, &b);
            nor=!(a||b);
            printf("\t\nNOR Gate Value is = %d\n\n", nor);
            break;

        }

    case 6 :
        {
            printf("\nPlease Enter 2 Binary Value : ");
            scanf("%d%d", &a, &b);
            xor=a^b;
            printf("\t\nEXOR Gate Value is = %d\n\n", xor);
            break;

        }

    case 7 :
        {
            printf("\nPlease Enter 2 Binary Value : ");
            scanf("%d%d", &a, &b);
            xnor=!(a^b);
            printf("\t\nEXNOR Gate Value is = %d\n\n", xnor);
            break;

        }

    case 8 :
        {
            break;
        }

    default :
        {
            printf("\t\nUnknown Operation\n\n");
            break;
        }

    }


    getch();
    return 0;
}
