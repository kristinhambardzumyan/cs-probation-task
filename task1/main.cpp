#include "image.h"

int main() {
    Image image(3, 4);
    int y = 0;
    int x = 2;
    image.set_pixel(0, 0, 255, 0, 0);
    image.set_pixel(1, 1, 0, 255, 0);
    image.set_pixel(2, 2, 0, 0, 255);
    image.set_pixel(2, 1, 255, 255, 0);
    image.set_pixel(1, 3, 160, 32, 240);
    std::cout << "Image:\n";
    image.show_image();
    std::cout << "\nBlue color value at (" << y << ", " << x << ") before setting: " << image.get_blue(y, x) << std::endl;
    image.set_blue(y, x, 120);
    std::cout << "Blue color value at (" << y << ", " << x << ") after setting: " << image.get_blue(y, x) << std::endl;
    std::cout << "\nPixel RGB values at (" << y << ", " << x << "): (" << image.get_red(y, x) << ", " << image.get_green(y, x) << ", " << image.get_blue(y, x) << ')' << std::endl;
}