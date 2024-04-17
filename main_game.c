/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morecheks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:23:18 by gd-auria          #+#    #+#             */
/*   Updated: 2024/04/03 14:23:22 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	main_check(t_first *check)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;

	a = letter_check(check);
	b = wallCheck(check);
	c = shapeCheck(check->matrix, check);
	d = dot_ber(check->floodmap);
	e = last_floodcheck(check->matrix);
	if (a == 0 || b == 0 || c == 0
		|| d == 0 || e == 0)
	{
		perror("CHECK ERROR");
		return (0);
	}
	return (1);
}

void	print_matrix(t_first *game)
{
	int	i;

	i = -1;
	while (++i < game->Xmax)
		printf("%s\n", game->matrix[i]);
}

int	main(int argc, char** argv)
{
	int			fd;
	char		*line;
	char		**main_map;
	char		*found_path;
	t_first		game;

	(void)argc;
	found_path = argv[1];
	fd = open(found_path, O_RDONLY);
	line = fd2str(fd);
	// set_values(&game);
	if (line == NULL)
		return (0);
	main_map = ft_split(line, '\n');
	game.matrix = main_map;
	// print_matrix(&game);
	free (line);
	if (main_check(&game) == 1)
	{

		free (main_map);
		return (1);
	}
	else
	{
		free (main_map);
		perror ("ERROR CHECKS");
		return (0);
	}
}
