/*
** ia.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/ia
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:03:16 2016 Lefevre Philippe
** Last update Sat Feb 27 18:05:23 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

int			check_line(int nb, int map[9][9], int y)
{
  int			x;

  x = 0;
  while (x < 9)
     {
      if (map[y][x] == nb)
	return (0);
      x += 1;
    }
  return (1);
}

int			check_collumn(int nb, int map[9][9], int x)
{
  int			y;

  y = 0;
  while (y < 9)
    {
      if (map[y][x] == nb)
	return (0);
      y += 1;
    }
  return (1);
}

int			check_block(int nb, int map[9][9], int y, int x)
{
  int			_i;
  int			_j;

  _i = y - (y % 3);
  _j = x - (x % 3);
  y = _i;
  while  (y < (_i + 3))
    {
      x = _j;
      while (x < _j + 3)
	{
	  if (map[y][x] == nb)
	    return (0);
	  x += 1;
	}
      y += 1;
    }
  return (1);
}

int			check_complete(int map[9][9], int position)
{
  int			y;
  int			x;
  int			nb;

  if (position == 9 * 9)
    return (1);
  y = position / 9;
  x = position % 9;
  if (map[y][x] != 0)
    return check_complete(map, position + 1);
  nb = 1;
  while (nb <= 9)
    {
      if (check_line(nb, map, y) && check_collumn(nb, map, x) \
	  && check_block(nb, map, y, x))
	{
	  map[y][x] = nb;
	  if (check_complete(map, position + 1))
    	    return (1);
	}
      nb += 1;
    }
  map[y][x] = 0;
  return (0);
}
