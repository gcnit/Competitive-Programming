  #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>

    typedef unsigned int uint;

    #define INVALID_HIGH 20000
    #define INVALID_LOW -1
    #define min(a, b) (a < b ? a : b)
    #define max(a, b) (a > b ? a : b)
    #define getDist(ax, ay, bx, by) sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by))

    #define INBUF_SIZE 200000000
    #define inbuf_skipWhitespace() while (*inbufp < '0' || *inbufp > '9') inbufp++;

    char inbuf[INBUF_SIZE];
    char *inbufp = inbuf;

    void inbuf_readAll(void) {
    ssize_t nread = 0, ntotal = 0;

    while ((nread = read(STDIN_FILENO, inbufp, INBUF_SIZE-ntotal)) > 0 && ntotal < INBUF_SIZE) {
    inbufp += nread;
    ntotal += nread;
    }

    inbufp = inbuf;
    }

    inline unsigned int inbuf_getUInt(void) {
    inbuf_skipWhitespace();
    unsigned int res = 0;

    while (*inbufp >= '0') {
    res *= 10;
    res += *inbufp - '0';
    inbufp++;
    }

    return res;
    }

    int main(int argc, char *argv[]) {
    int ncases, npoints, i, outerPoints[10000+1][2];
    register int x, y, prevX, prevY;

    inbuf_readAll();

    ncases = inbuf_getUInt();
    while (ncases-- > 0) {
    for (i = 0; i < 10000+1; ++i) {
    outerPoints[i][0] = INVALID_HIGH;
    outerPoints[i][1] = INVALID_LOW;
    }
    npoints = inbuf_getUInt();
    while (npoints-- > 0) {
    x = inbuf_getUInt();
    y = inbuf_getUInt();
    outerPoints[x][0] = min(outerPoints[x][0], y);
    outerPoints[x][1] = max(outerPoints[x][1], y);
    }

    prevX = prevY = -1;
    double dist = 0.0;
    for (x = 0; x < 10000+1; ++x) {
    if (outerPoints[x][0] == INVALID_HIGH)
    continue;
    if (prevX != -1)
    dist += getDist(x, outerPoints[x][1], prevX, prevY);
    dist += outerPoints[x][1] - outerPoints[x][0];
    prevX = x;
    prevY = outerPoints[x][0];
    }

    printf("%.2f\n", dist);
    }

    return 0;
    }
