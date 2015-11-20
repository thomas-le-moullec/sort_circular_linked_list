/*
** pushswap.h for pushswap.h in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Thu Nov 12 16:29:32 2015 Thomas LE MOULLEC
** Last update Fri Nov 20 23:28:48 2015 Thomas LE MOULLEC
*/

#include "struct.h"

void		put_id(t_chaine *l_a);
void		disp_elem(t_chaine *l_a, int id);

void		swap_elem(t_chaine *l_a);
void		push_fusion(t_chaine *l_a, t_chaine *l_b);
int		push_terminator(t_chaine **l_a, t_chaine **l_b, int a);
int		check_str(char *str);

t_chaine        *rotate(t_chaine *l_a);
t_chaine        *pb(t_chaine **l_a, t_chaine *l_b);
t_chaine        *pa(t_chaine **l_b, t_chaine *l_a);
t_chaine        *add_elem_begin(t_chaine *l_a, int value);
t_chaine        *add_elem_end(t_chaine *l_a, int value);
