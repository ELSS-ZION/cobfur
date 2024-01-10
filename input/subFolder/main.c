int fn()
{
    int i, sum = 0;
    char arr[] = "xxxx";
    const char *p = NULL;

    const char *s = "aaaa"      "bbbb";
    const char *s1 = formatString("111%s222", "yy");

    p = "cccc";
    
    for ( i = 1; i <= 9; i++ ) {
        sum += i;
    } /*-for-*/
    printf("sum = %d\n", sum);

    return 0;
}

