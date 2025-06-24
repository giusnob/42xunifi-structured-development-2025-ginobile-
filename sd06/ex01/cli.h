#ifndef CLI_H
# define CLI_H

# include "expense.h"

int		ask_menu(void);                          // 1 = by category, 2 = by date, 3 = all
char	*ask_category(void);                      // allocates lowercased string
void	ask_date_range(t_date *from, t_date *to);

#endif