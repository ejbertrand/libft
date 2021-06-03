#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "libft/libft.h"

int main(void)
{
    int libft_val = 3;
	int libc_val = -3;
	
	/************* ft_isalpha ****************************/
    int alpha_array[] = {'c', -6, 'b', 'f','&', '\n', 1};
    int alpha_counter = -1;

    ft_putstr_fd("ft_isalpha: ", 1);
    while (++alpha_counter < 7)
    {
        libft_val = ft_isalpha(alpha_array[alpha_counter]); 
        libc_val = isalpha(alpha_array[alpha_counter]);
        if ( libft_val == 0 && libc_val == 0)
            ft_putstr_fd("| OK ", 1);
		else if (libft_val != 0 && libc_val != 0)
			ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);

	/************* ft_isdigit ****************************/
	int digit_array[] = { '6', '0', '1','&', '\0', 1, 'c'};
    int digit_counter = -1;

    ft_putstr_fd("ft_isdigit: ", 1);
    while (++digit_counter < 7)
    {
        libft_val = ft_isdigit(digit_array[digit_counter]); 
        libc_val = isdigit(digit_array[digit_counter]);
        if ( libft_val == 0 && libc_val == 0)
            ft_putstr_fd("| OK ", 1);
		else if (libft_val != 0 && libc_val != 0)
			ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);

	/************* ft_isalnum ****************************/
	int alnum_array[] = { '6', '0', '1','&', '\0', 1, 'c', ' ', 'd', 'A', 'Z', '\n'};
    int alnum_counter = -1;

    ft_putstr_fd("ft_isalnum: ", 1);
    while (++alnum_counter < 12)
    {
        libft_val = ft_isalnum(alnum_array[alnum_counter]); 
        libc_val = isalnum(alnum_array[alnum_counter]);
        if ( libft_val == 0 && libc_val == 0)
            ft_putstr_fd("| OK ", 1);
		else if (libft_val != 0 && libc_val != 0)
			ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);

	/************* ft_isascii ****************************/
	/*int ascii_array[] = { '6', '\0', -1, 128, 'ñ', 'ç', 199};
    int ascii_counter = -1;

    ft_putstr_fd("ft_isascii: ", 1);
    while (++ascii_counter < 7)
    {
        libft_val = ft_isascii(ascii_array[ascii_counter]); 
        libc_val = isascii(ascii_array[ascii_counter]);
        if ( libft_val == 0 && libc_val == 0)
            ft_putstr_fd("| OK ", 1);
		else if (libft_val != 0 && libc_val != 0)
			ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);*/

	/************* ft_isprint ****************************/
	int print_array[] = { '6', '\0', -1, '\t', ' '};
    int print_counter = -1;

    ft_putstr_fd("ft_isprint: ", 1);
    while (++print_counter < 5)
    {
        libft_val = ft_isprint(print_array[print_counter]); 
        libc_val = isprint(print_array[print_counter]);
        if ( libft_val == 0 && libc_val == 0)
            ft_putstr_fd("| OK ", 1);
		else if (libft_val != 0 && libc_val != 0)
			ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);

	/************* ft_toupper ****************************/
	int upper_array[] = { 'c', 'D', 'a', 'z', 'W'};
    int upper_counter = -1;

    ft_putstr_fd("ft_toupper: ", 1);
    while (++upper_counter < 5)
    {
        libft_val = ft_toupper(upper_array[upper_counter]); 
        libc_val = toupper(upper_array[upper_counter]);
        if (libft_val == libc_val)
            ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);

	/************* ft_tolower ****************************/
	int lower_array[] = { 'A', 'f', 'G', 'Z', 'l'};
    int lower_counter = -1;

    ft_putstr_fd("ft_tolower: ", 1);
    while (++lower_counter < 5)
    {
        libft_val = ft_tolower(lower_array[lower_counter]); 
        libc_val = tolower(lower_array[lower_counter]);
        if (libft_val == libc_val)
            ft_putstr_fd("| OK ", 1);
        else
            ft_putstr_fd("| NOK ", 1);
    }
    ft_putstr_fd("|\n", 1);

	/************* ft_strlen ****************************/
	size_t	libft_len = ft_strlen("This is the size of my string");
	size_t	libc_len = strlen("This is the size of my string");

	ft_putstr_fd("ft_strlen:  ", 1);
	if(libft_len == libc_len)
		ft_putstr_fd("| OK ", 1);
	else
		ft_putstr_fd("| NOK ", 1);
	ft_putstr_fd("|\n", 1);

	/************* ft_strlcpy ****************************/
	char *src = "good bye";
	size_t size = 9;
	char dest[size];
	
	size_t libft_strl = ft_strlcpy(dest, src, size);
	size_t libc_strl = strlcpy(dest, src, 4);

	ft_putstr_fd("ft_strlcpy: ", 1);
	if (libft_strl == libc_strl)
		ft_putstr_fd("| OK ", 1);
	else
		ft_putstr_fd("| NOK ", 1);
	ft_putstr_fd("|\n", 1);

    return (0);
}