/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 16:21:43 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/23 11:42:55 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap R2D2("R2D2");
	FragTrap BB8("BB8");

	R2D2.meleeAttack("K2SO");
	R2D2.rangedAttack("BB8");
}