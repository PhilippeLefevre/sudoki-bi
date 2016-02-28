/*
** fill_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:06:32 2016 Lefevre Philippe
** Last update Sun Feb 28 20:01:20 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

int			is_num(int nb, char *buf)
{
  if ((nb > 47) && (nb < 58))
    return ((nb - 48));
  else
    map_error(buf);
  return (0);
}

int			fill_map(int map[9][9], char *buf, int y, int x)
{
  while ((((++x + 1) / 2) - 1) < 9)
    {
      if ((!(x % 19)) && (buf[x++] != '|'))
	map_error(buf);
      else if (x % 2)
	if (buf[x++] != ' ')
	  map_error(buf);
      map[(y - 1)][(((x + 1) / 2) - 1)] =			\
	((buf[x] == ' ') ? (0) : (is_num(buf[x], buf)));
    }
  return (0);
}
