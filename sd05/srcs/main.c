#include "catalog.h"
#include "cli.h"
#include <ft_printf.h>

int main(int ac, char **av)
{
    if (ac != 2)
        return (ft_dprintf(2, "Usage: %s <catalog>\n", av[0]), 1);

    t_book books[MAX_BOOKS];
    int count = load_catalog(av[1], books);
    if (count < 0)
        return (1);
    run_cli(books, count);
    free_catalog(books, count);
    return (0);
}
