#include <stdio.h>

int main(void) {
        int i = 0;

        FILE *bin = fopen("nop.bin", "w");
        for (i = 0; i < 32768; i++)
        {
                if (putc(0xea, bin) == EOF)
                {
                        printf("Error while creating the binary file: EOF\n");
                        break;
                }
        }
        if (i == 32768)
        {
                printf("created file 'nop.bin' YAY!\n");
        }

        return 1;
}
