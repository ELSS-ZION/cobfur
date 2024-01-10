int main()
{
    int i, sum = 0;
    unsigned char __s0__[] = 
    {

        0x16, 0x92, 0x9a, 0x22, 0x76
    };

    for (unsigned int m = 0; m < sizeof(__s0__); ++m)
    {
        unsigned char c = __s0__[m];
        c = (c >> 0x2) | (c << 0x6);
        c += 0xb8;
        c = (c >> 0x6) | (c << 0x2);
        c ^= 0x39;
        c = -c;
        c = ~c;
        c = (c >> 0x3) | (c << 0x5);
        c = -c;
        c ^= 0x58;
        c += 0x38;
        c ^= m;
        c = ~c;
        c ^= m;
        c += m;
        c = -c;
        __s0__[m] = c;
    }

    char arr[] = __s0__;
    const char *p = NULL;

    unsigned char __s1__[] = 
    {

        0x91, 0x7e, 0xe2, 0x11, 0x6f, 0x95, 0x14, 0xe8, 
        0x2e
    };

    for (unsigned int m = 0; m < sizeof(__s1__); ++m)
    {
        unsigned char c = __s1__[m];
        c ^= 0x52;
        c += 0xe;
        c ^= m;
        c += 0xd9;
        c ^= 0x8a;
        c = -c;
        c = ~c;
        c -= m;
        c ^= 0xee;
        c = -c;
        c += 0x21;
        c = ~c;
        c = (c >> 0x7) | (c << 0x1);
        c = -c;
        c += m;
        __s1__[m] = c;
    }

    const char *s = __s1__;
    unsigned char __s2__[] = 
    {

        0xe5, 0xe5, 0xd5, 0x36, 0xd, 0x2, 0xd1, 0xd1, 
        0xba
    };

    for (unsigned int m = 0; m < sizeof(__s2__); ++m)
    {
        unsigned char c = __s2__[m];
        c = -c;
        c = (c >> 0x1) | (c << 0x7);
        c = -c;
        c = (c >> 0x1) | (c << 0x7);
        c += m;
        c ^= m;
        c -= 0x53;
        c = -c;
        c = ~c;
        c ^= 0xaa;
        c += m;
        c ^= m;
        c -= m;
        c = -c;
        c -= m;
        __s2__[m] = c;
    }

    unsigned char __s3__[] = 
    {

        0x1a, 0xda, 0x29
    };

    for (unsigned int m = 0; m < sizeof(__s3__); ++m)
    {
        unsigned char c = __s3__[m];
        c -= 0xb5;
        c = ~c;
        c += 0xc2;
        c = (c >> 0x6) | (c << 0x2);
        c -= m;
        c = ~c;
        c = (c >> 0x6) | (c << 0x2);
        c += 0x5c;
        c = (c >> 0x5) | (c << 0x3);
        c -= 0x48;
        c = (c >> 0x2) | (c << 0x6);
        c = -c;
        c = (c >> 0x2) | (c << 0x6);
        c ^= m;
        c += m;
        __s3__[m] = c;
    }

    const char *s1 = formatString(__s2__, __s3__);

    unsigned char __s4__[] = 
    {

        0x86, 0x44, 0x4, 0xcb, 0x70
    };

    for (unsigned int m = 0; m < sizeof(__s4__); ++m)
    {
        unsigned char c = __s4__[m];
        c ^= m;
        c = (c >> 0x6) | (c << 0x2);
        c -= m;
        c = ~c;
        c += 0x42;
        c = ~c;
        c = -c;
        c ^= 0x54;
        c -= 0x18;
        c = -c;
        c -= m;
        c ^= m;
        c = ~c;
        c -= m;
        c ^= m;
        __s4__[m] = c;
    }

    p = __s4__;
    
    for ( i = 1; i <= 9; i++ ) {
        sum += i;
    } /*-for-*/
    unsigned char __s5__[] = 
    {

        0x52, 0x32, 0x54, 0xa, 0x96, 0xcc, 0xcd, 0x13, 
        0xa7, 0x45
    };

    for (unsigned int m = 0; m < sizeof(__s5__); ++m)
    {
        unsigned char c = __s5__[m];
        c = -c;
        c ^= 0x5c;
        c = (c >> 0x5) | (c << 0x3);
        c = ~c;
        c += 0x4a;
        c = ~c;
        c ^= m;
        c += m;
        c ^= 0x27;
        c += 0x4c;
        c ^= 0x88;
        c -= m;
        c ^= m;
        c -= 0xcb;
        c ^= m;
        __s5__[m] = c;
    }

    printf(__s5__, sum);

    return 0;
}

