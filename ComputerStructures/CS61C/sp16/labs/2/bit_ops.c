#include <stdio.h>

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x, unsigned n)
{
    unsigned result = x >> n & 1;
    return result;
}

// Set the nth bit of the value of x to v.
// // Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x, unsigned n, unsigned v)
{
    printf("*x is %u\n", *x);

    unsigned location = 1 << n;
    *x &= ~location;
    *x |= v << n;

    printf("*x |= *x is %u\n", *x);

}

int main(int argc,char *argv[])
{
    // x = 10110101 128 + 32 + 16 + 5 = 181
    unsigned int x = 181;

    set_bit(&x, 4, 0);
    // 10100101 = (181 - 16 = 165)

    set_bit(&x, 3, 1);
    // 10101101 = (165 + 8 = 173)

    set_bit(&x, 6, 1);
    // 11101101 = (173 + 64 = 237)

    set_bit(&x, 6, 1);
    // 11101101 = (237 + 0 = 237)

    set_bit(&x, 1, 0);
    // 11101101 = (237 + 0 = 237)
    
    /*
    unsigned bit = get_bit(1091, 10);
    printf("the bit is %u \n", bit);*/

    return 0;
}