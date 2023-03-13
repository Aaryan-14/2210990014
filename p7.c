#include <stdio.h>
int main(){
    int a;
    printf("Enter marks(0-100)\n");
    scanf("%d", &a);
    int b;
    b=a/10;
    switch (b) {
        //For Range
        //case 75...100:(75 and 100 included)
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        default:
            printf("F");
            break;
    }
    return 0;
}