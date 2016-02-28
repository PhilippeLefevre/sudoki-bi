/*
** ia.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/ia
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:03:16 2016 Lefevre Philippe
** Last update Sun Feb 28 20:04:29 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

int			check_line(int nb, int map[9][9], int y)
{
  int			x;

  x = -1;
  while (++x < 9)
    if (map[y][x] == nb)
      return (0);
  return (1);
}

int			check_collumn(int nb, int map[9][9], int x)
{
  int			y;

  y = -1;
  while (++y < 9)
    if (map[y][x] == nb)
      return (0);
  return (1);
}

int			check_block(int nb, int map[9][9], int y, int x)
{
  int			tmp_x;
  int			tmp_y;

  tmp_x = y - (y % 3);
  tmp_y = x - (x % 3);
  y = tmp_x;
  while  (y < (tmp_x + 3))
    {
      x = (tmp_y - 1);
      while (++x < (tmp_y + 3))
	if (map[y][x] == nb)
	  return (0);
      y += 1;
    }
  return (1);
}

int			check_complete(int map[9][9], int pos, int y, int x)
{
  int			nb;

  if (pos == 81)
    return (1);
  if (map[y][x] != 0)
    return (check_complete(map, (pos + 1), ((pos + 1) / 9), ((pos + 1) % 9)));
  nb = 0;
  while (++nb < 10)
    if (check_line(nb, map, y)
	&& check_collumn(nb, map, x)
	&& check_block(nb, map, y, x))
      {
	map[y][x] = nb;
	if (check_complete(map, (pos + 1), ((pos + 1) / 9), ((pos + 1) % 9)))
	  return (1);
      }
  map[y][x] = 0;
  return (0);
}
