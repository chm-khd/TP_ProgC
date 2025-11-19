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
    printf("Adresse de i : %p | Valeur : %08x\n"
