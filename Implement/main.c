/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include "src/binary.h"
#include "src/octal.h"
#include "src/hexadecimal.h"
#include "src/bcd.h"
#include "src/xs.h"
#include "src/gray.h"

/**
 * @brief Main function
 * 
 * @return int 
 */
int main()
{
    /**
     * @brief Binary conversion code
     * 
     */
    Input_bin bin;
    Conversion_bin res_bin;
    bin.num = 0;
    bin.base = 2;
    res_bin = transformBinary(bin);
    int u = res_bin.arr_l;
    printf("Binary form: ");
    for (int i = u - 1; i >= 0; i--)
    {
        printf("%d", *(res_bin.binary_op + i));
    }
    free(res_bin.binary_op);

    /**
     * @brief Octal conversion code
     * 
     */
    Input_oct oct;
    Conversion_oct res_oct;
    oct.num = 0;
    oct.base = 8;
    res_oct = transformOct(oct);
    int v = res_oct.arr_l;
    printf("\nOctal form: ");
    for (int i = v - 1; i >= 0; i--)
    {
        printf("%d", *(res_oct.octal_op + i));
    }
    
    /**
     * @brief Hexadecimal conversion code
     * 
     */
    Input_hex hexa;
    Conversion_hex res_hexa;
    hexa.num = 0;
    hexa.base = 16;
    res_hexa = transformHexadecimal(hexa);
    int w = res_hexa.arr_l;
    printf("\nHexadecimal form: ");
    for (int i = w - 1; i >= 0; i--)
    {
        printf("%c", *(res_hexa.hexadecimal_op + i));
    }

    /**
     * @brief BCD conversion code
     * 
     */
    Input_bcd bcd;
    Conversion_bcd res_bcd;
    bcd.num = 0;
    res_bcd = transformBcd(bcd);
    int x = res_bcd.arr_l;
    printf("\nBinary Coded Decimal (BCD) form: ");
    for (int i = x - 1; i >= 0; i--)
    {
        printf("%d", *(res_bcd.bcd_op + i));
    }

    /**
     * @brief XS-3 conversion code
     * 
     */
    Input_xs xs;
    Conversion_xs res_xs;
    xs.num = 0;
    res_xs = transformXS(xs);
    int y = res_xs.arr_l;
    printf("\nExcess-3 (XS-3) form: ");
    for (int i = y - 1; i >= 0; i--)
    {
        printf("%d", *(res_xs.xs_op + i));
    }

    /**
     * @brief Gray conversion code
     * 
     */
    Input_gray gray;
    Conversion_gray res_gray;
    gray.num = 0;
    res_gray = transformGray(gray);
    int z = res_gray.arr_l;
    printf("\nGray form: ");
    for (int i = z - 1; i >= 0; i--)
    {
        printf("%d", *(res_gray.gray_op + i));
    }
}
