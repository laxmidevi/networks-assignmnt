/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "add.h"

bool_t
xdr_longint (XDR *xdrs, longint *objp)
{
	register int32_t *buf;

	 if (!xdr_long (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}
