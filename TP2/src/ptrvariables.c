#include <stdio.h>
#include <stdint.h>

int main() {
    char c = 'A';
    short s = 123;
    int i = 1000;
    long int l = 50000;
    long long int ll = 9000000000;
    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.6180339887L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("----- AVANT MANIPULATION -----\n");
    printf("Adresse de c : %p | Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p | Valeur : %04hx\n", (void*)ps, s);
    printf("Adresse de i : %p | Valeur : %08x\n", (void*)pi, i);
    printf("Adresse de l : %p | Valeur : %016lx\n", (void*)pl, l);
    printf("Adresse de ll: %p | Valeur : %016llx\n", (void*)pll, ll);

    printf("Adresse de f : %p | Valeur : %08x\n", (void*)pf, *(uint32_t*)pf);
    printf("Adresse de d : %p | Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld: %p | Valeur : %016llx (partie basse)\n\n", (void*)pld, *(unsigned long long*)pld);

    *pc = 'Z';
    *ps = 456;
    *pi = 2000;
    *pl = 123456;
    *pll = 1234567890123;
    *pf = 1.0f;
    *pd = 3.14159265;
    *pld = 2.718281828459;

    printf("----- APRES MANIPULATION -----\n");
    printf("Adresse de c : %p | Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p | Valeur : %04hx\n", (void*)ps, s);
    printf("Adresse de i : %p | Valeur : %08x\n", (void*)pi, i);
    printf("Adresse de l : %p | Valeur : %016lx\n", (void*)pl, l);
    printf("Adresse de ll: %p | Valeur : %016llx\n", (void*)pll, ll);

    printf("Adresse de f : %p | Valeur : %08x\n", (void*)pf, *(uint32_t*)pf);
    printf("Adresse de d : %p | Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld: %p | Valeur : %016llx (partie basse)\n", (void*)pld, *(unsigned long long*)pld);

    return 0;
}


