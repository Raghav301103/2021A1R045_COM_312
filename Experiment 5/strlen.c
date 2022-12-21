#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
 
   
    printf("Enter the string: ");
    scanf("%s", str); 
    
  
    int length;
    
    
    length = strlen(str); 
    
    
    printf("The length of the string is %d ", length);
    printf("\n\n"); 
 
    return 0;
}

