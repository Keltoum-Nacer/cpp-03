/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:03:28 by knacer            #+#    #+#             */
/*   Updated: 2024/11/03 21:35:57 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << " ClapTrap Constructor called" << std::endl;
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
    std::cout << "Copy constructor called" << std::endl;
    operator=(robot);
}

ClapTrap& ClapTrap::operator=(ClapTrap& robot)
{
    std::cout << "Copy assignement operator called" << std::endl;
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
        return;
    energy_points--;
    if (attack_damage)
        attack_damage -= hit_points;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    attack_damage += amount;
    std::cout << "ClapTrap " << Name << " takes " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!energy_points || !hit_points)
        return;
    energy_points--;
    if (hit_points + amount <= 10)
        hit_points += amount;
    std::cout << "ClapTrap " << Name << " have " << hit_points << " hit points!" << std::endl;
}
