/*
** fill_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:06:32 2016 Lefevre Philippe
** Last update Tue Mar  1 09:39:06 2016 mathilde charpiot
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

static int		is_num(int nb)
{
  if ((nb > 47) && (nb < 58))
    return ((nb - 48));
  else
    map_error();
  return (0);
}

int			fill_map(int map[9][9], char *buf, int y, int x)
{
  while ((((++x + 1) / 2) - 1) < 9)
    {
      if ((!(x % 19)) && (buf[x++] != '|'))
	map_error();
      else if (x % 2)
	if (buf[x++] != ' ')
	  map_error();
      map[(y - 1)][(((x + 1) / 2) - 1)] =			\
	((buf[x] == ' ') ? (0) : (is_num(buf[x])));
    }
  return (0);
}
