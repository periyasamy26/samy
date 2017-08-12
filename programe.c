#include <stdio.h>
int main()
{
    double no;

    printf("Enter a no ");
    scanf("%lf", &no);

    if (no <= 00)
    {
        if (no== 00)
            printf("Entered 0");
        else
            printf(" negative no");
    }
    else
        printf(" positive no");
    return 0;
}
