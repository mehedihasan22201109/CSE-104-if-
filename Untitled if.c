
#include <stdio.h>
int main()
{
    int a,b,c,d ;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>=b&a>=c&a>=d)
    {
        printf("%d is number",a);
    }
     if (b>=a&b>=c&b>=d)
    {
        printf("%d is the number",b);
    }
     if (c>=a&c>=b&c>=d)
    {
        printf("%d is the number",c);

    }
    if (d>=a&d>=b&d>=a)
    {


        printf("%d is the number",d);
    }
    return 0;
}
