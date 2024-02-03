#include "main.h"
#include <stdarg.h>


 /* a _printf function which takes a format string and a variable number of arguments, 
 then processes the format string to identify conversion specifiers and print the corresponding values. */


 
 
int _printf(const char *format, ...)
{
    va_list args;
    int len = 0;
    convert_match m[] = {
        {"%s", printf_string},
        {"%c", printf_char},
        {"%%", printf_37},
        {"%i", printf_int},
        {"%d", printf_dec},
        {"%r", printf_srev},
        {"%R", printf_rot13},
        {"%b", printf_bin},
        {"%u", printf_unsigned},
        {"%o", printf_oct},
        {"%x", printf_hex},
        {"%X", printf_HEX},
        {"%S", printf_exclusive_string},
        {"%p", printf_pointer}
    };
// Interating through the format string...
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(args, format);

    for (; *format != '\0'; ++format)
    {
        if (*format == '%')
        {
            int j;
            for (j = 0; j < 14; ++j)
            {
                if (m[j].id[0] == format[0] && m[j].id[1] == format[1])
                {
                    len += m[j].f(args);
                    format += 2;
                    break;
                }
            }
            if (j == 14)
            {
                _putchar(*format);
                ++len;
            }
        }
        else
        {
            _putchar(*format);
            ++len;
        }
    }

    va_end(args);
    return (len);
}

