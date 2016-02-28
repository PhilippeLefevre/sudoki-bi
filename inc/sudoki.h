/*
** sudoki.h for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/inc
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:41:24 2016 Lefevre Philippe
** Last update Sun Feb 28 19:15:09 2016 Lefevre Philippe
*/

#ifndef			SUDOKU_BI_H_
# define		SUDOKU_BI_H_

int			new_game(int y, int count);
int			aff_game(int map[9][9], int valid);

int			check_line(int nb, int map[9][9], int y);
int			check_collumn(int nb, int map[9][9], int x);
int			check_block(int nb, int map[9][9], int y, int x);
int			check_complete(int map[9][9], int position, int y, int x);

int			fill_map(int map[9][9], char *buf, int y, int x);
int			map_error();

#endif			/* !SUDOKU_BI_H_ */
