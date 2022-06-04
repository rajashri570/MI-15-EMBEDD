#include <stdio.h>
int main()
{
    printf("                    Type 	            Storage size 	             Value range\n
                char 	            1 byte 	                     -128 to 127 or 0 to 255\n
                unsigned char 	    1 byte 	                      0 to 255\n
                signed char 	    1 byte 	                     -128 to 127\n
                int 	            2 or 4 bytes 	             -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647\n
                unsigned int 	    2 or 4 bytes 	              0 to 65,535 or 0 to 4,294,967,295\n
                short 	            2 bytes 	                 -32,768 to 32,767\n
                unsigned short 	    2 bytes 	                  0 to 65,535\n
                long 	            8/4 Byte for 64/32 bit OS    -9223372036854775808 to 9223372036854775807 \n
                unsigned long 	    8 bytes 	                  0 to 18446744073709551615\n
                ");
}
