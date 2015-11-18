/*
** main.c for main.c in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Thu Nov 12 17:47:22 2015 Thomas LE MOULLEC
** Last update Wed Nov 18 11:27:33 2015 Thomas LE MOULLEC
*/

#include <stdlib.h>
#include "struct.h"
#include "pushswap.h"

void	swap_elem(t_chaine *l_a)
{
  int	d;

  d = l_a->data;
  l_a->data = l_a->next->data;
  l_a->next->data = d;
}

t_chaine	*rrotate(t_chaine *l_a)
{
  l_a = l_a->prev;
  return (l_a);
}

t_chaine	*rotate(t_chaine *l_a)
{
  l_a = l_a->next;
  return (l_a);
}

t_chaine	*pa(t_chaine **l_b, t_chaine *l_a)
{
  l_a = add_elem_end(l_a, (*l_b)->data);
  if ((*l_b)->next != (*l_b))
    {
      (*l_b)->prev->next = (*l_b)->next;
      (*l_b)->next->prev = (*l_b)->prev;
      (*l_b) = (*l_b)->next;
    }
  else
    (*l_b)->data = 0;
  l_a = rrotate(l_a);
  return (l_a);
}

t_chaine	*pb(t_chaine **l_a, t_chaine *l_b)
{
  l_b = add_elem_end(l_b, (*l_a)->data);
  if ((*l_a)->next != (*l_a))
    {
      (*l_a)->prev->next = (*l_a)->next;
      (*l_a)->next->prev = (*l_a)->prev;
      (*l_a) = (*l_a)->next;
    }
  else
    (*l_a)->data = 0;
  l_b = rrotate(l_b);
  return (l_b);
}

int	main(int ac, char **av)
{
  t_chaine	*l_a;
  t_chaine	*l_b;
  int		i;

  if (ac <= 1)
    return (1);
  l_a = NULL;
  l_b = NULL;
  i = 1;
  while (ac > 1)
    {
      l_a = add_elem_end(l_a, my_get_nbr(av[i]));
      i++;
      ac--;
    }
  push_fusion(l_a, l_b);
}
