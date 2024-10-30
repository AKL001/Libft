#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int ft_atoi(const char *src); // Declare the ft_atoi function

int main()
{
    const char *tests[] = {
        "123",           // Normal positive number
        "-456",          // Normal negative number
        "   789",        // Leading whitespace
        "+101112",       // Leading plus
        "0",             // Zero
        "-0",            // Negative zero
        "   -42abc",     // Number followed by letters
        "abc123",        // Non-numeric leading characters
        "   +---123",    // Multiple signs
        "   --+42",      // Multiple signs
        "   ++42",       // Multiple signs
        "2147483647",    // Max int value
        "-2147483648",   // Min int value
        "2147483648",    // Overflow case (outside int range)
        "-2147483649",   // Underflow case (outside int range)
        "    +0   ",     // Leading/trailing whitespace
        "\t\n\v\f\r 42", // Different whitespace characters
        NULL              // NULL input
    };

    // Loop through the test cases
    for (int i = 0; tests[i] != NULL; i++)
    {
        int result = atoi(tests[i]);
        printf("ft_atoi(\"%s\") = %d\n", tests[i], result);
    }

    return 0;
}
