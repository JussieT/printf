#include <stdio.h>
#include <stdarg.h>
/*the function _printf takes a format string and a variable number of arguments using the stdarg.h header.     */

int _printf(const char *format, ...);

int main(void)
{
    _printf("Hello, %c\n", 'W');
    _printf("This is a %s\n", "test");
    _printf("%%\n");
    return 0;
}

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    {
                        char *str = va_arg(args, char *);
                        while (*str != '\0') {
                            putchar(*str);
                            str++;
                            count++;
                        }
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

