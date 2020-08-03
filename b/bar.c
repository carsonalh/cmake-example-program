#include <foo.h>

#include <stdio.h>

int main(void)
{
    int first_input, second_input;

    printf("Enter the first input: ");
    scanf("%d", &first_input);

    printf("Enter the second input: ");
    scanf("%d", &second_input);

    int result = sumi(first_input, second_input);

    printf("The result is %d\n", result);

    return 0;
}

