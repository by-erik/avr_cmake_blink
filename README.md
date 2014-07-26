# avr_cmake_blink

This is a little "Hello, world"-blink example/template for avr-gcc with cmake and avrdude.

## Requirements

        apt-get update
        apt-get install avr-libc avrdude cmake make

        adduser ${USER} dialout

## Build

        mkdir build
        cd build
        cmake -DCMAKE_TOOLCHAIN_FILE=../toolchain-gcc-avr.cmake ..
        make

## Install

        cd build
        make upload_main

## Eclipse

* File -> New -> Makefile Project with Existing Source
    * Existing Code Location -> Browse... -> avr\_cmake\_blink
    * Toolchain for Indexer Settings: Linux GCC

* Project Explorer -> avr\_cmake\_blink -> Right Click -> Properties
    * C/C++ Build
        * Build directory: ${workspace_loc:/avr_cmake_blink}/build
    * C/C++ General -> Paths and Symbols
        * Includes -> GNU C -> Add...
            * File system...: /usr/lib/avr/include -> OK

