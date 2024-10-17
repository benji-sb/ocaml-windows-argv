#define CAML_INTERNALS

#include <stdio.h>

#include "caml/misc.h"
#include "caml/mlvalues.h"
#include "caml/sys.h"
#include "caml/osdeps.h"
#include "caml/callback.h"

#ifdef _WIN32
#include <windows.h>
#endif

CAMLextern void caml_do_exit (int);

int main_os(int argc, char_os **argv)
{
#ifdef _WIN32
    printf("On Windows, caml_expand_command_line explicitely commented out\n");
    /* caml_expand_command_line(&argc, &argv); */
#else
    printf("Not on Windows, business as usual\n");
#endif

    caml_main(argv);
    caml_do_exit(0);
    return 0;
}
