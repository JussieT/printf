# ALX Software Engineering Printf Team Project

This project, known as `_printf`, introduces a custom printf function for the C programming language. It's designed to efficiently process various inputs and optional arguments, closely resembling the behavior of the standard library function `printf`. The submission of this project fulfills the requirements of the ALX Software Engineering course.

## Synopsis
The `_printf()` function writes output to `stdout`, the standard output stream, with specified formats and options, all without relying on standard library files. It employs a local buffer of 1024 bytes for printing while being capable of handling larger datasets.

Upon successful execution, `_printf()` returns the total number of characters printed to `stdout`, excluding the null byte at the end of strings. In the case of an output error, it returns a negative value of -1.

The function prototype is defined as follows: `int _printf(const char *format, ...);`

This indicates that the function requires at least one mandatory format argument and allows for an additional number of arguments, which can be none or many.

## Format of the Format String
The format string is a character string enclosed in double quotes. It consists of zero or more directives, including ordinary characters (not preceded by `%`) and conversion specifications, each of which may require fetching zero or more subsequent arguments.

Each conversion specification starts with the character `%` and concludes with a conversion specifier. Between these elements, there may be, in the following order:

- Zero or more flags
- An optional field width
- An optional precision modifier
- An optional length modifier

### Conversion Specifiers
| Specifier | Description |
| --------- | ----------- |
| `d`, `i`  | Converts an `int` argument to signed decimal notation. |
| `o`, `u`, `x`, `X` | Converts an argument to unsigned octal (`o`), decimal (`u`), or hexadecimal (`x` and `X`) notation. |
| `c`       | Converts an `int` argument to an unsigned char and writes the resulting character. |
| `s`       | Expects an argument as a pointer to a `char*` array and prints characters up to (but not including) a null byte (`'\0'`). |
| `p`       | Prints a `void*` pointer argument as hexadecimal in lower case, representing an address in memory. |
| `%`       | Writes a `%` character without conversion (`%%`). |
| `b`       | Converts an argument to an unsigned int value and then to its binary representation (base 2). |
| `S`       | Expects an argument as a pointer to a `char*` array and prints characters up to (but not including) a null byte (`'\0'`). Non-printable characters are represented as `\x` followed by the ASCII code value in hexadecimal (uppercase, always 2 characters). |
| `r`       | Expects an argument as a pointer to a `char*` array and prints characters in reverse order up to (but not including) a null byte (`'\0'`). |
| `R`       | Expects an argument as a pointer to a `char*` array and prints characters encoded to ROT13 in order up to (but not including) a null byte (`'\0'`).

This comprehensive overview outlines the features, functionalities, and usage specifications of the `_printf` function, providing developers with valuable insights for its implementation and utilization in C programming projects.

