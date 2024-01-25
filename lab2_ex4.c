#include <stdio.h>
#include <string.h>

int main() {
    
    char name[29]; 

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  


    printf("Hello %s, have a nice day!\n", name);

    return 0;
}