#include <stdio.h>
int main(){
    int i;
    int a,b;
    printf("choose operation\n");
    printf("1 +\n");
    printf("2 -\n");
    printf("3 *\n");
    scanf("%d", &i);
    printf("Enter number 1 and number 2\n");
    scanf("%d\n%d", &a,&b);

    switch (i) {
    case 1:
        printf("sum=%d", a+b);
        break;
    case 2:
        printf("diff=%d", a-b);
        break;
    case 3:
        printf("product=%d", a*b);
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;

}