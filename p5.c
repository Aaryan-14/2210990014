#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    a=getchar();
    if (isupper(a)) {
        printf("%c", a+32); 
    } else {
        printf("%c", a-32);
    }
    
    return 0;
}