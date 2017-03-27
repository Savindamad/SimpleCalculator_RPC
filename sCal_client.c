/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "sCal.h"


void
my_prog_1(char *host)
{
	CLIENT *clnt;
	float  *result_1;
	defvar  s_cal_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, MY_PROG, MY_VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */


printf("This is a Simple Calculator using RPC\n" );
printf("The operations available are: \n + Addition\n - Substraction \n * Multiplication \n / Division \n %% Percentage \n\n");
printf("Enter the operator you need the operation in:");

//Getting the operator input
scanf("%c", &s_cal_1_arg.x);
printf("Enter the first number:");

//Getting the first input
scanf("%f", &s_cal_1_arg.a);
printf("Enter the second number:" );

//Getting the second input
scanf("%f", &s_cal_1_arg.b);


	result_1 = s_cal_1(&s_cal_1_arg, clnt);
	if (result_1 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}else
		//Printing the result in the client side
		printf("The result is: %f\n", *result_1);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}


	host = argv[1];
	my_prog_1 (host);
exit (0);
}
