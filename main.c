#include "main.h"
int main(int argc, char **argv){
    if(argc!=1){ fprintf(stderr,"Usage format %s", argv[0]);return 1;}
    createCalculator();
    return 0;
}