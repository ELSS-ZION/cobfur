int main()
{
    int i, sum = 0;
    unsigned char __s0__[] = 
    {

        0x42, 0xa4, 0xae, 0xac, 0xdc, 0xeb
    };

    for (unsigned int m = 0; m < sizeof(s); ++m)
    {
        unsigned char c = __s0__[m];
        c ^= m;
        c += 0x4b;
        c ^= m;
        c -= 0xf1;
        c = ~c;
        c += 0xe;
        c ^= 0xcc;
        c -= 0xf2;
        c = (c >> 0x2) | (c << 0x6);
        c -= m;
        c = (c >> 0x1) | (c << 0x7);
        c = -c;
        c = ~c;
        c += m;
        c ^= m;
        __s0__[m] = c;
    }

    char arr[] = __s0__;
    const char *p = NULL;

    unsigned char __s1__[] = 
    {

        0xb8, 0xba, 0xbc, 0xbb, 0xec, 0x70, 0xfe, 0x7f, 
        0xfc, 0x52, 0x4, 0x37, 0x62
    };

    for (unsigned int m = 0; m < sizeof(s); ++m)
    {
        unsigned char c = __s1__[m];
        c -= m;
        c ^= m;
        c = (c >> 0x6) | (c << 0x2);
        c = ~c;
        c += m;
        c ^= 0x89;
        c = ~c;
        c ^= 0x4e;
        c += 0x7a;
        c ^= m;
        c = -c;
        c += m;
        c = ~c;
        c -= m;
        c = ~c;
        __s1__[m] = c;
    }

    "aaaa"      "bbbb";
    unsigned char __s2__[] = 
    {

        0x30, 0x34, 0x28, 0x3c, 0x18, 0xd0
    };

    for (unsigned int m = 0; m < sizeof(s); ++m)
    {
        unsigned char c = __s2__[m];
        c += m;
        c ^= 0x40;
        c -= m;
        c = -c;
        c = (c >> 0x2) | (c << 0x6);
        c += 0x32;
        c = ~c;
        c += m;
        c ^= m;
        c = ~c;
        c = -c;
        c ^= 0x4f;
        c = -c;
        c -= m;
        c = (c >> 0x3) | (c << 0x5);
        __s2__[m] = c;
    }

    p = __s2__;
    
    for ( i = 1; i <= 9; i++ ) {
        sum += i;
    } /*-for-*/
    unsigned char __s3__[] = 
    {

        0xa4, 0xa2, 0xa6, 0x10, 0x78, 0x10, 0x14, 0xc9, 
        0xc3, 0x97, 0x65, 0x38
    };

    for (unsigned int m = 0; m < sizeof(s); ++m)
    {
        unsigned char c = __s3__[m];
        c = -c;
        c -= m;
        c = (c >> 0x7) | (c << 0x1);
        c = -c;
        c ^= 0xf3;
        c += m;
        c ^= 0xcd;
        c = -c;
        c ^= m;
        c -= 0x62;
        c = (c >> 0x1) | (c << 0x7);
        c ^= 0x8f;
        c += 0xc1;
        c ^= m;
        c -= 0xe9;
        __s3__[m] = c;
    }

    printf(__s3__, sum);

    return 0;
}

