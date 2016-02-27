/*
** new_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
** 
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
** 
** Started on  Sat Feb 27 11:50:14 2016 Lefevre Philippe
** Last update Sat Feb 27 12:08:28 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		"sudoki.h"

int			fill_map(int map[9][9])
{
  char			*buf;
  int			x;
  int			y;

  y = 0;
  while ((buf = get_next_line(0)) != NULL)
    {
      x = 1;
      printf("%d\n", atoi(buf));
      y += 1;
    }
  return (0);
}

int			new_game()
{
  int			map[9][9];

  return (fill_map(map));
}
