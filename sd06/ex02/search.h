#ifndef SEARCH_H
# define SEARCH_H

# include "contact.h"

// Filters contacts by name substring (case‑insensitive).
// Returns number of matches written into out[].

size_t  search_by_name(const t_contact src[], size_t n,
                       const char *query,
                       t_contact out[], size_t max);

// Filters contacts by tag substring (case‑insensitive).

size_t  search_by_tag(const t_contact src[], size_t n,
                      const char *query,
                      t_contact out[], size_t max);

#endif