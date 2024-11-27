#include <stdio.h>
#include <math.h>

// Cases using switch :
// Here we have used cases as number but we can use letter also like a, b, c, d...

int main()
{
    int day;
    printf("Enter day ( 1 - 7 ) : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("not a valid day! \n");
    }

    return 0;
}