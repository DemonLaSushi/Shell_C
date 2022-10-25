# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_numbre                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpryce <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 19:02:08 by lpryce            #+#    #+#              #
#    Updated: 2022/10/25 19:12:26 by lpryce           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void){
	char c;

	c = '1';
	while(c<='9'){
		write(1, &c, 1)
		c++;	
	}
}
int main(){
ft_print_numbers();
}
