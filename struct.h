/*
** struct.h for struct.H in /home/le-mou_t/rendu/CPE_2015_Pushswap
** 
** Made by Thomas LE MOULLEC
** Login   <le-mou_t@epitech.net>
** 
** Started on  Thu Nov 12 11:15:25 2015 Thomas LE MOULLEC
** Last update Wed Nov 18 11:28:41 2015 Thomas LE MOULLEC
*/

#include <stdio.h>
#include <stdlib.h>
#ifndef		LIST_H_
# define	LIST_H_

typedef	struct	s_chaine
{
  int			id;
  int			data;
  struct s_chaine	*next;
  struct s_chaine	*prev;
}		t_chaine;

#endif
