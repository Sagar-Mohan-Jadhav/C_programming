#ifndef WINLIB_H_INCLUDED
#define WINLIB_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void win_finder(int *, int *, int *, int *, int *, bool *);
void definite_win(int *, int *, int *, int *, int *);
void potential_win(int *, int *, int *, int *, int *);
void no_strat_no_risk(int *,int *, int *, int *, int *);

#endif // WINLIB_H_INCLUDED
