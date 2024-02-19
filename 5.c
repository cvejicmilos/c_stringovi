#include <stdio.h>
#include <ctype.h>  // obavezno ako se koristi isalnum
#include <string.h>
#define MAX_VELICINA 500

int palindrom(char s[]) {
    int duzina = strlen(s);

    // postavimo i na pocetak, a j na kraj niske
    for (int i = 0, j = duzina - 1; i < j; i++, j--) {
        // preskacemo karaktere koji nisu slova ili brojevi(na primer tacka, zarez i slicne)
        while (i < duzina && !isalnum(s[i]))
            i++;
        while (j >= 0 && !isalnum(s[j]))
            j--;

        // ako se ne podudaraju karakteri na pozicijama i, j onda to nije palindrom
        if (s[i] != s[j]) {
            return 0;
        }
    }

    // nismo uspeli da dokazemo da nije palindrom, dakle dati string je palindrom
    return 1;
}

int main() {
    // deklarisemo i ucitamo string
    char s[MAX_VELICINA];
    scanf("%s", s);

    // ispisemo da li je palindrom
    if (palindrom(s)) {
        printf("Rečenica je palindrom.\n");
    } else {
        printf("Rečenica nije palindrom.\n");
    }

    return 0;
}