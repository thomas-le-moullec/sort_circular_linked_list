/*
** 
** Made by Thomas LE MOULLEC
** 
** Started on  Mon Nov 16 16:56:32 2015 Thomas LE MOULLEC
** Last update Sun Nov 22 17:32:04 2015 Thomas LE MOULLEC
*/

#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "pushswap.h"

int	check_str(t_chaine *l_a, int cmpt)
{
  int	i;

  i = 0;
  while (cmpt - 1 > 1)
    {
      if ((l_a->data) > (l_a->next->data))
	return (i);
      l_a = l_a->next;
      cmpt--;
    }
  i = 1;
  return (i);
}

void	push_fusion(t_chaine *l_a, t_chaine *l_b, int ac)
{
  int	a;
  int	stock;

  a = 0;
  while (a == 0)
    {
      stock = ac;
      a = 1;
      while (stock > 0)
	{
	  if (l_a->data > l_a->next->data)
	    {
	      swap_elem(l_a);
	      write(1, "sa ", 3);
	      a = 0;
	    }
	  l_b = pb(&l_a, l_b);
	  stock--;
	  write(1, "pb ", 3);
	}
      stock = ac;
      l_a = NULL;
      a = push_terminator(&l_a, &l_b, a, stock);
      l_b = NULL;
    }
}

int	push_terminator(t_chaine **l_a, t_chaine **l_b, int a, int stock)
{
  while (stock > 0)
    {
      if ((*l_b)->data < (*l_b)->next->data)
	{
	  swap_elem((*l_b));
	  write(1, "sb ", 3);
	  a = 0;
	}
      (*l_a) = pa(l_b, (*l_a));
      if (a == 1 && stock == 1)
	write (1, "pa", 2);
      else
	write (1, "pa ", 3);
      stock--;
    }
  return (a);
}

void    swap_elem(t_chaine *l_a)
{
  int   d;

  d = l_a->data;
  l_a->data = l_a->next->data;
  l_a->next->data = d;
}
