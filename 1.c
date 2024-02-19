#include <stdio.h>
#define MAX_DUZINA 50

int podniska(char s[], char t[]) {
    // prolazimo kroz prvu nisku
    for (int i = 0; s[i]; i++) {
        int j = 0;
        // dok se podudaraju slova uvecavamo j
        while (t[j] != '\0' && s[i+j] != '\0' && s[i + j] == t[j]) {
            j++;
        }

        // ako smo stigli do kraja druge reci, zakljucujemo da je t podniska s
        if (t[j] == '\0') {
            return 1;
        }
    }

    // prosli smo kroz celu rec s i nismo dokazali da je t podniska od s => vracamo 0 (false)
    return 0;
}

int main() {
    // deklarisemo niske
    char s[MAX_DUZINA];
    char t[MAX_DUZINA];

    // ucitamo niske
    scanf("%s", s);
    scanf("%s", t);

    // pozovemo funkciju i ispisemo rezultat
    if (podniska(s, t)) {
        printf("Jeste\n");
    } else {
        printf("Nije\n");
    }

    return 0;
}
