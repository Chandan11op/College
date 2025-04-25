//Program of #if-else-#endif Preprocessor directive.
#include<stdio.h>
#include<conio.h>
#define MAX 50 
int main()
{
    #if MAX>20
    printf("Yes, MAX is greater than 20.");
    #else
    printf("No,MAX is not greater than 20.");
    #endif
    getch(); 
    return 0; 
}
