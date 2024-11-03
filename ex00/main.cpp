/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:16:48 by knacer            #+#    #+#             */
/*   Updated: 2024/11/02 13:59:44 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("robot");
    ClapTrap t;
    
    t = c;
    t.takeDamage(5);
    c.attack("target");
    c.beRepaired(3);
}