/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:16:48 by knacer            #+#    #+#             */
/*   Updated: 2024/11/04 17:44:31 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap c("robot");
    DiamondTrap b;
    
    c.attack("target");
    c.whoAmI();
    b.whoAmI();
    b = c;
    b.whoAmI();
	b.attack("rororo");
	return (0);
}
