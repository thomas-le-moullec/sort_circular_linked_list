/*
** pushswap.h for pushswap.h in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Thu Nov 12 16:29:32 2015 Thomas LE MOULLEC
** Last update Sun Nov 22 17:12:59 2015 Thomas LE MOULLEC
*/

#include "struct.h"

void		my_putchar(char c);
int		my_get_nbr(char *str);
int		check_str(t_chaine *l_a, int cmpt);

void		swap_elem(t_chaine *l_a);
void		push_fusion(t_chaine *l_a, t_chaine *l_b, int ac);
int		push_terminator(t_chaine **l_a, t_chaine **l_b, int a, int stock);

t_chaine        *rotate(t_chaine *l_a);
t_chaine        *pb(t_chaine **l_a, t_chaine *l_b);
t_chaine        *pa(t_chaine **l_b, t_chaine *l_a);
t_chaine        *add_elem_begin(t_chaine *l_a, int value);
t_chaine        *add_elem_end(t_chaine *l_a, int value);
