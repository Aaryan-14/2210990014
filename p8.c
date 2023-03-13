#include <stdio.h>
int main(){
    int a,b;
    printf("Please Enter Your Group ID: ");
    scanf("%d", &a);
    switch (a) {
        //For Range
        //case 75...100:(75 and 100 included)
        case 15:
        case 17:
        case 19:
            printf("Enter your RollNO: ");
            scanf("%d", &b);
            switch (b) {
                case 1 ... 5:
                    printf("Welcome to CSE");
                    break;
                default:
                    printf("Incorrect Roll NO");
                    break;
            }
            break;
        default:
            printf("Incoorect Group ID");
            break;
    }
    return 0;
}