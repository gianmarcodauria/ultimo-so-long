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

static void flood_fill(t_first *floodmap, int height, int width, char **dupMap)
{
    int Ymax;
    int Xmax;

    Ymax = floodmap->Ymax;
    Xmax = floodmap->Xmax;
    if (dupMap[height][width] == 0 || dupMap[height][width] == 'C'
        || dupMap[height][width] == 'E'
        || dupMap[height][width] == 'N' || dupMap[height][width] == 'P')
        {
            dupMap[height][width] = '3';
            {
                // printf("%s\n", dupMap[height]);
                if (height > 0 && (!(dupMap[height - 1][width] == '1')))
                    flood_fill(floodmap, height - 1, width, dupMap);
                if (width > 0 && (!(dupMap[height][width - 1] == '1')))
                    flood_fill(floodmap, height, width - 1, dupMap);
                if (height + 1 < Ymax && (!(dupMap[height + 1][width] == '1')))
                    flood_fill(floodmap, height + 1, width, dupMap);
                if (width + 1 < Xmax && (!(dupMap[height][width + 1] == '1')))
                    flood_fill(floodmap, height, width + 1, dupMap);
            }
        }
}

static char **filler(t_first *carta, char **doubleM)
{
   int he;
   int wi;

   he = carta->map.spawn.Y_ax;
   wi =  carta->map.spawn.X_ax;
   flood_fill(carta, he, wi, doubleM);
   return (doubleM);

}

char   **second_matrix(t_first *gameM)
{
    char    **secMap;
    int     n;
    int lenmax;

    n = 0;
    lenmax = gameM->Ymax;
    secMap = ft_calloc(sizeof(char **), lenmax + 1);
    while (n++ < lenmax )
        secMap[n] = ft_strdup(gameM->matrix[n]);
    return (secMap);
}
int last_floodcheck(char **dupMap)
{
    int Y;
    int X;

    Y = 0;
     while (dupMap[Y])
	{
		X = 0;
		while (dupMap[Y][X])
		{
			if (dupMap[Y][X] == 'P' || dupMap[Y][X] == 'C' || dupMap[Y][X] == 'E' || dupMap[Y][X] == 'N')
            perror("something wrong");
			X++;
		}
		Y++;
	}
    return (1);
}

void    stampmat(char **mtr)
{
	int i = 0;

	while (mtr[i])
	{
		printf("%s \n", mtr[i]);
		i++;
	}
	printf("\n\n");
}
int pam_maker(t_first *pam)
{
   char **doubleMat;

   doubleMat = second_matrix(pam);
   stampmat(doubleMat);
   actualPosition(pam);
   filler(pam, doubleMat);
   stampmat(doubleMat);
   if(last_floodcheck(doubleMat))
   {
      free(doubleMat);
      return(1);
   }
   free(doubleMat);
   return(0);
}
