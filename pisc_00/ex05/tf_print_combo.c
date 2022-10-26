/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tf_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpryce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:06:25 by lpryce            #+#    #+#             */
/*   Updated: 2022/10/26 22:36:59 by lpryce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_combo(void){

	int c;
	int u;
	int m;

	c = '0';
	u = '0';
	m = '0';


	while(c <= '7')
	{
		u = c+1; 
		while(u <= '8')
		{

			m = u+1;

			while(m <= '9')
			{ 
				write(1, "&cum", 3);
				write(1, ", ",2);
				

			}
			c++;
		}
		u++;
	}
	m++;
}
int main(){
	ft_print_combo();	
}
