#include <stdio.h>
#define MAX_VELICINA 50

// nema potrebe ni da se objasnjava :)
int main() {
    char s[MAX_VELICINA];
    char c;
    int indeks = -1;

    scanf("%s", s);

    scanf(" %c", &c);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
		indeks = i;
            break;
        }
    }

    printf("%d\n", indeks);

    return 0;
}
