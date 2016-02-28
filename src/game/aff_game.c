/*
** aff_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:51:50 2016 Lefevre Philippe
** Last update Sun Feb 28 19:16:45 2016 Lefevre Philippe
*/

#include		<unistd.h>
#include		"sudoki.h"

void			my_putchar(char c)
{
  write(1, " ", 1);
  write(1, &c, 1);
}

int			aff_game(int tab[9][9], int valid)
{
  int			x;
  int			y;

  y = 0;
  write(1, "|------------------|\n|", 22);
  while (y < 9)
    {
      x = -1;
      while (++x < 9)
	if (valid)
	  {
	    if (tab[y][x] == 0)
	      write(1, " ", 1);
	    else
	      my_putchar(tab[y][x] + '0');
	  }
	else
	  write(1, " X", 2);
      write(1, "|\n|", 3);
      y++;
    }
  write(1, "------------------|\n", 20);
  return (0);
}
