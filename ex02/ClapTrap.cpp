/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:03:28 by knacer            #+#    #+#             */
/*   Updated: 2024/11/04 20:06:38 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    Name = name; 
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;   
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& robot)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = robot;
}

ClapTrap& ClapTrap::operator=(ClapTrap& robot)
{
    std::cout << "ClpaTrap Copy assignement operator called" << std::endl;
    if (this != &robot)
    {
        Name = robot.Name;
        hit_points = robot.hit_points;
        energy_points = robot.energy_points;
        attack_damage = robot.attack_damage;
    }
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (!energy_points || !hit_points)
    {
        std::cout << "ClapTrap " << Name << " is dead! No energy points or hit points left" << std::endl;
        return;
    }
    energy_points--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points >= amount)
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << Name << " lose " << amount << " of hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " have no hit points to lose!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!energy_points || !hit_points)
    {
        std::cout << "ClapTrap " << Name << " is dead! No energy points or hit points left" << std::endl;
        return;
    }
    if (hit_points + amount <= 10)
    {
        energy_points--;
        hit_points += amount;
        std::cout << "ClapTrap " << Name << " gained " << amount << " and now have " << hit_points << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap can't have more than 10 hit points!" << std::endl;
}
