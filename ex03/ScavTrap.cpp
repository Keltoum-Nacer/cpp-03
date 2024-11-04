/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:01:11 by knacer            #+#    #+#             */
/*   Updated: 2024/11/04 15:50:18 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20; 
    std::cout << "ScavTrap default constructor called" << std::endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20; 
    std::cout << "ScavTrap constructor called" << std::endl; 
}  

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& robot) : ClapTrap(robot)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& robot)
{
     std::cout << "ScavTrap Copy assignement operator called" << std::endl;
    if (this != &robot)
        ClapTrap::operator=(robot);
    return(*this);
}

void ScavTrap::attack(std::string target)
{
     if (!energy_points || !hit_points)
    {
        std::cout << "ScavTrap " << Name << " is dead! No energy points or hit points left" << std::endl;
        return;
    }
    energy_points--;
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}