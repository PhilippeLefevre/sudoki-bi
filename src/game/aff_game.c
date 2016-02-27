/*
** aff_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:51:50 2016 Lefevre Philippe
** Last update Sat Feb 27 18:01:30 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		"sudoki.h"

int			aff_game(int tab[9][9], int valid)
{
  int			x;
  int			y;

  y = 0;
  printf("|------------------|\n|");
  while (y < 9)
    {
      x = 0;
      while (x < 9)
        {
	  if (valid)
	    printf(((tab[y][x] == 0) ? (" %c") : \
		    (" %d")), (tab[y][x] == 0) ? (' ') : (tab[y][x]));
	  else
	    printf(" X");
          x++;
        }
      printf("|\n|");
      y++;
    }
  printf("------------------|\n");
  return (0);
}
