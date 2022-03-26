//mandelbrot set .ppm/.pgm image generator by SifuF

#include<iostream>
#include<fstream>

int escape_iterations(double c_real, double c_imag, int max_iterations) {
    double real = c_real;
    double imag = c_imag;
    int iterations = 0;
    for(int i=0; i<max_iterations; i++) {
        double magSquared = real*real + imag*imag;
        if(magSquared < 4) {
           iterations++;
        }
        double temp = (real*real - imag*imag) + c_real;        
        imag = (2*real*imag) + c_imag;                           
        real = temp; 
    }
    return iterations;
}

int main() {
    double re = 2.0;
    double im = 2.0;

    const int width = 1000;
    const int height = 1000;
    const int maxval = 255;
    
    std::ofstream file("image.ppm");    //.pgm = P2
    file << "P3 " << width << " " << height << " " << maxval << std::endl;
    
    for(int row=0; row<height; row++){
        for(int col=0; col<width; col++){
            int escapes = escape_iterations( -2.0 + 4.0*col/width, -2.0 + 4.0*row/height, maxval);
            file << escapes << " ";
            file << escapes*100/(col+1) << " ";
            file << escapes*100/(row+1) << " ";
        }
        file << std::endl;
    }
}