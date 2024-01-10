int fn()
{
    int i, sum = 0;
    unsigned char __s6__[] = 
    {

        0xab, 0xaa, 0xa9, 0xa7, 0x63
    };

    for (unsigned int m = 0; m < sizeof(__s6__); ++m)
    {
        unsigned char c = __s6__[m];
        c ^= m;
        c -= 0xcd;
        c = (c >> 0x7) | (c << 0x1);
        c ^= 0xad;
        c -= 0x1;
        c ^= 0x98;
        c = (c >> 0x7) | (c << 0x1);
        c += m;
        c = ~c;
        c ^= m;
        c = (c >> 0x1) | (c << 0x7);
        c -= 0xf1;
        c = ~c;
        c = -c;
        c += m;
        __s6__[m] = c;
    }

    char arr[] = __s6__;
    const char *p = NULL;

    unsigned char __s7__[] = 
    {

        0x9f, 0x3f, 0xde, 0x7e, 0x3d, 0x9c, 0x7c, 0xdb, 
        0x70
    };

    for (unsigned int m = 0; m < sizeof(__s7__); ++m)
    {
        unsigned char c = __s7__[m];
        c = (c >> 0x7) | (c << 0x1);
        c = -c;
        c = ~c;
        c = -c;
        c -= m;
        c = (c >> 0x6) | (c << 0x2);
        c ^= m;
        c += 0x93;
        c = -c;
        c = ~c;
        c -= 0x3f;
        c = -c;
        c = ~c;
        c -= 0xbe;
        c = -c;
        __s7__[m] = c;
    }

    const char *s = __s7__;
    unsigned char __s8__[] = 
    {

        0x1d, 0x25, 0x2d, 0x4b, 0x5b, 0xc9, 0xca, 0xd2, 
        0xc
    };

    for (unsigned int m = 0; m < sizeof(__s8__); ++m)
    {
        unsigned char c = __s8__[m];
        c -= 0x5a;
        c = (c >> 0x3) | (c << 0x5);
        c -= m;
        c ^= 0x6a;
        c = (c >> 0x3) | (c << 0x5);
        c += m;
        c = -c;
        c += 0x1d;
        c = ~c;
        c ^= 0xf3;
        c += m;
        c ^= m;
        c += m;
        c ^= 0xb5;
        c = (c >> 0x1) | (c << 0x7);
        __s8__[m] = c;
    }

    unsigned char __s9__[] = 
    {

        0xc0, 0x9, 0xb4
    };

    for (unsigned int m = 0; m < sizeof(__s9__); ++m)
    {
        unsigned char c = __s9__[m];
        c ^= m;
        c += m;
        c = (c >> 0x3) | (c << 0x5);
        c ^= m;
        c = -c;
        c = (c >> 0x6) | (c << 0x2);
        c += 0x4c;
        c ^= 0xba;
        c = (c >> 0x5) | (c << 0x3);
        c ^= 0x8;
        c -= m;
        c = -c;
        c += m;
        c ^= m;
        c = (c >> 0x6) | (c << 0x2);
        __s9__[m] = c;
    }

    const char *s1 = formatString(__s8__, __s9__);

    unsigned char __s10__[] = 
    {

        0x8f, 0x90, 0x8d, 0x8e, 0xc2
    };

    for (unsigned int m = 0; m < sizeof(__s10__); ++m)
    {
        unsigned char c = __s10__[m];
        c += 0x2b;
        c = ~c;
        c ^= 0x3d;
        c -= m;
        c = -c;
        c += 0x6b;
        c = (c >> 0x5) | (c << 0x3);
        c += 0xbf;
        c = ~c;
        c += 0x24;
        c = -c;
        c = ~c;
        c ^= 0xff;
        c += 0x62;
        c = -c;
        __s10__[m] = c;
    }

    p = __s10__;
    
    for ( i = 1; i <= 9; i++ ) {
        sum += i;
    } /*-for-*/
    unsigned char __s11__[] = 
    {

        0x6c, 0xe7, 0x67, 0x51, 0x34, 0xb0, 0xd9, 0x93, 
        0xcf, 0xca
    };

    for (unsigned int m = 0; m < sizeof(__s11__); ++m)
    {
        unsigned char c = __s11__[m];
        c = -c;
        c ^= 0x51;
        c -= 0xdf;
        c = (c >> 0x7) | (c << 0x1);
        c -= m;
        c ^= m;
        c -= m;
        c ^= 0x98;
        c = -c;
        c -= 0x92;
        c ^= m;
        c += m;
        c = (c >> 0x1) | (c << 0x7);
        c -= m;
        c = ~c;
        __s11__[m] = c;
    }

    printf(__s11__, sum);

    return 0;
}

