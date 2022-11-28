#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
    FILE *file; //fichier
    uint8_t d;  //donnees
    int n; // nombre
    char m; // mode
} BFILE;

BFILE *bstart(FILE *fichier, const char *mode);

int bstop(BFILE *fichier);

char bitread(BFILE *fichier);

int bitwrite(BFILE *fichier, char bit);

int beof(BFILE *fichier);