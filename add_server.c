/*
 * RPC server code for the remote add function
 */

#include "add.h"

int *
add_1_svc(longint *argp, struct svc_req *rqstp)
{
	static long result;

	result = argp->a + argp->b;
	printf("add(%ld, %ld) = %ld\n", argp->a, argp->b, result);
	return &result;
