Critests!
===

Language:   C


This folder contains some dumb `.c` files used as examples to understand how to test it.
It's here important to understand steps of the `make tests_run` command that compiles tests files and generate criterion's binary.


Here is the architecture of the folder:

```
.
|_ include
|     \_ sources.h
|_ sources
|     |_ hello_world.c
|     |_ main.c
|     \_ Makefile
|_ tests
|     |_ generic
|     |     \_ redirect.c
|     |_ include
|     |     \_ crifunc.h
|     |_ sources
|     |     \_ t_hello_world.c
|     \_ Makefile
\_ Makefile
```


## USAGE:

```
>> ./make               # Create usual binary 
>> ./make tests_run     # Generate and execute tests
```

> Other rules: `clean`, `fclean`, `re`


Author [**Corentin COUTRET-ROZET**](https://github.com/sheiiva)