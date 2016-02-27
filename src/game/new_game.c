/*
** new_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
** 
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
** 
** Started on  Sat Feb 27 11:50:14 2016 Lefevre Philippe
** Last update Sat Feb 27 12:52:15 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

int			fill_map(int map[9][9])
{
  char			*buf;
  int			x;
  int			y;

  y = 0;
  while ((y < 10) && ((buf = get_next_line(0)) != NULL))
    {
      if (y != 0)
	{
	  x = 0;
	  while (x < 20)
	    {
	      if (x)
		map[(y - 1)][(((x + 1) / 2) - 1)] = ((buf[x] == ' ') ? (0) : (buf[x] - 48));
	      x += 2;
	    }
	}
      y += 1;
      free(buf);
    }
  return (0);
}

int			new_game()
{
  int			map[9][9];

  fill_map(map);
  aff_game(map);
  return (0);
}
