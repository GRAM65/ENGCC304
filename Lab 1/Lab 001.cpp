#include <stdio.h>

int main() 
{
    char Name[50] ;
    int  Age ;
    printf( "Please enter your name: " );
    scanf( "%s", Name);
    printf( "Please enter your age: " ) ;
    scanf("%d", &Age);
    printf("- - - - - -\n");
    printf("Hello %s\n", Name); 
    printf("Age = %d\n", Age); 
    
    return 0;
}