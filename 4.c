#include <stdio.h>
#include <string.h>
#define MAX_VELICINA 50

int palindrom(char s[]) {
    int duzina = strlen(s);

    // postavimo i na pocetak, a j na kraj niske
    for (int i = 0, j = duzina - 1; i < j; i++, j--) {
        // ako se ne podudaraju karakteri na pozicijama i, j onda to nije palindrom
        if (s[i] != s[j]) {
            return 0;
        }
    }

    // nismo uspeli da dokazemo da nije palindrom, dakle dati string je palindrom
    return 1;
}

int main() {
    // deklarisemo i ucitamo nisku
    char s[MAX_VELICINA];
    scanf("%s", s);

    // ispisemo da li je palindrom
    if (palindrom(s)) {
        printf("%s jeste palindrom.\n", s);
    } else {
        printf("%s nije palindrom.\n", s);
    }

    return 0;
}