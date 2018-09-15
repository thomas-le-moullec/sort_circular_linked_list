/*
** 
** Made by Thomas LE MOULLEC
** 
** Started on  Thu Oct 15 14:27:19 2015 Thomas LE MOULLEC
** Last update Thu Oct 15 17:32:02 2015 Thomas LE MOULLEC
*/

int	my_get_nbr(char *str)
{
  int	i;
  int	c;
  int	nb;

  nb = 0;
  c = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && (str[i] != '+' && str[i] != '-'))
        return (0);
      while (str[i] == '+' || str[i] == '-')
	if (str[i++] == '-')
	  c++;
      while (str[i] >= '0' && str[i] <= '9')
	{
	  nb = (nb + str[i] - '0') * 10;
	  i++;
	}
    }
  if (c % 2 == 1)
    nb = -nb;
  return (nb / 10);
}
