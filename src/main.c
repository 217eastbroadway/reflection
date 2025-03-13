#include <stdio.h>
#include <stdlib.h>
#include <bzlib/bzlib.h>

int main() {
    char buf[32] = "some sample text you might like.";

    int nBuf;
    
    int bzerror;
    int nwritten;

    FILE *c = fopen("a.bz2", "w");
    BZFILE *b = BZ2_bzWriteOpen(&bzerror, c, 1, 0, 30);
    BZ2_bzWrite(&bzerror, b, buf, strlen(buf) + 1);
    BZ2_bzWriteClose(&bzerror, b, 0, 0, 0);

    fclose(c);
}