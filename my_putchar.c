/*
** 
** Made by Thomas LE MOULLEC
** 
** Started on  Tue Oct  6 11:19:23 2015 Thomas LE MOULLEC
** Last update Sun Nov 22 12:03:18 2015 Thomas LE MOULLEC
*/

#include <stdlib.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
