# Disabling automatic globs expansion on Windows

Compile and run on a Linux box:

```
$ dune build
$ _build/default/hello.exe *
Not on Windows, business as usual
Program was called with 7 args:
,--------
| _build/default/hello.exe
| _build
| dune
| dune-project
| hello.ml
| main.c
| README.md
`--------
```

Compile and run on a Windows box:

```
$ dune build
$ .\_build\default\hello.exe *
On Windows, caml_expand_command_line explicitely commented out
Program was called with 2 args:
,--------
| C:\Users\bsu\ocaml-windows-argv\_build\default\hello.exe
| *
`--------
```
