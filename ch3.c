#include <stdio.h>
int main()
{
    int a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,r1,r2,r3,r4,cs1,cs2,cs3,cs4,ds1,ds2;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4,&c1,&c2,&c3,&c4,&d1,&d2,&d3,&d4);
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n",a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4);
    r1 = a1 + a2 + a3 + a4;
    r2 = b1 + b2 + b3 + b4;
    r3 = c1 + c2 + c3 + c4;
    r4 = d1 + d2 + d3 + d4;
    cs1 = a1 + b1 + c1 + d1;
    cs2 = a2 + b2 + c2 + d2;
    cs3 = a3 + b3 + c3 + d3;
    cs4 = a4 + b4 + c4 + d4;
    ds1 = a1 + b2 + c3 + d4;
    ds2 = a4 + b3 + c2 + d1;
    printf("Row sums: %d %d %d %d\n",r1,r2,r3,r4);
    printf("Column sums: %d %d %d %d\n",cs1,cs2,cs3,cs4);
    printf("Diagonal sums: %d %d\n",ds1,ds2);
    return 0;
}