#ifndef CLI_H
# define CLI_H

# include "movie.h"

int		ask_menu(void);               // 1 = list, 2 = title, 3 = genre, 4 = flag,
char	*ask_query(void);              // malloc’ed trimmed lowercased
int		ask_flag(void);               // returns 0 or 1
void	print_movie(const t_movie *m);
void	print_no_results(void);

#endif