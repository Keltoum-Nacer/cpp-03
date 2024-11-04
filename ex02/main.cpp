/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:16:48 by knacer            #+#    #+#             */
/*   Updated: 2024/11/04 20:06:07 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap c("robot");
    FragTrap d;
    
    c.attack("rororo");
    c.takeDamage(5);
    d.attack("ririri");
    d.beRepaired(0);
    c.highFivesGuys();
}