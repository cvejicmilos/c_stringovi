#include <stdio.h>
#include <ctype.h>
#define MAX_VELICINA 50

// isto kao u zadatku 2, ali koriscenjem funkcije isaplha
// ako se koristi isalpha obavezno mora da se uradi #include <ctype>
void izbaciSlova(char s[]) {
    int j = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isalpha(s[i])) {
            s[j] = s[i];
	    j++;
        }
    }
    
    s[j] = '\0';
}

int main() {
    char s[MAX_VELICINA];
    
    scanf("%s", s);

    izbaciSlova(s);
    
    printf("%s\n", s);
    
    return 0;
}