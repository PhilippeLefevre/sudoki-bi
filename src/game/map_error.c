/*
** map_error.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:10:06 2016 Lefevre Philippe
** Last update Sat Feb 27 18:10:24 2016 Lefevre Philippe
*/

#include		<stdio.h>
#include		<string.h>
#include		"sudoki.h"

void			map_error(char *buf)
{
  free(buf);
  exit(write(2, "MAP ERROR\n\n", 11));
}
