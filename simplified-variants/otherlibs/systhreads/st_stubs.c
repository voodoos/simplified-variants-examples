/**************************************************************************/
/*                                                                        */
/*                                 OCaml                                  */
/*                                                                        */
/*          Xavier Leroy and Damien Doligez, INRIA Rocquencourt           */
/*                                                                        */
/*   Copyright 1995 Institut National de Recherche en Informatique et     */
/*     en Automatique.                                                    */
/*                                                                        */
/*   All rights reserved.  This file is distributed under the terms of    */
/*   the GNU Lesser General Public License version 2.1, with the          */
/*   special exception on linking described in the file LICENSE.          */
/*                                                                        */
/**************************************************************************/
#define CAML_NAME_SPACE
#include "caml/mlvalues.h"

#ifdef NATIVE_CODE
CAMLprim value caml_b_or_n(value unit)          /* ML */
{
  return Val_int(1);
}
#else
CAMLprim value caml_b_or_n(value unit)          /* ML */
{
  return Val_int(0);
}
#endif

