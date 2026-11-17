void Int_To_Hex(int n)

{

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
 
    if (n >= 16)
        Int_To_Hex(n / 16);

    int digit = n % 16;

    char c;

    if (digit < 10)
        c = '0' + digit;

    else
        c = 'a' + digit - 10;

    write(1, &c, 1);
    
}
 