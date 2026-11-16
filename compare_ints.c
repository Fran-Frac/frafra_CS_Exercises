#include <unistd.h>

void printnum(int n)
{
    long num = n;
    char c;

    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }

    if (num >= 10)
        printnum(num / 10);

    c = (num % 10) + '0';
    write(1, &c, 1);
}

void compareints(int a, int b)
{
    printnum(a);

    if (a > b)
        write(1, " is greater than ", 17);
    else if (a < b)
        write(1, " is smaller than ", 17);
    else
        write(1, " is equal to ", 13);

    printnum(b);
    write(1, "\n", 1);
}

int main(void)
{
    compareints(7, 18);
    compareints(20, 10);
    compareints(5, 5);
    compareints(-10, 5);

    return 0;
}