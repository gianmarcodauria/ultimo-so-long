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

void	set_values(t_first *johnny)
{
	johnny->Xmax = 0;
	johnny->Ymax = 0;
	johnny->matrix = NULL;
	johnny->floodmap = 0;
	johnny->map.P = 0;
	johnny->map.C = 0;
	johnny->map.E = 0;
	johnny->map.N = 0;
	johnny->map.map_path = NULL;
	johnny->map.heigth = 0;
	johnny->map.width = 0;
	johnny->map.n_c = 0;
	johnny->map.n_p = 0;
	johnny->map.n_out = 0;
	johnny->map.img_wi = 0;
	johnny->map.img_he = 0;
	johnny->map.spawn.X_ax = 0;
	johnny->map.spawn.Y_ax = 0;
	johnny->map.spawn.name_pos = '0';
}
