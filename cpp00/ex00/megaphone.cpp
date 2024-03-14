/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:41:25 by asajid            #+#    #+#             */
/*   Updated: 2023/12/20 14:41:25 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << std::endl;
        return (0);
    }
    for (int i = 1; i < ac ; i++)
    {
        for (int j = 0; av[i][j] ; j++)
        {
            std::cout << (char)(std::toupper(av[i][j]));
        }
    }
    std::cout << std::endl;
    return (0);
}
