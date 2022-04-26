# **Mandelbrot set**
#### Fractal PPM/PGM image generator

A complex number <VAR>c</VAR> is a member of the Mandelbrot set if <VAR>x<SUB>i</SUB></VAR> remains bounded, for all <VAR>i</VAR>, under the iteration:

<BLOCKQUOTE><VAR>x<SUB>0</SUB> = 0 </VAR><BR><VAR>x<SUB>i+1</SUB> =
  x<SUB>i</SUB><SUP>2</SUP> + c</VAR><BR></BLOCKQUOTE>

We sample a square grid in the complex plane in the region [-2,2] + [-2,2]j and consider each pixel part of the set if <VAR>|x<SUB>i</SUB>|</VAR> < 2 for all <VAR>i</VAR> < 100

Plotting the number of iterations required to escape the set as pixel intensity (or colour) values, results in these beautiful images.  

![alt text](img/1.png)

By altering the sample region, we can explore detail at an arbitrary zoom:

![alt text](img/2.png)

![alt text](img/3.png)
