#include <stdio.h>
#include <ctype.h>
#define MAX_VELICINA 50

void ukloni_slova(char s[]) {
    // j oznacava poslednju poziciju u izmenjenom stringu
    int j = 0;
    // prolazimo kroz string
    for (int i = 0; s[i]; i++) {
        // ako karakter nije slovo, sacuvamo ga, a u suprotnom ga "pregazimo"
        if (! ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) ) {
            s[j] = s[i];
            j++;
        }
    }

    // OBAVEZNO!!!
    // u suprotnom ce s biti string koji na pocetku ima sve karaktere koji nisu slova,
    // a ne znamo sta ce biti karakteri posle pozicije j
    // na ovaj nacin "skracujemo" string
    s[j] = '\0';
}

int main() {
    // delarisemo i ucitamo s
    char s[MAX_VELICINA];
    scanf("%s", s);

    // pozovemo funkciju
    ukloni_slova(s);

    // ispisemo izmenjen string s
    printf("%s\n", s);

    return 0;
}