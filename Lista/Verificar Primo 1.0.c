#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void primo(int num, int numTeste) {
    if (num % 2 == 0 || num == 0 || num == 1) printf ("0a\n");
    else if (!(num % numTeste) || num == 2) {
        if (num == 2) {
            printf ("1a\n");
        }
        else if (num % numTeste == 0 && numTeste > 1 && numTeste != num) {
            printf ("0\n"); return;
        }
        printf ("1\n"); return;
    }
    else 
        primo (num, numTeste - 2);
}

void inputs () {
    int n;
    scanf ("%d", &n);
    if (n == -1) return;
    
    primo (n, n - 2);

    inputs ();
}

int main(){
    inputs ();
}