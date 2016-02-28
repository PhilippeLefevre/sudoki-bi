/*
** new_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:50:14 2016 Lefevre Philippe
** Last update Sun Feb 28 20:01:47 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		<unistd.h>
#include		<stdlib.h>
#include		"sudoki.h"

int			new_game(int y, int count)
{
  int			map[9][9];
  char			buf[21];
  int			len;

  while ((len = read(0, buf, 21)) > 0)
    {
      if (!(y % 10))
	if (strncmp(buf, "|------------------|", 20) != 0)
	  map_error(buf);
      if (y % 10)
	fill_map(map, buf, y, -1);
      y += 1;
      if (y == 11)
	{
	  if (count && y)
	    printf("####################\n");
	  count += 1;
	  y = aff_game(map, check_complete(map, 0, 0, 0));
	}
    }
  if (y)
    exit(write(2, "MAP ERROR\n\n", 11));
  return (0);
}
