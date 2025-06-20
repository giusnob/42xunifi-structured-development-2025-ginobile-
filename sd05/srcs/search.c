#include "search.h"
#include <ft_printf.h>

int ask_search_mode(void)          { return (0); }
char *ask_query(void)              { return (NULL); }

void search_by_title(const t_book *v, int n, const char *q)
{
    (void)v; (void)n; (void)q;
    ft_printf("Stub search_by_title\n");
}
void search_by_author(const t_book *v, int n, const char *q)
{
    (void)v; (void)n; (void)q;
    ft_printf("Stub search_by_author\n");
}
