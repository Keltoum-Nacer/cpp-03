/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:01:11 by knacer            #+#    #+#             */
/*   Updated: 2024/11/03 18:39:59 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
   std::cout << "ScavTrap constructor called" << std::endl; 
}   

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack()
{
    std::cout << "ScavTrap attacks "<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}