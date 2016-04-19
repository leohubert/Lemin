/*
** check_start_end.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Mon Apr 18 17:38:22 2016 boris saint-bonnet
** Last update Tue Apr 19 15:04:23 2016 boris saint-bonnet
*/

#include "lemin.h"

t_graph	*push_start_link(t_graph *list, char *str)
{
  return (list = push_start_to_list(list, str));
}

t_graph	*push_end_link(t_graph *list, char *str)
{
  return (list = push_end_to_list(list, str));
}

int	check_start_end(char *str)
{
  char	**tab;

  tab = my_str_to_wordtab(str, ' ');
  if (my_strncmp(tab[0], "##start", my_strlen("##start"))
      && my_strlen(tab[0]) == my_strlen("##start"))
    return (1);
  else if (my_strncmp(tab[0], "##end", my_strlen("##end"))
	   && my_strlen(tab[0]) == my_strlen("##end"))
    return (2);
  return (0);
}