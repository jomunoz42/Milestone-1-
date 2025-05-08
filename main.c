/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:17:30 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/08 22:05:13 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	a;
	int	*p;

	a = 42;
	p = &a;

	ft_printf("\nft_printf outputs\n\n");
	
	ft_printf("Char: %c\n", 'W');
	ft_printf("String: %s\n", "I was printed");
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Integer: %i\n", 42);
	ft_printf("Unsigned decimal: %u\n", 42);
	ft_printf("Hexadecimal lower: %x\n", 42);
	ft_printf("Hexadecimal upper: %X\n", 42);
	ft_printf("Percent sign: %%\n");
	ft_printf("Pointer: %p\n", p);

	printf("\nReal printf outputs\n\n");
	
	printf("Char: %c\n", 'W');
	printf("String: %s\n", "I was printed");
	printf("Decimal: %d\n", 42);
	printf("Integer: %i\n", 42);
	printf("Unsigned decimal: %u\n", 42);
	printf("Hexadecimal lower: %x\n", 42);
	printf("Hexadecimal upper: %X\n", 42);
	printf("Percent sign: %%\n");
	printf("Pointer: %p\n", p);
	
	return (0);
}

// TESTES DO YVAN:

int main()
{
	int 	a;
	int	b;
	char	*s;

	a = ft_printf("Hello World\n");
	b = printf("Hello World\n");

	printf("%d, %d\n", a, b);

        a = ft_printf("%s\n", "Banana Frita");
        b = printf("%s\n", "Banana Frita");

        printf("%d, %d\n", a, b);

	s = NULL;
        a = ft_printf("%s\n", s);
        b = printf("%s\n", s);

        printf("%d, %d\n", a, b);

        a = ft_printf("%p\n", s);
        b = printf("%p\n", s);

        printf("%d, %d\n", a, b);
        
        a = ft_printf("%c%c%c%c\n", 'I', 'v', 'a', 'n');
        b = printf("%c%c%c%c\n", 'I', 'v', 'a', 'n');

        printf("%d, %d\n", a, b);
        
        a = ft_printf("%x\n", 0xBABACA);
        b = printf("%x\n", 0xBABACA);
        
        printf("%d, %d\n", a, b);
        
        a = ft_printf("%X\n", 0xbabaca);
        b = printf("%X\n", 0xbabaca);

        ft_printf("NUM: %d\n", 0xFF);
		printf("NUM: %d\n", 0xFF);

        printf("%d, %d\n", a, b);
        
        a = ft_printf("%X\n", -42);
        b = printf("%X\n", -42);

        printf("%d, %d\n", a, b);
        
        a = ft_printf("%%\n");
        b = printf("%%\n");

        printf("%d, %d\n", a, b);

        a = ft_printf("\t\n\v\f\r");
        b = printf("\t\n\v\f\r");

        printf("%d, %d\n", a, b);

        a = ft_printf("");
        b = printf("");

        printf("%d, %d\n", a, b);
        
        a = ft_printf("", s, s, s);
        b = printf("", s, s, s);

        a = ft_printf("%c\n", s, s, s);
        b = printf("%c\n", s, s, s);

        a = ft_printf("%c %c %c\n", s, s, s);
        b = printf("%c %c %c\n", s, s, s);


        printf("%d, %d\n", a, b);


	return (0);
}

// TESTES DO GIT DO VINI:

int main(void)
{
	printf("\n\n\n-------------TESTING EDGE CASES-------------\n\n\n");

	char *z = "ola bom dia %K%s %% %i %d %X %u\0";
	printf("a''''%d''''\n",      printf(z, "a todos", NULL, NULL, 2147483647, -2147483648, -32, -12334567, -1, "ola bom dia a todos"));
	ft_printf("\n");
	ft_printf("a''''%d''''\n",ft_printf(z, "a todos", NULL, NULL, 2147483647, -2147483648, -32, -12334567, -1, "ola bom dia a todos"));

	printf("\n\n\n");
	
	char *y = "ola bom dia %K%s %% %s %i %X %u\0";
	printf("a''''%d''''\n",      printf(y, "a todos", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	ft_printf("\n");
	ft_printf("a''''%d''''\n",ft_printf(y, "a todos", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));


	printf("\n\n\n");

	printf("Some test\n");
	printf("%d %d\n", printf("%c ", 'a'), ft_printf("%c ", 'a'));

	printf("\n\n\n");

	// teste ale
	printf("\nTeste do ale\n");
	printf("My own: %i\n", ft_printf(NULL));
	printf("Original: %i\n", printf(NULL));

	printf("\n\n\n");

	// Printando characters: %c
	int a = 0;
	printf("Lidando com %%c\n");
	printf("Original: %c\n", 98);	
	printf("Original: %c\n", a);
	printf("Original: %c\n", a + 73);
	printf("Original: %c\n\n", 200);
	printf("Original: %c\n\n", -200);
 
	ft_printf("My Own: %c\n", 98);	
	ft_printf("My Own: %c\n", a);
	ft_printf("My Own: %c\n", a + 73);
	ft_printf("My Own: %c\n", 200);
	ft_printf("My own: %c\n\n", -200);

	// Printando characters: %s
	char str[] = "Strangers in the night - Frank Sinatra";
	printf("Lidando com %%s\n");
	printf("Original: %s\n", str);	
	printf("Original: %s\n", str + 5);
	printf("Original: %s\n\n", "mt \200 friends this is weir-\0");
	// 
	ft_printf("My own: %s\n", str);	
	ft_printf("My own: %s\n", str + 5);
	ft_printf("My own: %s\n\n", "mt \200 friends this is weir-\0");
 
	// Printando characters: %p
	int *ptr = &a;
	int **test = &ptr;
	printf("Lidando com %%p\n");
	printf("Original: %p\n", ptr);
	printf("Original: %p\n", &a);
	printf("Original: %p\n", ptr + a);
	printf("Original: %p\n", &ptr + 446546);
	printf("Original: %p\n\n", &test);

	printf("Lidando com %%p\n");
	ft_printf("My own: %p\n", ptr);
	ft_printf("My own: %p\n", &a);
	ft_printf("My own: %p\n", ptr + a);
	ft_printf("My own: %p\n", &ptr + 446546);
	ft_printf("My own: %p\n\n", &test);

	// Printando characters: %d
	int dec = 2147483644;
	int ndec = -2147483644;
	printf("Lidando com %%d\n");
	printf("Original: %d\n", dec);
	printf("Original: %d\n", dec - 2);
	printf("Original: %d\n", ndec);
	printf("Original: %d\n", ndec + 2 - (ndec / 2));
	printf("Original: %d\n\n", dec + ndec);
 
	ft_printf("My own: %d\n", dec);
	ft_printf("My own: %d\n", dec - 2);
	ft_printf("My own: %d\n", ndec);
	ft_printf("My own: %d\n", ndec + 2 - (ndec / 2));
	ft_printf("My own: %d\n\n", dec + ndec);
 
	// Printando characters: %i
	printf("Lidando com %%i\n");
	printf("Original: %i\n", dec);
	printf("Original: %i\n", dec - 2);
	printf("Original: %i\n", ndec);
	printf("Original: %i\n", ndec + 2 - (ndec / 2));
	printf("Original: %i\n\n", dec + ndec);

	ft_printf("My own: %i\n", dec);
	ft_printf("My own: %i\n", dec - 2);
	ft_printf("My own: %i\n", ndec);
	ft_printf("My own: %i\n", ndec + 2 - (ndec / 2));
	ft_printf("My own: %i\n\n", dec + ndec);

	// Printando characters: %u
	unsigned int ciao = 47688;
	printf("Lidando com %%u\n");
	printf("Original: %u\n", ciao);
	printf("Original: %u\n", 0 - 2);
	printf("Original: %u\n", -7);
	printf("Original: %u\n\n", ciao + 2 - (ndec / 2));
 
	ft_printf("My own: %u\n", ciao);
	ft_printf("My own: %u\n", 0 - 2);
	ft_printf("My own: %u\n", -7);
	ft_printf("My own: %u\n\n", ciao + 2 - (ndec / 2));
 
	// Printando characters: %x
	unsigned int ben10 = -1000;
	int 		 ohyeah = 1000;
	printf("Lidando com %%x\n");
	printf("Original: %x\n", ben10);
	printf("Original: %x\n", ohyeah);
	printf("Original: %x\n", ben10 + 10 * 2);
	printf("Original: %x\n", 'a');
	printf("Original: %x\n\n", 14 / 2 * (12 / 7));

	ft_printf("My own %x\n", ben10);
	ft_printf("My own %x\n", ohyeah);
	ft_printf("My own %x\n", ben10 + 10 * 2);
	ft_printf("My own %x\n", 'a');
	ft_printf("My own %x\n\n", 14 / 2 * (12 / 7));

	// Printando characters: %X
	printf("Lidando com %%X\n");
	printf("Original: %X\n", ben10);
	printf("Original: %X\n", ohyeah);
	printf("Original: %X\n", ben10 + 10 * 2);
	printf("Original: %X\n", 'a');
	printf("Original: %X\n\n", 14 / 2 * (12 / 7));

	ft_printf("My own %X\n", ben10);
	ft_printf("My own %X\n", ohyeah);
	ft_printf("My own %X\n", ben10 + 10 * 2);
	ft_printf("My own %X\n", 'a');
	ft_printf("My own %X\n\n", 14 / 2 * (12 / 7));

	fclose(stdout);
	fprintf(stderr, "PRINTF: %d\n", printf("teste123\n"));
	fprintf(stderr, "FT_PRINTF: %d\n", ft_printf("teste123\n"));
}