#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[64]; // buffer with 64 bytes
    strcpy(buffer, input);  // Vulnerable line
}

int main() {
    char user_input[128]; // buffer with 128 bytes
    printf("Enter some text: ");
    gets(user_input);  // Unsafe function, vulnerable to overflow
    vulnerable_function(user_input); // Call to vulnerable function
    return 0;
}
