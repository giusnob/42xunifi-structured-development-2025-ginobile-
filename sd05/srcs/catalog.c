#include "catalog.h"
#include <ft_printf.h>
#include <get_next_line.h>

int load_catalog(const char *file, t_book b[])
{
    (void)file; (void)b;
    ft_printf("⚠️ MOCK load_catalog - da implementare\n");
    return (0);          // returna 0 libri caricati
}

void warn_malformed_line(size_t ln, const char *raw)
{
    ft_dprintf(2, "Line %zu skipped: %s\n", ln, raw);
}

void free_catalog(t_book b[], int n)
{
    (void)b; (void)n;
}
