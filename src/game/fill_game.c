/*
** fill_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:06:32 2016 Lefevre Philippe
** Last update Sat Feb 27 18:08:38 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

int			fill_map(int map[9][9], char *buf, int y, int x)
{
  while (x < 20)
    {
      if (!(x % 19))
	if (buf[x] != '|')
	  map_error(buf);
	else
	  x += 1;
      else if (x % 2)
	x += 1;
      map[(y - 1)][(((x + 1) / 2) - 1)] = \
	((buf[x] == ' ') ? (0) : (buf[x] - 48));
      x += 1;
    }
  return (0);
}
