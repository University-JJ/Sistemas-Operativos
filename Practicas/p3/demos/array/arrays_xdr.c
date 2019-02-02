/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "arrays.h"

bool_t
xdr_indices_notas (XDR *xdrs, indices_notas *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->indices.indices_val, (u_int *) &objp->indices.indices_len, MAXIMO,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_respuesta_notas (XDR *xdrs, respuesta_notas *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->notas.notas_val, (u_int *) &objp->notas.notas_len, MAXIMO,
		sizeof (float), (xdrproc_t) xdr_float))
		 return FALSE;
	return TRUE;
}
