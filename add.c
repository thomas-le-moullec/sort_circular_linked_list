/*
** add.c for add.c in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Mon Nov 16 11:23:53 2015 Thomas LE MOULLEC
** Last update Wed Nov 18 10:02:12 2015 Thomas LE MOULLEC
*/

#include "./struct.h"
#include "pushswap.h"

t_chaine        *add_elem_begin(t_chaine *l_a, int value)
{
  t_chaine      *new;

  if ((new = malloc(sizeof(*new))) == NULL)
    return (NULL);
  new->data = value;
  if (l_a == NULL)
    {
      new->next = new;
      new->prev = new;
      l_a = new;
    }
  else
    {
      new->next = l_a;
      new->prev = l_a->prev;
      l_a->prev = new;
      l_a = new;
    }
  return (l_a);
}

t_chaine        *add_elem_end(t_chaine *l_a, int value)
{
  t_chaine      *new;

  if ((new = malloc(sizeof(*new))) == NULL)
    return (NULL);
  new->data = value;
  if (l_a == NULL)
    {
      new->next = new;
      new->prev = new;
      l_a = new;
    }
  else
    {
      new->next = l_a;
      new->prev = l_a->prev;
      l_a->prev->next = new;
      l_a->prev = new;
    }
  return (l_a);
}
