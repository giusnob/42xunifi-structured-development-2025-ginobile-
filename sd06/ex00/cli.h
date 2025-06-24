#ifndef CLI_H
# define CLI_H

# include "book.h"

int		prompt_mode(void);               // 1 = title, 2 = author
char	*prompt_query(void);              // allocates a cleaned string
void	print_book(const t_book *book);
void	print_no_results(void);

#endif