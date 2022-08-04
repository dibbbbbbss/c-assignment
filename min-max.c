#include <stdio.h>

// with omments
int main()
{

    printf("enter two numbers \n");
    int a;
    int b;
    scanf("%d",&a );
    scanf("%d",&b );

    if(a>b) {
        printf("%d is the max number, and %d is the min number",a,b);
    } else if(b>a) {
        printf(" %d is the max number , and %d is the min number",b,a);

    } else {
        printf("error");
    }


    return 0;
}
