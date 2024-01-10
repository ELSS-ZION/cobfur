int fn()
{
    int i, sum = 0;
    unsigned char __s6__[] = 
    {

        0xb9, 0xbe, 0xcf, 0xd0, 0xa5
    };

    for (unsigned int m = 0; m < sizeof(__s6__); ++m)
    {
        unsigned char c = __s6__[m];
        c ^= m;
        c = (c >> 0x1) | (c << 0x7);
        c -= 0x6c;
        c ^= 0x24;
        c = ~c;
        c += m;
        c ^= 0x87;
        c = ~c;
        c += m;
        c = -c;
        c ^= 0x6b;
        c -= 0x49;
        c ^= m;
        c -= 0x32;
        c ^= 0xb3;
        __s6__[m] = c;
    }

    char arr[] = __s6__;
    const char *p = NULL;

    unsigned char __s7__[] = 
    {

        0x1f, 0x67, 0xcf, 0xd7, 0x5f, 0x67, 0x8f, 0x57, 
        0x24
    };

    for (unsigned int m = 0; m < sizeof(__s7__); ++m)
    {
        unsigned char c = __s7__[m];
        c ^= 0xfe;
        c = ~c;
        c ^= 0x29;
        c += 0x26;
        c = -c;
        c ^= 0x83;
        c = (c >> 0x3) | (c << 0x5);
        c ^= 0xf0;
        c -= m;
        c = (c >> 0x2) | (c << 0x6);
        c ^= 0xa3;
        c += m;
        c = ~c;
        c += m;
        c ^= m;
        __s7__[m] = c;
    }

    const char *s = __s7__;
    unsigned char __s8__[] = 
    {

        0xa6, 0x84, 0xe6, 0xb9, 0x8d, 0x3e, 0x9d, 0x6d, 
        0x4c
    };

    for (unsigned int m = 0; m < sizeof(__s8__); ++m)
    {
        unsigned char c = __s8__[m];
        c += m;
        c = -c;
        c ^= 0x7d;
        c += m;
        c ^= m;
        c = -c;
        c -= m;
        c = -c;
        c = ~c;
        c = (c >> 0x2) | (c << 0x6);
        c += 0x6a;
        c ^= 0xb3;
        c = (c >> 0x3) | (c << 0x5);
        c -= m;
        c = (c >> 0x1) | (c << 0x7);
        __s8__[m] = c;
    }

    unsigned char __s9__[] = 
    {

        0x1, 0xff, 0x39
    };

    for (unsigned int m = 0; m < sizeof(__s9__); ++m)
    {
        unsigned char c = __s9__[m];
        c -= m;
        c ^= m;
        c -= 0x8f;
        c = -c;
        c -= m;
        c ^= m;
        c += 0x62;
        c ^= 0xe0;
        c = ~c;
        c = -c;
        c ^= 0x8e;
        c -= m;
        c ^= m;
        c = (c >> 0x3) | (c << 0x5);
        c += 0x86;
        __s9__[m] = c;
    }

    const char *s1 = formatString(__s8__, __s9__);

    unsigned char __s10__[] = 
    {

        0xf6, 0x15, 0x38, 0x57, 0x1e
    };

    for (unsigned int m = 0; m < sizeof(__s10__); ++m)
    {
        unsigned char c = __s10__[m];
        c = ~c;
        c = -c;
        c ^= m;
        c = -c;
        c ^= m;
        c = ~c;
        c -= m;
        c = (c >> 0x5) | (c << 0x3);
        c ^= 0xbb;
        c += m;
        c ^= 0x6f;
        c -= m;
        c = -c;
        c -= m;
        c = -c;
        __s10__[m] = c;
    }

    p = __s10__;
    
    for ( i = 1; i <= 9; i++ ) {
        sum += i;
    } /*-for-*/
    unsigned char __s11__[] = 
    {

        0xa1, 0xa4, 0xad, 0xa1, 0xd7, 0x82, 0x91, 0xd9, 
        0x57, 0x5e
    };

    for (unsigned int m = 0; m < sizeof(__s11__); ++m)
    {
        unsigned char c = __s11__[m];
        c -= m;
        c ^= 0x7b;
        c += m;
        c ^= 0x24;
        c -= m;
        c = ~c;
        c ^= 0x3c;
        c = (c >> 0x3) | (c << 0x5);
        c += 0x41;
        c = -c;
        c += m;
        c ^= m;
        c = ~c;
        c += 0x87;
        c = (c >> 0x5) | (c << 0x3);
        __s11__[m] = c;
    }

    printf(__s11__, sum);

    return 0;
}

