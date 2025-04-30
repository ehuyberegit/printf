/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:53:01 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/30 19:25:35 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	printf("\npourcent specifier\n\n");
	printf("%%|\n");
	printf("\n");

	printf("\nc specifier\n\n");
	printf("%c|\n",    'a');
	printf("%5c|\n",  'a');
	printf("%-5c|\n", 'a');
	printf("\n");

	printf("\nd specifier\n\n");
	printf("%d|\n",    123456);
	printf("%5d|\n",   123456);
	printf("%6d|\n",   123456);
	printf("%6d|\n",   1);
	printf("---\n");
	printf("%4.2d|\n", 123456);
	printf("%6.2d|\n", 123456);
	printf("%6.2d|\n", 1);
	printf("---\n");
	printf("%06d|\n", 123456);
	printf("%-6d|\n", 123456);
	printf("% 6d|\n", 123456);
	printf("%+6d|\n", 123456);
	printf("---\n");
	printf("%08d|\n", 123456);
	printf("%-8d|\n", 123456);
	printf("% 8d|\n", 123456);
	printf("%+8d|\n", 123456);
	printf("---\n");
	printf("%-6.2d|\n", 123456);
	printf("% 6.2d|\n", 123456);
	printf("%+6.2d|\n", 123456);
	printf("\n");

	printf("\ni specifier\n\n");
	printf("%i|\n",    123456);
	printf("%5i|\n",   123456);
	printf("%6i|\n",   123456);
	printf("%6i|\n",   1);
	printf("\n");

	printf("\nx specifier\n\n");
	printf("%x|\n",    123456);
	printf("%4x|\n",   123456);
	printf("%5x|\n",   123456);
	printf("---\n");
	printf("%X|\n",    123456);
	printf("---\n");
	printf("%4.2x|\n", 123456);
	printf("%5.2x|\n", 123456);
	printf("---\n");
	printf("%#5x|\n", 123456);
	printf("%05x|\n", 123456);
	printf("%-5x|\n", 123456);
	printf("---\n");
	printf("%#8x|\n", 123456);
	printf("%08x|\n", 123456);
	printf("%-8x|\n", 123456);
	printf("---\n");
	printf("%#8X|\n", 123456);
	printf("%08X|\n", 123456);
	printf("%-8X|\n", 123456);
	printf("---\n");
	printf("%-5.2x|\n", 123456);
	printf("\n");

	printf("\ns specifier\n\n");
	printf("%s|\n",    "12345");
	printf("%4s|\n",   "12345");
	printf("%5s|\n",   "12345");
	printf("---\n");
	printf("%4.2s|\n", "12345");
	printf("%5.2s|\n", "12345");
	printf("---\n");
	printf("%-5s|\n", "12345");
	printf("---\n");
	printf("%-8s|\n", "12345");
	printf("---\n");
	printf("%-5.2s|\n", "12345");
	printf("\n");

	printf("\np specifier\n\n");
	printf("%p|\n",    "12345");
	printf("%4p|\n",   "12345");
	printf("%5p|\n",   "12345");
	printf("---\n");
	printf("%-5p|\n", "12345");
	printf("---\n");
	printf("%-8p|\n", "12345");
	printf("\n");

	return(0);
}
