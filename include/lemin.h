/*
** lemin.h for lamin in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:53 2016 Lucas Gambini
** Last update Fri Apr 22 18:04:16 2016 boris saint-bonnet
*/

#ifndef _LEMIN_H__
# define _LEMIN_H__

# include "my.h"
# include "linked_list.h"

int     check_link(char *str);
int     check_comment(char *str);
t_graph *check_line(char **tab, t_graph *list);
t_graph *push_start_link(t_graph *list, char *str);
t_graph *push_end_link(t_graph *list, char *str);
t_graph *check_start_end(t_graph *list, char *str, char *str1, int *flag);
t_graph *tab_to_list(t_graph *list, char **tab);
char    *epur_str(char *line);
char    **create_tab_and_epur(char *line, char c);
char    **file_to_tab(int fd);
char    *my_realloc(char *in, int size);
int     line_counter(char *str);
char    **my_wordtab(char *str, int i, int j);
int     char_is_num(char c);
char    *find_name(char *str);
t_graph *push_link(t_graph *list, char *str);
t_graph *push_link_with_comment(t_graph *list, char *str);
t_graph *push_to_list(t_graph *list, char *str);
t_graph *push_start_to_list(t_graph *list, char *str);
t_graph *push_end_to_list(t_graph *list, char *str);
char	*my_strdup(char *src);
void	free_tab(char **tab);
void    *xmalloc(size_t size);


#endif /* _LEMIN_ */
