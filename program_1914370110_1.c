#include <stdio.h>
int main()
{
    int c, d, e;
    c = 5;
    d = 1;
    e = 1;
    printf("%d! = ",c);
    do{e = e * d;
    printf("%d x ",d);d++;}
    while(d < c);
    e = e * d;
    printf("%d",d);
    printf(" = %d",e);
}
