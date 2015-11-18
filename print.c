/*
** printf.c for print.c in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Mon Nov 16 11:33:30 2015 Thomas LE MOULLEC
** Last update Wed Nov 18 09:04:25 2015 Thomas LE MOULLEC
*/

#include "struct.h"
#include "pushswap.h"

void	put_id(t_chaine *l_a)
{
  int   i;

  i = 0;
  while (l_a->id == 0)
    {
      l_a->id = i;
      l_a = l_a->next;
      i++;
    }
  l_a->prev->id = 0;
}

void    disp_elem(t_chaine *l_a, int id)
{
  int   c;

  c = id;
  put_id(l_a);
  while (c != l_a->id)
    {
      c = id - 1;
      printf("%d ", l_a->data);
      l_a = l_a->next;
    }
}
