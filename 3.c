#include <stdio.h>

int main() {
    char c;
    // broj_space oznacava koliko uzastopnih karaktera space smo procitali
    int broj_space = 0;

    while ((c = getchar()) != '\n') { // na ovaj nacin ucitamo c i onda proveravamo da to nije znak za novu liniju (enter); OBRATI PAZNJU NA ZAGRADE
        // proverimo da li smo ucitali space i ako jesmo, ne ispisujemo ga, vec uvecamo brojac
        if (c == ' ') {
            broj_space++;
        } else {
            // ako prethodi karakter space, ili niz karaktera space
            if (broj_space > 0) {
                // ispisemo *
                putchar('*');
                // postavimo broj_space na 0 i time oznacimo da smo obradili niz space-ova
                broj_space = 0;
            }
            // ispisemo karakter koji smo procitali
            putchar(c);
        }
    }

    // OBAVEZNO
    // ovime obradjujemo i slucaj u kome je space na kraju stringa
    if (broj_space > 0) {
        putchar('*');
    }

    // dodamo karakter za novi red radi preglednosti
    printf("\n");

    return 0;
}