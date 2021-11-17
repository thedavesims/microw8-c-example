# microw8-c-example
 An example of using the C language to program the MicroW8 WebAssembly sizecoding platform.
 
 Makefile requires [WASI SDK](https://github.com/WebAssembly/wasi-sdk) installed and `$WASI_SDK_PATH` set in order to build. Makefile does not call uw8 tool.

 This example is focused on using the platform functions in C and providing a header file with the imports defined, it is not focused on size coding in C.

 All imported API functions are prefixed with w8_ for now due to some name conflicts with math.h.