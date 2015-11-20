/*
** tri.c for tri.c in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Mon Nov 16 16:56:32 2015 Thomas LE MOULLEC
** Last update Fri Nov 20 23:38:29 2015 Thomas LE MOULLEC
*/

#include <stdlib.h>
#include "struct.h"
#include "pushswap.h"

void	push_fusion(t_chaine *l_a, t_chaine *l_b)
{
  int	a;

  a = 0;
  while (a == 0)
    {
      a = 1;
      while (l_a->next->data != 0 && l_a->prev->data != 0)
	{
	  if (l_a->data > l_a->next->data)
	    {
	      swap_elem(l_a);
	      write(1, "sa ", 3);
	      a = 0;
	    }
	  l_b = pb(&l_a, l_b);
	  write(1, "pb ", 3);
	}
      l_a = NULL;
      a = push_terminator(&l_a, &l_b, a);
      l_b = NULL;
    }
  disp_elem(l_a, l_a->id + 1);
}

int	push_terminator(t_chaine **l_a, t_chaine **l_b, int a)
{
  while ((*l_b)->next->data != 0 && (*l_b)->prev->data != 0)
    {
      if ((*l_b)->data < (*l_b)->next->data)
	{
	  swap_elem((*l_b));
	  write(1, "sb ", 3);
	  a = 0;
	}
      (*l_a) = pa(l_b, (*l_a));
      if (a == 1 && ((*l_b)->data == 0))
	write (1, "pa", 2);
      else
	write (1, "pa ", 3);
    }
  return (a);
}

int	check_str(char *str)
{
  int	i;
  int	check;

  check = 0;
  i = 0;
  if (str[i] == '-')
    i++;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '0')
	check = 1;
      i++;
    }
  return (check);
}
