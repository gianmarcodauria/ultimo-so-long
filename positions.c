#include "solong.h"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:30:25 by gd-auria          #+#    #+#             */
/*   Updated: 2024/04/16 15:30:29 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Registra le posizione e degli oggetti nello spazio
// Prima funzione scorre tutto lo spazio, quanto trova un target invia informazioni a funzione save che si occupa di registrare i dati nella struct
//

//static void track_positions(t_first *juego, int he, int wi, char type, int indewi)
//{
//    if (type == 'P')
//    {
//       juego->map.spawn.name_pos = 'P';
//       juego->map.spawn.X_ax = wi;
//       juego->map.spawn.Y_ax = he;
//    }
//    else if (type == 'C')
//    {
//       juego->map.coll[indewi].name_pos = 'C';
//       juego->map.coll[indewi].X_ax = wi;
//       juego->map.coll[indewi].Y_ax = he;
//    }
//    else if (type == 'E')
//    {
//       juego->map.out.name_pos = 'E';
//       juego->map.out.X_ax = wi;
//       juego->map.out.Y_ax = he;
//    }
//    else if (type == 'N')
//    {
//       juego->map.out.name_pos = 'N';
//       juego->map.out.X_ax = wi;
//       juego->map.out.Y_ax = he;
//    }
// }
// void actualPosition(t_first *juego)
// {
//    int he;
//    int wi;
//    int i;

//    he = 0;
//    i = 0;
//    while (he++ < juego->Ymax)
// 	{
// 		wi = 0;
// 		while (wi++ < juego->Xmax)
// 		{
// 			if (juego->matrix[he][wi] == 'P')
//             track_positions(juego, he, wi,'P', i);
//          if (juego->matrix[he][wi] == 'N')
//             track_positions(juego, he, wi,'N', i);
//          if (juego->matrix[he][wi] == 'C')
//          {
//             track_positions(juego, he, wi,'C', i);
//             i++;
//          }
//          if (juego->matrix[he][wi] == 'E')
//             track_positions(juego, he, wi,'E', i);
// 		}
// 	}
// }//
