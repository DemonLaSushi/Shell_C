/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpryce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:59:49 by lpryce            #+#    #+#             */
/*   Updated: 2022/10/27 16:36:39 by lpryce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combo2(void){

	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';

	while(d <= '9')
	{
		d = c+1;
		while(c <= '9')
		{
			c = b+1;
			while(b <= '9')
			{
				b = a+1;
				while(a<='9')
				{
					write(1, &d, 1);
					write(1, &c, 1);
					write(1, " ", 1);
					write(1, &b, 1);
					write(1, &a, 1);
					write(1, ", ", 2);

					a++;
				}
				b++;
			}
			c++;
		}
		d++;
	}
}
int main(){
	ft_print_combo2();
}
