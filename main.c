/*
** 
** Made by Thomas LE MOULLEC
** 
** Started on  Thu Nov 12 17:47:22 2015 Thomas LE MOULLEC
** Last update Sun Nov 22 17:31:41 2015 Thomas LE MOULLEC
*/

#include <stdlib.h>
#include "struct.h"
#include "pushswap.h"

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
  int		c;

  l_a = NULL;
  l_b = NULL;
  i = 1;
  c = ac;
  while (ac > 1)
    {
      l_a = add_elem_end(l_a, my_get_nbr(av[i]));
      i++;
      ac--;
    }
  if (check_str(l_a, c) != 1)
    push_fusion(l_a, l_b, i - 1);
  my_putchar('\n');
  return (0);
}
