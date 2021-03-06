/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:44:37 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/19 14:13:19 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap R2D2("R2D2");
    FragTrap C3PO("C3PO");
    
    std::cout << std::endl;

    R2D2.takeDamage(C3PO.vaulthunter_dot_exe(R2D2._Name));
    C3PO.takeDamage(R2D2.meleeAttack(C3PO._Name));
    R2D2.getHit();
    C3PO.getHit();

    std::cout << std::endl;

    C3PO.takeDamage(R2D2.vaulthunter_dot_exe(C3PO._Name));
    R2D2.takeDamage(C3PO.rangedAttack(R2D2._Name));
    R2D2.getHit();
    C3PO.getHit();

    std::cout << std::endl;

    R2D2.beRepaired(1234);
    R2D2.getEnergy();
}