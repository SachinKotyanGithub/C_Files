#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct {
    uint32_t year:23;
    uint32_t day:5;
    uint32_t month:4;
	} typedef Bitfield;

union {
    struct {
        uint32_t year:23;
        uint32_t day:5;
        uint32_t month:4;
    };
    uint32_t ydm;
} typedef BitfieldFast;


int main() {
    BitfieldFast date_f;
    date_f.ydm = 2020 | (13 << 23) | (12 << 28);

    printf("sizeof BitfieldFast: %lu bytes\n", sizeof(date_f));
    printf("date_f: %d/%d/%d \n", date_f.day, date_f.month, date_f.year);


    Bitfield date = {2020, 13,12 };

    printf("sizeof Bitfield: %lu bytes\n", sizeof(date));
    printf("date: %d/%d/%d \n", date.day, date.month, date.year);

    return EXIT_SUCCESS;
}
