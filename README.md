# timeout
Timeout routine for bare metal cooperative embedded systems

Description
-------------------

The source code in this repository implementes a timeout function for bare metal cooperative embedded systems. The main purpose of the repository is presenting two ways of determining if the timeout has been reached, a more complicated one and a simpler/leaner one that uses the property of binary numbers and two's complement arithmetics.

Contents
-------------------

timeout.* : the implementation of the timeout functions. The functions call a t_delta() function (see below)

t_delta_1.* : the dumb implementation of t_delta() using an unnecessarilly complicated way to determine if the timeout has been reached.

t_delta_2.* : the smarter implementation of t_delta() using the property of binary numbers and their arithmetics.

systick.h : a simple header included by the timeout.c. The main purpose of this header is to allow timeout.c to correctly compile. The systick_get() function must read a uint32_t counter that is incremented every millisecond by the systick ISR of a Cortex microcontroller. The exact name of the function may vary according to the implementation (compiler, IDE, RAD etc.)
