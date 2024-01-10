int main()
{
    int i, sum = 0;
    unsigned char __s0__[] = 
    {

        0x7, 0x7, 0x27, 0x17, 0x29
    };

    for (unsigned int m = 0; m < sizeof(__s0__); ++m)
    {
        unsigned char c = __s0__[m];
        c = ~c;
        c = -c;
        c += 0x8c;
        c = (c >> 0x3) | (c << 0x5);
        c = -c;
        c = (c >> 0x5) | (c << 0x3);
        c ^= 0x21;
        c = (c >> 0x3) | (c << 0x5);
        c ^= m;
        c += 0x22;
        c = (c >> 0x7) | (c << 0x1);
        c += 0xaf;
        c = ~c;
        c ^= m;
        c += m;
        __s0__[m] = c;
    }

    char arr[] = __s0__;
    const char *p = NULL;

    unsigned char __s1__[] = 
    {

        0x14, 0xb5, 0x51, 0xf5, 0x4, 0x13, 0x30, 0xd0, 
        0xa2
    };

    for (unsigned int m = 0; m < sizeof(__s1__); ++m)
    {
        unsigned char c = __s1__[m];
        c ^= m;
        c -= 0x63;
        c ^= 0x89;
        c -= m;
        c ^= m;
        c += m;
        c = -c;
        c = (c >> 0x5) | (c << 0x3);
        c ^= 0xee;
        c -= 0xf1;
        c ^= 0x29;
        c = ~c;
        c ^= m;
        c -= m;
        c ^= m;
        __s1__[m] = c;
    }

    const char *s = __s1__;
    unsigned char __s2__[] = 
    {

        0xa9, 0x9d, 0x91, 0xe5, 0xb4, 0xa9, 0xbd, 0xc1, 
        0x8e
    };

    for (unsigned int m = 0; m < sizeof(__s2__); ++m)
    {
        unsigned char c = __s2__[m];
        c = (c >> 0x3) | (c << 0x5);
        c = ~c;
        c -= 0xf7;
        c ^= m;
        c -= 0xe6;
        c = -c;
        c += m;
        c = (c >> 0x7) | (c << 0x1);
        c += 0xa8;
        c = ~c;
        c += m;
        c = -c;
        c += m;
        c = -c;
        c += m;
        __s2__[m] = c;
    }

    unsigned char __s3__[] = 
    {

        0xa7, 0xc6, 0xd2
    };

    for (unsigned int m = 0; m < sizeof(__s3__); ++m)
    {
        unsigned char c = __s3__[m];
        c ^= m;
        c -= 0x52;
        c ^= 0xf1;
        c -= 0x66;
        c = (c >> 0x7) | (c << 0x1);
        c += 0x2a;
        c ^= m;
        c = -c;
        c += m;
        c = ~c;
        c -= 0xe1;
        c = (c >> 0x6) | (c << 0x2);
        c = -c;
        c -= m;
        c ^= 0x94;
        __s3__[m] = c;
    }

    const char *s1 = formatString(__s2__, __s3__);

    unsigned char __s4__[] = 
    {

        0x32, 0x3c, 0x26, 0x38, 0xe2
    };

    for (unsigned int m = 0; m < sizeof(__s4__); ++m)
    {
        unsigned char c = __s4__[m];
        c ^= 0xd4;
        c -= 0x81;
        c = (c >> 0x3) | (c << 0x5);
        c = -c;
        c = ~c;
        c -= m;
        c = -c;
        c = (c >> 0x6) | (c << 0x2);
        c -= m;
        c ^= m;
        c -= m;
        c = ~c;
        c ^= 0x79;
        c = (c >> 0x5) | (c << 0x3);
        c ^= 0xfd;
        __s4__[m] = c;
    }

    p = __s4__;
    
    for ( i = 1; i <= 9; i++ ) {
        sum += i;
    } /*-for-*/
    unsigned char __s5__[] = 
    {

        0x61, 0xb0, 0x8b, 0x8, 0x4c, 0x46, 0x4d, 0x5e, 
        0x23, 0xbd
    };

    for (unsigned int m = 0; m < sizeof(__s5__); ++m)
    {
        unsigned char c = __s5__[m];
        c += m;
        c ^= 0xfd;
        c = ~c;
        c += m;
        c = -c;
        c ^= m;
        c = (c >> 0x5) | (c << 0x3);
        c += m;
        c = -c;
        c ^= m;
        c -= 0x38;
        c = -c;
        c -= m;
        c = -c;
        c = (c >> 0x6) | (c << 0x2);
        __s5__[m] = c;
    }

    printf(__s5__, sum);

    return 0;
}

