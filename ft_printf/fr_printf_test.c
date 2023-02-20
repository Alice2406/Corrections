
#include <stdio.h>
#include <stddef.h>
#include "ft_printf.h"

int    main(void)
{
    char    c;
    int        len;

    c = 'x';
    len = ft_printf("%x", 12);
    printf(" | len = %d\n", len);

    len = ft_printf("%%");
    printf(" | len = %d\n", len);

    len = ft_printf("%c", 'a');
    printf(" | len = %d\n", len);

    len = ft_printf("%s", NULL);
    printf(" | len = %d\n", len);

    len = ft_printf("%p", &c);
    printf(" | len = %d\n", len);

    len = ft_printf("%i", 42);
    printf(" | len = %d\n", len);

    len = ft_printf("%d", -42);
    printf(" | len = %d\n", len);

    len = ft_printf("%u", -52);
    printf(" | len = %d\n", len);

    len = ft_printf("%x", 5);
    printf(" | len = %d\n", len);
    
    len = ft_printf("%x", 16);
    printf(" | len = %d\n", len);
    
    len = printf("%x", 16);
    printf(" | len = %d\n", len);
    len = ft_printf("Crash: %s", 42);
    return (0);
}