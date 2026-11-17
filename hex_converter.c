#include <unistd.h>
 
 
void hexconvert(int n)
{
    // Check if number is 10 or bigger
    if (n >= 10)
    {
        // Convert numbers 10-15 into letters a-f
        char c = 'a' + (n - 10);
 
        // Print the character
        write(1, &c, 1);
    }
    else
    {
        char c = '0' + n;
 
        write(1, &c, 1);
    }
 
    // Print a new line after each hexadecimal character
    write(1, "\n", 1);
}
 
int main(void)
{
    hexconvert(11);
 
    hexconvert(13);
   
    hexconvert(1);
 
    return 0;
}
 