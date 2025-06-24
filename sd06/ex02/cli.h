#ifndef CLI_H
# define CLI_H

# include "contact.h"

int		ask_field(void);              // 1 = name, 2 = tag
char	*ask_query(void);              // malloc'ed, trimmed, lowercased
void	print_contact(const t_contact *c);
void	print_no_results(void);

#endif