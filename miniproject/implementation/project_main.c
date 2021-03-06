#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, PRIME, POS , NEG, MODU, EVE,ODD,PERC,PMSQ,PMRQ,PMCR,ARRQ,ARSQ,ARCI,FACTORIAL,AMS,SQ,CU,VOLCUBE,EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit");
    printf("\n\tEnter your choice\n");

     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;

    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case PRIME:
            printf("\n\t %d\nEnter to continue",
            calculator_operand1,
            prime(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
         case MODU:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            modu(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case EVE:
            printf("\n\t%d / %d = %d\nEnter to continue",
            eve(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
          case ODD:
            printf("\n\t%d / %d = %d\nEnter to continue",
            eve(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
          case PERC:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            perc(calculator_operand1, calculator_operand2));
           case PMSQ:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            pmsq(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
           case PMRQ:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            pmrq(calculator_operand1));

            __fpurge(stdin);
            getchar();
          case PMCR:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            pmcr(calculator_operand1));

            __fpurge(stdin);
            getchar();
             case ARRQ:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            arrq(calculator_operand1, calculator_operand2));
            __fpurge(stdin);
            getchar();
            case ARSQ:
            printf("\n\t%d / %d = %d\nEnter to continue",
            arsq(calculator_operand1));
            __fpurge(stdin);
            getchar();
            break;
            case ARCI:

            printf("\n\t%d / %d = %d\nEnter to continue",

            arci(calculator_operand1));

            __fpurge(stdin);

            getchar();

            break;
            case FACTORIAL:
            printf("\n\t%d / %d = %d\nEnter to continue",
            factorial(calculator_operand1));
            __fpurge(stdin);
            getchar();
            break;
            case AMS:
            printf("\n\t%d / %d = %d\nEnter to continue",
            ams(calculator_operand1));
            __fpurge(stdin);
            getchar();
            break;
           case SQ:

            printf("\n\t%d / %d = %d\nEnter to continue",
                   sq(calculator_operand1));
            __fpurge(stdin);
            getchar();
             case CU:
            printf("\n\t%d / %d = %d\nEnter to continue",

                   cu(calculator_operand1));

            __fpurge(stdin);

            getchar();
           case VOLCUBE:
            printf("\n\t%d / %d = %d\nEnter to continue",

                   volcube(calculator_operand1));

            __fpurge(stdin);

            getchar();
        case 24:
            exit(0);
            break;
            default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
