 #include <stdio.h>

  union
    {
        int ival;
        float fval;
    } u;

    void main()
    {
        int a = -5;
        int k = (a++, ++a);
        printf("%d\n", k);


        int b = 5 * 3 + 2 - 4;
        printf("%d\n", b);


        printf("%d\n", sizeof(u));
    }