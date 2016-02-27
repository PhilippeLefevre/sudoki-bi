/*
** aff_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
** 
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
** 
** Started on  Sat Feb 27 11:51:50 2016 Lefevre Philippe
** Last update Sat Feb 27 16:25:51 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		"sudoki.h"

void			aff_game(int tab[9][9], int valid)
{
  int			i;
  int			j;

  i = 0;
  printf("|------------------|\n|");
  while (i < 9)
    {
      j = 0;
      while(j < 9)
        {
	  if (valid)
	    printf(((tab[i][j] == 0) ? (" %c") : (" %d")),	\
		   ((tab[i][j] == 0) ? (' ') : (tab[i][j])));
	  else
	    printf(" X");
          j++;
        }
      printf("|\n|");
      i++;
    }
  printf("------------------|\n");
}
