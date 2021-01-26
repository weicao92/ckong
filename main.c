#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "str.h"


int main(){
    str_t test;

    test.data =(uint8_t*) malloc(32);
    test.len = 32;
    uint8_t b = 3;
    uint8_t c = 3;
    const uint8_t* a = &b;
    uint8_t * const a2 = &b;


    return 0;
}