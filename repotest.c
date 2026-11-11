#include <unistd.h>

static void print_long(long n)
{
    char digit;

    if (n >= 10)
    {
        print_long(n / 10);
    }
    digit = (n % 10) + '0';
    write(1, &digit, 1);
}

void printnum(int n)
{
    long num;

    num = n;
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    print_long(num);
}

int main(void)
{
    printnum(2147483647);
    write(1, "\n", 1);

    printnum(-333);
    write(1, "\n", 1);

    printnum(-2147483648);
    write(1, "\n", 1);
}