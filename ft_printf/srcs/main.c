#include "../includes/printf.h"

/*int	main()
{
	int do_printf;
	int do_ft_printf;


/////////////////////////////////
//  NO SPECIFIERS
/////////////////////////////////

	printf("\n");
	do_printf = printf("Texto Texto TEXTO \t TEeeeeeeeeeeeeeeeeeee  x      toooo");
	printf("\n");
	do_ft_printf = ft_printf("Texto Texto TEXTO \t TEeeeeeeeeeeeeeeeeeee  x      toooo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("T");
	printf("\n");
	do_ft_printf = ft_printf("T");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf(" ");
	printf("\n");
	do_ft_printf = ft_printf(" ");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("");
	printf("\n");
	do_ft_printf = ft_printf("");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////
//		% PERCENTAGE TESTS
/////////////////////////////////

	printf("\n");
	do_printf = printf("%");
	printf("\n");
	do_ft_printf = ft_printf("%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%%");
	printf("\n");
	do_ft_printf = ft_printf("%%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH WIDTH)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5%");
	printf("\n");
	do_ft_printf = ft_printf("%5%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%55%BBBBB");
	printf("\n");
	do_ft_printf = ft_printf("%55%BBBBB");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH MINUS)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5%");
	printf("\n");
	do_ft_printf = ft_printf("%-5%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-112%");
	printf("\n");
	do_ft_printf = ft_printf("%-112%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-112%%");
	printf("\n");
	do_ft_printf = ft_printf("%-112%%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%--39%");
	printf("\n");
	do_ft_printf = ft_printf("%--39%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH ZEROS)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-05%");
	printf("\n");
	do_ft_printf = ft_printf("%-05%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0125%");
	printf("\n");
	do_ft_printf = ft_printf("%0125%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////
//			C CHAR TESTS
/////////////////////////////////

	printf("\n");
	do_printf = printf("%c", 'a');
	printf("\n");
	do_ft_printf = ft_printf("%c", 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d <-- Isto esta certo. Isto marca 31, porque o (char)27 apaga tudo do printf anterior que era 31.\n", do_ft_printf);
	do_printf = printf("Yu%c", 'p');
	printf("\n");

////////////////////////////////////
//		C CHAR TESTS (COM WIDTH)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%1c%1c%1c%1c%1c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%1c%1c%1c%1c%1c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2c%2c%2c%2c%2c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%2c%2c%2c%2c%2c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5c%c%1c%123c%c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%5c%c%1c%123c%c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////
//		C CHAR TESTS (COM MINUS)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%-1c%-1c%-1c%-1c%-1c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%-1c%-1c%-1c%-1c%-1c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("asd%-1c%-2c%-3c%-4casd%-5c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("asd%-1c%-2c%-3c%-4casd%-5c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-1c%2c%-3c%4c%-5c%", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%-1c%2c%-3c%4c%-5c%", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////
//		C CHAR TESTS (COM NULLS)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%c", '\0');
	printf("\n");
	do_ft_printf = ft_printf("%c", '\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c",'\0','\0','\0');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c",'\0','\0','\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5c", '\0');
	printf("\n");
	do_ft_printf = ft_printf("%5c", '\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5c,%12c", '\0', 'a');
	printf("\n");
	do_ft_printf = ft_printf("%-5c,%12c", '\0', 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

////////////////////////////////////
//			S STRING TESTS
///////////////////////////////////


	printf("\n");
	do_printf = printf("%s","Olahh");
	printf("\n");
	do_ft_printf = ft_printf("%s","Olahh");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("hello, %s.", "gavin");
	printf("\n");
	do_ft_printf = ft_printf("hello, %s.", "gavin");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%s%s", "hello ", "world");
	printf("\n");
	do_ft_printf = ft_printf("%s%s", "hello ", "world");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %s is empty", "");
	printf("\n");
	do_ft_printf = ft_printf("this %s is empty", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %s is empty %s%s, really%s?", "", " ", "what?", "");
	printf("\n");
	do_ft_printf = ft_printf("this %s is empty %s%s, really%s?", "", " ", "what?", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////
//			S STRING TESTS (COM WIDTH)
////////////////////////////////////////

	printf("\n");
	do_printf = printf("%32s", "abc");
	printf("\n");
	do_ft_printf = ft_printf("%32s", "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3s", "abc");
	printf("\n");
	do_ft_printf = ft_printf("%3s", "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %5s is empty %1s%12s, really%s?", "", " ", "what?", "");
	printf("\n");
	do_ft_printf = ft_printf("this %5s is empty %1s%12s, really%s?", "", " ", "what?", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////
//			S STRING TESTS (COM MINUS)
////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5s", "goes over");
	printf("\n");
	do_ft_printf = ft_printf("%-5s", "goes over");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-10s", "goes over");
	printf("\n");
	do_ft_printf = ft_printf("%-10s", "goes over");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2s", "");
	printf("\n");
	do_ft_printf = ft_printf("%-2s", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5s%-12s", "teste ", "testado");
	printf("\n");
	do_ft_printf = ft_printf("%5s%-12s", "teste ", "testado");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM PRECISION)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.2s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.2s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.0s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.04s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.04s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.06s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.06s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5s%7sAH-%-2s%5c", "yo", "boi", "no", 'y');
	printf("\n");
	do_ft_printf = ft_printf("%.5s%7sAH-%-2s%5c", "yo", "boi", "no", 'y');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%7.5s", "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%7.5s", "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-6.5s", "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-6.5s", "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM NULL)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("hello, %s.", NULL);
	printf("\n");
	do_ft_printf = ft_printf("hello, %s.", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%32s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%32s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-16s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%-16s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-1s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%-1s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.0s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.6s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.6s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%3.6s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM STAR)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%*s", 12, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%*s", 12, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", 2, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%*s", 2, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 32, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 32, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 5, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 5, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 4, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 4, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*s", 3, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%.*s", 3, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", -32, "abc");
	printf("\n");
	do_ft_printf = ft_printf("%*s", -32, "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", -32, "abc");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", -32, "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", -3, "hello");
	printf("\n");
	do_ft_printf = ft_printf("%*s", -3, "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*s", -3, "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.*s", -3, "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*.*s", -7, -3, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*.*s", -7, -3, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////
//				P POINTERS TESTS
//////////////////////////////////////////////


	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;

	printf("\n");
	do_printf = printf("%p",&a01);
	printf("\n");
	do_ft_printf = ft_printf("%p",&a01);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////
//				P POINTERS TESTS (COM NULL)
//////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%p", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%p", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3p", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.3p", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//				P POINTERS TESTS (COM POINTERS)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%6p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%6p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.012p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%.012p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%9.4p\n", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%9.4p\n", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5p", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.5p", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//				P POINTERS TESTS (COM WIDTH)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%14p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%14p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//				P POINTERS TESTS (COM MINUS)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-15p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%-15p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////////////////////
//				D INTEGER TESTS
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%d", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%d", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d ola, %d", -50000454, 0);
	printf("\n");
	do_ft_printf = ft_printf("%d ola, %d", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//   			D INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%d", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%d", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			D INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2d", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4d", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4d", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5d", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2d", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5d", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5d", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07d", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07d", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06d", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06d", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5d", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5d", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5d", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5d", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 D INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



///////////////////////////////////////////////////
//     		 D INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*d", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*d", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*d", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

///////////////////////////////////////////////////
//     		 I INTEGER TESTS
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%i", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i ola, %i", -50000454, 0);
	printf("\n");
	do_ft_printf = ft_printf("%i ola, %i", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%i", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4i", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*i", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

///////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS
//////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%u", -2);
	printf("\n");
	do_ft_printf = ft_printf("%u", -2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 3);
	printf("\n");
	do_ft_printf = ft_printf("%u", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%u", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM WIDTH)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%7u", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7u", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%6u", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%6u", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%11u", -94827);
	printf("\n");
	do_ft_printf = ft_printf("%11u", -94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM MINUS)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-7u", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7u", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4u", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%-4u", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%.5u", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5u", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6u", 13862);
	printf("\n");
	do_ft_printf = ft_printf("%.6u", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM ZEROS)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05u", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05u", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%011u", -533);
	printf("\n");
	do_ft_printf = ft_printf("%011u", -533);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM WIDTH PRECISION)
//////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM MINUS, WIDTH, PRECISION)
////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-20.20u", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%-20.20u", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO)
////////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.3u", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3u", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%03.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO, MINUS, WIDTH)
////////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.3u", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.3u", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO, MINUS, WIDTH)
////////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*u", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*u", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*u", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*u", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*u", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %x number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %x number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %x number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %x number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", 3);
	printf("\n");
	do_ft_printf = ft_printf("%x", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", 4294967293u);
	printf("\n");
	do_ft_printf = ft_printf("%x", 4294967293u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", -51);
	printf("\n");
	do_ft_printf = ft_printf("%x", -51);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH E MINUS)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2x", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%2x", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5x", -52625);
	printf("\n");
	do_ft_printf = ft_printf("%-5x", -52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4x", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%-4x", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM LOWER PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05x", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05x", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03x", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%03x", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3x", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3x", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION MINUS)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION ZERO)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%08.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%02.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION ZERO MINUS)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM ZERO PRECISION)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*x", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 20, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 20, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////
//     		 X HEXADECIMAL UPPER
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %X number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %X number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %X number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %X number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", 3);
	printf("\n");
	do_ft_printf = ft_printf("%X", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", 4294967293u);
	printf("\n");
	do_ft_printf = ft_printf("%X", 4294967293u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", -51);
	printf("\n");
	do_ft_printf = ft_printf("%X", -51);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH E MINUS)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2X", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%2X", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5X", -52625);
	printf("\n");
	do_ft_printf = ft_printf("%-5X", -52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4X", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%-4X", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM LOWER PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05X", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05X", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%03X", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%03X", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3X", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3X", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION MINUS)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION ZERO)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%08.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%02.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION ZERO MINUS)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM ZERO PRECISION)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS TESTS (STAR TEST)
/////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*X", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 20, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 20, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       + Flags On Digits
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+d", 55);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", -55);
	printf("\n");
	do_ft_printf = ft_printf("%+d", -55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", -2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+d", -2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", 234);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4d", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.4d", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.4d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.1d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.1d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", -1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5d", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+5d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+1d", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+1d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+24d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+24d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.2d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+3.2d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.3d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+2.3d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%+8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-12.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%+-12.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3d", 8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3d", 8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       + Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+i", 55);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", -55);
	printf("\n");
	do_ft_printf = ft_printf("%+i", -55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", -2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+i", -2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", 234);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4i", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.4i", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.4i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.1i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.1i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", -1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", 1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5i", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+5i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+1i", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+1i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+24i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+24i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%+.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.2i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+3.2i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.3i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+2.3i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+8.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%+8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-12.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%+-12.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3i", 8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3i", 8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       ' ' Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this % d number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 3);
	printf("\n");
	do_ft_printf = ft_printf("% d", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", -1);
	printf("\n");
	do_ft_printf = ft_printf("% d", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", (int)(-2147483678));
	printf("\n");
	do_ft_printf = ft_printf("% d", (int)(-2147483678));
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% 7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7d", -14);
	printf("\n");
	do_ft_printf = ft_printf("% 7d", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 3d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 5d", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% 5d", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 6d", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% 6d", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", -33);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", -33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5d", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% -5d", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5d", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% -5d", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 94827);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", -2464);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", -2464);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .5d", 2);
	printf("\n");
	do_ft_printf = ft_printf("% .5d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .6d", -3);
	printf("\n");
	do_ft_printf = ft_printf("% .6d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% .3d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4d", 5263);
	printf("\n");
	do_ft_printf = ft_printf("% .4d", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4d", -2372);
	printf("\n");
	do_ft_printf = ft_printf("% .4d", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d", 13862);
	printf("\n");
	do_ft_printf = ft_printf("% .3d", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d",-23646);
	printf("\n");
	do_ft_printf = ft_printf("% .3d",-23646);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 05d", 43);
	printf("\n");
	do_ft_printf = ft_printf("% 05d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 07d", -54);
	printf("\n");
	do_ft_printf = ft_printf("% 07d", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 03d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03d", 634);
	printf("\n");
	do_ft_printf = ft_printf("% 03d", 634);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04d", -532);
	printf("\n");
	do_ft_printf = ft_printf("% 04d", -532);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04d", -4825);
	printf("\n");
	do_ft_printf = ft_printf("% 04d", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% -10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 010.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 010.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


	printf("\n");
	do_printf = printf("% 0-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       ' ' Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this % i number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 3);
	printf("\n");
	do_ft_printf = ft_printf("% i", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", -1);
	printf("\n");
	do_ft_printf = ft_printf("% i", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", (int)(-2147483678));
	printf("\n");
	do_ft_printf = ft_printf("% i", (int)(-2147483678));
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% 7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7i", -14);
	printf("\n");
	do_ft_printf = ft_printf("% 7i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 3i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 5i", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% 5i", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 6i", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% 6i", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", -33);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", -33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5i", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% -5i", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5i", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% -5i", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 94827);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", -2464);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", -2464);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("% .5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("% .6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% .3i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4i", 5263);
	printf("\n");
	do_ft_printf = ft_printf("% .4i", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("% .4i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i", 13862);
	printf("\n");
	do_ft_printf = ft_printf("% .3i", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i",-23646);
	printf("\n");
	do_ft_printf = ft_printf("% .3i",-23646);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 05i", 43);
	printf("\n");
	do_ft_printf = ft_printf("% 05i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("% 07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 03i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03i", 634);
	printf("\n");
	do_ft_printf = ft_printf("% 03i", 634);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04i", -532);
	printf("\n");
	do_ft_printf = ft_printf("% 04i", -532);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("% 04i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% -10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 010.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 010.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			       '#' Hash on Hexadecimal Lower
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %#x number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %#x number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %#x number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %#x number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#x", 3);
	printf("\n");
	do_ft_printf = ft_printf("%#x", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#x", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%#x", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5x", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#5x", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2x", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%#2x", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#-7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5x", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#-5x", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-4x", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%#-4x", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.5x", 21);
	printf("\n");
	do_ft_printf = ft_printf("%#.5x", 21);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.4x", 5263);
	printf("\n");
	do_ft_printf = ft_printf("%#.4x", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3x", 938862);
	printf("\n");
	do_ft_printf = ft_printf("%#.3x", 938862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#05x", 43);
	printf("\n");
	do_ft_printf = ft_printf("%#05x", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#03x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03x", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%#03x", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#08.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#02.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#02.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#03.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#0-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#0-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			       '#' Hash on Hexadecimal Upper
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %#X number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %#X number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %#X number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %#X number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#X", 3);
	printf("\n");
	do_ft_printf = ft_printf("%#X", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#X", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%#X", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5X", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#5X", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2X", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%#2X", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#-7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5X", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#-5X", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-4X", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%#-4X", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.5X", 21);
	printf("\n");
	do_ft_printf = ft_printf("%#.5X", 21);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.4X", 5263);
	printf("\n");
	do_ft_printf = ft_printf("%#.4X", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3X", 938862);
	printf("\n");
	do_ft_printf = ft_printf("%#.3X", 938862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#05X", 43);
	printf("\n");
	do_ft_printf = ft_printf("%#05X", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#03X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03X", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%#03X", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#08.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#02.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#02.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#03.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#0-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#0-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			      		'# +' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("% +d", 5);
	printf("\n");
	do_ft_printf = ft_printf("% +d", 5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +d", -7);
	printf("\n");
	do_ft_printf = ft_printf("% +d", -7);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +5d", 35);
	printf("\n");
	do_ft_printf = ft_printf("% +5d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +7d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +7d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +24d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +24d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7d", 234);
	printf("\n");
	do_ft_printf = ft_printf("% +.7d", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("% +.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.3d", 3723);
	printf("\n");
	do_ft_printf = ft_printf("% +.3d", 3723);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +05d", 432);
	printf("\n");
	do_ft_printf = ft_printf("% +05d", 432);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +04d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +04d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			      		'# +' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("% +i", 5);
	printf("\n");
	do_ft_printf = ft_printf("% +i", 5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +i", -7);
	printf("\n");
	do_ft_printf = ft_printf("% +i", -7);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +5i", 35);
	printf("\n");
	do_ft_printf = ft_printf("% +5i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +7i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +7i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +24i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +24i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7i", 234);
	printf("\n");
	do_ft_printf = ft_printf("% +.7i", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("% +.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.3i", 3723);
	printf("\n");
	do_ft_printf = ft_printf("% +.3i", 3723);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +05i", 432);
	printf("\n");
	do_ft_printf = ft_printf("% +05i", 432);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +04i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +04i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			      		'l l h hh' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%d", 12);
	printf("\n");
	do_ft_printf = ft_printf("%d", 12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;


/////////////////////////////////
//  NO SPECIFIERS
/////////////////////////////////

	printf("\n");
	do_printf = printf("Texto Texto TEXTO \t TEeeeeeeeeeeeeeeeeeee  x      toooo");
	printf("\n");
	do_ft_printf = ft_printf("Texto Texto TEXTO \t TEeeeeeeeeeeeeeeeeeee  x      toooo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("T");
	printf("\n");
	do_ft_printf = ft_printf("T");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf(" ");
	printf("\n");
	do_ft_printf = ft_printf(" ");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("");
	printf("\n");
	do_ft_printf = ft_printf("");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////
//		% PERCENTAGE TESTS
/////////////////////////////////

	printf("\n");
	do_printf = printf("%");
	printf("\n");
	do_ft_printf = ft_printf("%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%%");
	printf("\n");
	do_ft_printf = ft_printf("%%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH WIDTH)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5%");
	printf("\n");
	do_ft_printf = ft_printf("%5%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%55%BBBBB");
	printf("\n");
	do_ft_printf = ft_printf("%55%BBBBB");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH MINUS)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5%");
	printf("\n");
	do_ft_printf = ft_printf("%-5%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-112%");
	printf("\n");
	do_ft_printf = ft_printf("%-112%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-112%%");
	printf("\n");
	do_ft_printf = ft_printf("%-112%%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%--39%");
	printf("\n");
	do_ft_printf = ft_printf("%--39%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH ZEROS)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-05%");
	printf("\n");
	do_ft_printf = ft_printf("%-05%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0125%");
	printf("\n");
	do_ft_printf = ft_printf("%0125%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////
//			C CHAR TESTS
/////////////////////////////////

	printf("\n");
	do_printf = printf("%c", 'a');
	printf("\n");
	do_ft_printf = ft_printf("%c", 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d <-- Isto esta certo. Isto marca 31, porque o (char)27 apaga tudo do printf anterior que era 31.\n", do_ft_printf);
	do_printf = printf("Yu%c", 'p');
	printf("\n");

////////////////////////////////////
//		C CHAR TESTS (COM WIDTH)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%1c%1c%1c%1c%1c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%1c%1c%1c%1c%1c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2c%2c%2c%2c%2c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%2c%2c%2c%2c%2c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5c%c%1c%123c%c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%5c%c%1c%123c%c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////
//		C CHAR TESTS (COM MINUS)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%-1c%-1c%-1c%-1c%-1c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%-1c%-1c%-1c%-1c%-1c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("asd%-1c%-2c%-3c%-4casd%-5c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("asd%-1c%-2c%-3c%-4casd%-5c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-1c%2c%-3c%4c%-5c%", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%-1c%2c%-3c%4c%-5c%", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////
//		C CHAR TESTS (COM NULLS)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%c", '\0');
	printf("\n");
	do_ft_printf = ft_printf("%c", '\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c",'\0','\0','\0');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c",'\0','\0','\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5c", '\0');
	printf("\n");
	do_ft_printf = ft_printf("%5c", '\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5c,%12c", '\0', 'a');
	printf("\n");
	do_ft_printf = ft_printf("%-5c,%12c", '\0', 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////
//			S STRING TESTS
///////////////////////////////////


	printf("\n");
	do_printf = printf("%s","Olahh");
	printf("\n");
	do_ft_printf = ft_printf("%s","Olahh");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("hello, %s.", "gavin");
	printf("\n");
	do_ft_printf = ft_printf("hello, %s.", "gavin");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%s%s", "hello ", "world");
	printf("\n");
	do_ft_printf = ft_printf("%s%s", "hello ", "world");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %s is empty", "");
	printf("\n");
	do_ft_printf = ft_printf("this %s is empty", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %s is empty %s%s, really%s?", "", " ", "what?", "");
	printf("\n");
	do_ft_printf = ft_printf("this %s is empty %s%s, really%s?", "", " ", "what?", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////
//			S STRING TESTS (COM WIDTH)
////////////////////////////////////////

	printf("\n");
	do_printf = printf("%32s", "abc");
	printf("\n");
	do_ft_printf = ft_printf("%32s", "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3s", "abc");
	printf("\n");
	do_ft_printf = ft_printf("%3s", "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %5s is empty %1s%12s, really%s?", "", " ", "what?", "");
	printf("\n");
	do_ft_printf = ft_printf("this %5s is empty %1s%12s, really%s?", "", " ", "what?", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////
//			S STRING TESTS (COM MINUS)
////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5s", "goes over");
	printf("\n");
	do_ft_printf = ft_printf("%-5s", "goes over");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-10s", "goes over");
	printf("\n");
	do_ft_printf = ft_printf("%-10s", "goes over");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2s", "");
	printf("\n");
	do_ft_printf = ft_printf("%-2s", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5s%-12s", "teste ", "testado");
	printf("\n");
	do_ft_printf = ft_printf("%5s%-12s", "teste ", "testado");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM PRECISION)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.2s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.2s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.0s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.04s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.04s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.06s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.06s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5s%7sAH-%-2s%5c", "yo", "boi", "no", 'y');
	printf("\n");
	do_ft_printf = ft_printf("%.5s%7sAH-%-2s%5c", "yo", "boi", "no", 'y');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%7.5s", "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%7.5s", "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-6.5s", "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-6.5s", "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM NULL)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("hello, %s.", NULL);
	printf("\n");
	do_ft_printf = ft_printf("hello, %s.", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%32s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%32s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-16s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%-16s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-1s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%-1s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.0s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.6s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.6s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%3.6s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM STAR)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%*s", 12, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%*s", 12, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", 2, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%*s", 2, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 32, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 32, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 5, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 5, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 4, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 4, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*s", 3, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%.*s", 3, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", -32, "abc");
	printf("\n");
	do_ft_printf = ft_printf("%*s", -32, "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", -32, "abc");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", -32, "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", -3, "hello");
	printf("\n");
	do_ft_printf = ft_printf("%*s", -3, "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*s", -3, "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.*s", -3, "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*.*s", -7, -3, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*.*s", -7, -3, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////
//				P POINTERS TESTS
//////////////////////////////////////////////


	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;

	printf("\n");
	do_printf = printf("%p",&a01);
	printf("\n");
	do_ft_printf = ft_printf("%p",&a01);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////
//				P POINTERS TESTS (COM NULL)
//////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%p", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%p", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3p", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.3p", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//				P POINTERS TESTS (COM POINTERS)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%6p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%6p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.012p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%.012p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%9.4p\n", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%9.4p\n", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5p", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.5p", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//				P POINTERS TESTS (COM WIDTH)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%14p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%14p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//				P POINTERS TESTS (COM MINUS)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-15p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%-15p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//				D INTEGER TESTS
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%d", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%d", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d ola, %d", -50000454, 0);
	printf("\n");
	do_ft_printf = ft_printf("%d ola, %d", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//   			D INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%d", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%d", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			D INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2d", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4d", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4d", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5d", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2d", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5d", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5d", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07d", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07d", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06d", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06d", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5d", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5d", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5d", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5d", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 D INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



///////////////////////////////////////////////////
//     		 D INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*d", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*d", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*d", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%i", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i ola, %i", -50000454, 0);
	printf("\n");
	do_ft_printf = ft_printf("%i ola, %i", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%i", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4i", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*i", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS
//////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%u", -2);
	printf("\n");
	do_ft_printf = ft_printf("%u", -2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 3);
	printf("\n");
	do_ft_printf = ft_printf("%u", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%u", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM WIDTH)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%7u", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7u", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%6u", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%6u", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%11u", -94827);
	printf("\n");
	do_ft_printf = ft_printf("%11u", -94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM MINUS)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-7u", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7u", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4u", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%-4u", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%.5u", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5u", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6u", 13862);
	printf("\n");
	do_ft_printf = ft_printf("%.6u", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM ZEROS)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05u", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05u", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%011u", -533);
	printf("\n");
	do_ft_printf = ft_printf("%011u", -533);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM WIDTH PRECISION)
//////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM MINUS, WIDTH, PRECISION)
////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-20.20u", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%-20.20u", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO)
////////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.3u", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3u", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%03.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO, MINUS, WIDTH)
////////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.3u", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.3u", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO, MINUS, WIDTH)
////////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*u", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*u", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*u", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*u", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*u", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %x number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %x number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %x number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %x number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", 3);
	printf("\n");
	do_ft_printf = ft_printf("%x", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", 4294967293u);
	printf("\n");
	do_ft_printf = ft_printf("%x", 4294967293u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", -51);
	printf("\n");
	do_ft_printf = ft_printf("%x", -51);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH E MINUS)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2x", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%2x", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5x", -52625);
	printf("\n");
	do_ft_printf = ft_printf("%-5x", -52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4x", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%-4x", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM LOWER PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05x", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05x", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03x", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%03x", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3x", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3x", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION MINUS)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION ZERO)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%08.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%02.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION ZERO MINUS)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM ZERO PRECISION)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*x", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 20, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 20, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////
//     		 X HEXADECIMAL UPPER
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %X number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %X number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %X number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %X number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", 3);
	printf("\n");
	do_ft_printf = ft_printf("%X", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", 4294967293u);
	printf("\n");
	do_ft_printf = ft_printf("%X", 4294967293u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", -51);
	printf("\n");
	do_ft_printf = ft_printf("%X", -51);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH E MINUS)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2X", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%2X", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5X", -52625);
	printf("\n");
	do_ft_printf = ft_printf("%-5X", -52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4X", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%-4X", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM LOWER PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05X", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05X", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%03X", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%03X", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3X", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3X", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION MINUS)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION ZERO)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%08.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%02.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION ZERO MINUS)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM ZERO PRECISION)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS TESTS (STAR TEST)
/////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*X", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 20, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 20, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////
// 			       + Flags On Digits
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+d", 55);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", -55);
	printf("\n");
	do_ft_printf = ft_printf("%+d", -55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", -2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+d", -2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", 234);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4d", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.4d", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.4d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.1d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.1d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", -1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5d", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+5d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+1d", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+1d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+24d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+24d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.2d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+3.2d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.3d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+2.3d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%+8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-12.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%+-12.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3d", 8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3d", 8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////////////////
// 			       + Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+i", 55);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", -55);
	printf("\n");
	do_ft_printf = ft_printf("%+i", -55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", -2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+i", -2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", 234);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4i", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.4i", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.4i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.1i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.1i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", -1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", 1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5i", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+5i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+1i", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+1i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+24i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+24i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%+.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.2i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+3.2i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.3i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+2.3i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+8.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%+8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-12.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%+-12.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3i", 8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3i", 8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////
// 			       ' ' Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this % d number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 3);
	printf("\n");
	do_ft_printf = ft_printf("% d", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", -1);
	printf("\n");
	do_ft_printf = ft_printf("% d", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", (int)(-2147483678));
	printf("\n");
	do_ft_printf = ft_printf("% d", (int)(-2147483678));
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% 7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7d", -14);
	printf("\n");
	do_ft_printf = ft_printf("% 7d", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 3d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 5d", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% 5d", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 6d", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% 6d", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", -33);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", -33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5d", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% -5d", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5d", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% -5d", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 94827);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", -2464);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", -2464);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .5d", 2);
	printf("\n");
	do_ft_printf = ft_printf("% .5d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .6d", -3);
	printf("\n");
	do_ft_printf = ft_printf("% .6d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% .3d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4d", 5263);
	printf("\n");
	do_ft_printf = ft_printf("% .4d", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4d", -2372);
	printf("\n");
	do_ft_printf = ft_printf("% .4d", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d", 13862);
	printf("\n");
	do_ft_printf = ft_printf("% .3d", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d",-23646);
	printf("\n");
	do_ft_printf = ft_printf("% .3d",-23646);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 05d", 43);
	printf("\n");
	do_ft_printf = ft_printf("% 05d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 07d", -54);
	printf("\n");
	do_ft_printf = ft_printf("% 07d", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 03d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03d", 634);
	printf("\n");
	do_ft_printf = ft_printf("% 03d", 634);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04d", -532);
	printf("\n");
	do_ft_printf = ft_printf("% 04d", -532);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04d", -4825);
	printf("\n");
	do_ft_printf = ft_printf("% 04d", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% -10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 010.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 010.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


	printf("\n");
	do_printf = printf("% 0-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////
// 			       ' ' Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this % i number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 3);
	printf("\n");
	do_ft_printf = ft_printf("% i", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", -1);
	printf("\n");
	do_ft_printf = ft_printf("% i", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", (int)(-2147483678));
	printf("\n");
	do_ft_printf = ft_printf("% i", (int)(-2147483678));
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% 7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7i", -14);
	printf("\n");
	do_ft_printf = ft_printf("% 7i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 3i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 5i", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% 5i", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 6i", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% 6i", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", -33);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", -33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5i", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% -5i", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5i", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% -5i", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 94827);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", -2464);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", -2464);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("% .5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("% .6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% .3i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4i", 5263);
	printf("\n");
	do_ft_printf = ft_printf("% .4i", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("% .4i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i", 13862);
	printf("\n");
	do_ft_printf = ft_printf("% .3i", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i",-23646);
	printf("\n");
	do_ft_printf = ft_printf("% .3i",-23646);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 05i", 43);
	printf("\n");
	do_ft_printf = ft_printf("% 05i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("% 07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 03i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03i", 634);
	printf("\n");
	do_ft_printf = ft_printf("% 03i", 634);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04i", -532);
	printf("\n");
	do_ft_printf = ft_printf("% 04i", -532);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("% 04i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% -10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 010.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 010.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			       '#' Hash on Hexadecimal Lower
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %#x number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %#x number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %#x number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %#x number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#x", 3);
	printf("\n");
	do_ft_printf = ft_printf("%#x", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#x", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%#x", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5x", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#5x", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2x", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%#2x", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#-7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5x", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#-5x", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-4x", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%#-4x", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.5x", 21);
	printf("\n");
	do_ft_printf = ft_printf("%#.5x", 21);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.4x", 5263);
	printf("\n");
	do_ft_printf = ft_printf("%#.4x", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3x", 938862);
	printf("\n");
	do_ft_printf = ft_printf("%#.3x", 938862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#05x", 43);
	printf("\n");
	do_ft_printf = ft_printf("%#05x", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#03x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03x", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%#03x", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#08.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#02.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#02.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#03.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#0-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#0-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////////////////////
// 			       '#' Hash on Hexadecimal Upper
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %#X number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %#X number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %#X number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %#X number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#X", 3);
	printf("\n");
	do_ft_printf = ft_printf("%#X", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#X", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%#X", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5X", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#5X", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2X", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%#2X", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#-7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5X", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#-5X", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-4X", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%#-4X", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.5X", 21);
	printf("\n");
	do_ft_printf = ft_printf("%#.5X", 21);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.4X", 5263);
	printf("\n");
	do_ft_printf = ft_printf("%#.4X", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3X", 938862);
	printf("\n");
	do_ft_printf = ft_printf("%#.3X", 938862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#05X", 43);
	printf("\n");
	do_ft_printf = ft_printf("%#05X", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#03X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03X", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%#03X", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#08.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#02.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#02.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#03.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#0-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#0-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		'# +' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("% +d", 5);
	printf("\n");
	do_ft_printf = ft_printf("% +d", 5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +d", -7);
	printf("\n");
	do_ft_printf = ft_printf("% +d", -7);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +5d", 35);
	printf("\n");
	do_ft_printf = ft_printf("% +5d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +7d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +7d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +24d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +24d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7d", 234);
	printf("\n");
	do_ft_printf = ft_printf("% +.7d", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("% +.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.3d", 3723);
	printf("\n");
	do_ft_printf = ft_printf("% +.3d", 3723);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +05d", 432);
	printf("\n");
	do_ft_printf = ft_printf("% +05d", 432);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +04d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +04d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	//////////////////////////////////////////////////////////////
// 			      		'# +' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("% +i", 5);
	printf("\n");
	do_ft_printf = ft_printf("% +i", 5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +i", -7);
	printf("\n");
	do_ft_printf = ft_printf("% +i", -7);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +5i", 35);
	printf("\n");
	do_ft_printf = ft_printf("% +5i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +7i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +7i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +24i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +24i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7i", 234);
	printf("\n");
	do_ft_printf = ft_printf("% +.7i", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("% +.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.3i", 3723);
	printf("\n");
	do_ft_printf = ft_printf("% +.3i", 3723);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +05i", 432);
	printf("\n");
	do_ft_printf = ft_printf("% +05i", 432);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +04i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +04i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/