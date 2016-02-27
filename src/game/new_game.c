/*
** new_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:50:14 2016 Lefevre Philippe
** Last update Sat Feb 27 16:35:22 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

static void		map_error(char *buf)
{
  free(buf);
  exit(write(2, "MAP ERROR\n\n", 11));
}

int			fill_map(int map[9][9])
{
  char			*buf;
  int			x;
  int			y;

  y = 0;
  while ((buf = get_next_line(0)) != NULL)
    {
      if (!(y % 10))
	{
	  if (strcmp(buf, "|------------------|") != 0)
	    map_error(buf);
	}
      else
	{
	  x = 0;
	  while (x < 20)
	    {
	      if (!(x % 19))
		if (buf[x] != '|')
		  map_error(buf);
		else
		  x += 1;
	      else if (x % 2)
		x += 1;
	      map[(y - 1)][(((x + 1) / 2) - 1)] = ((buf[x] == ' ') ? (0) : (buf[x] - 48));
	      x += 1;
	    }
	}
      y += 1;
      free(buf);
    }
  if (y != 11)
    exit(write(2, "MAP ERROR\n\n", 11));
  return (0);
}

int			absentSurLigne(int k, int grille[9][9], int i)
{
  int			j;

  j = 0;
  while (j < 9)
    {
      if (grille[i][j] == k)
	return (0);
      j += 1;
    }
  return (1);
}

int			absentSurColonne(int k, int grille[9][9], int j)
{
  int			i;

  i = 0;
  while (i < 9)
    {
      if (grille[i][j] == k)
	return (0);
      i += 1;
    }
  return (1);
}

int			absentSurBloc(int k, int grille[9][9], int i, int j)
{
  int			_i;
  int			_j;

  _i = i - (i % 3);
  _j = j - (j % 3);
  for (i=_i; i < _i+3; i++)
    for (j=_j; j < _j+3; j++)
      if (grille[i][j] == k)
	return (0);
  return (1);
}

int			estValide(int grille[9][9], int position)
{
  if (position == 9 * 9)
    return (1);
  int i = position / 9, j = position % 9;
  if (grille[i][j] != 0)
    return estValide(grille, position + 1);
  for (int k = 1; k <= 9; k++)
    {
      if (absentSurLigne(k, grille, i) && absentSurColonne(k, grille, j) && absentSurBloc(k, grille, i, j))
	{
	  grille[i][j] = k;
	  if (estValide(grille, position + 1))
    	    return (1);
	}
    }
  grille[i][j] = 0;
  return (0);
}

int			new_game()
{
  int			map[9][9];

  fill_map(map);
  aff_game(map, estValide(map, 0));
  return (0);
}
