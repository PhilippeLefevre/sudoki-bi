/*
** xmalloc.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/utils
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 18:07:36 2016 Lefevre Philippe
** Last update Sat Feb 27 18:07:37 2016 Lefevre Philippe
*/

#include		<stdlib.h>
#include		<unistd.h>

void			*xmalloc(size_t size)
{
  void			*ptr;

  if ((ptr = malloc(size)) == NULL)
    {
      write(2, "Impossible to allocate Memory\n", 30);
      exit(0);
    }
  return (ptr);
}
