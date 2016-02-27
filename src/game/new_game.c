/*
** new_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:50:14 2016 Lefevre Philippe
** Last update Sat Feb 27 16:53:06 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"


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
  i = _i;
  while  (i < (_i + 3))
    {
      j = _j;
      while (j < _j + 3)
	{
	  if (grille[i][j] == k)
	    return (0);
	  j += 1;
	}
      i += 1;
    }
  return (1);
}

int			estValide(int grille[9][9], int position)
{
  int			i;
  int			j;
  int			k;

  if (position == 9 * 9)
    return (1);
  i = position / 9;
  j = position % 9;
  if (grille[i][j] != 0)
    return estValide(grille, position + 1);
  k = 1;
  while (k <= 9)
    {
      if (absentSurLigne(k, grille, i) && absentSurColonne(k, grille, j) && absentSurBloc(k, grille, i, j))
	{
	  grille[i][j] = k;
	  if (estValide(grille, position + 1))
    	    return (1);
	}
      k += 1;
    }
  grille[i][j] = 0;
  return (0);
}

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
  int			z;

  y = 0;
  z = 0;
  while ((buf = get_next_line(0)) != NULL)
    {
      if (z && !y)
	printf("####################\n");
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
      /* printf("== [%s]\n", buf); */
      free(buf);
      if (y == 11)
	{
	  y = 0;
	  z += 1;
	  aff_game(map, estValide(map, 0));
	}
    }
  /* if (y != 11) */
  /*   exit(write(2, "MAP ERROR\n\n", 11)); */
  return (0);
}

int			new_game()
{
  int			map[9][9];

  fill_map(map);
  return (0);
}
