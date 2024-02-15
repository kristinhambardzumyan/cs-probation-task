#include "image.h"

Image::Image(int height, int width) : height_(height), width_(width) {
    pixels_.resize(height, std::vector<Pixel>(width));
}

Image::Pixel::Pixel() : red(0), green(0), blue(0) {}

Image::Pixel::Pixel(int r, int g, int b) : red(clamp(r)), green(clamp(g)), blue(clamp(b)) {}

void Image::set_pixel(int y, int x, int r, int g, int b) {
    is_in_bounds(y, x);
    pixels_[y][x] = Pixel(r, g, b);
}

void Image::set_red(int y, int x, int value) {
    is_in_bounds(y, x);
    pixels_[y][x].red = value;
}

void Image::set_green(int y, int x, int value) {
    is_in_bounds(y, x);
    pixels_[y][x].green = value;
}

void Image::set_blue(int y, int x, int value) {
    is_in_bounds(y, x);
    pixels_[y][x].blue = value;
}

int Image::get_red(int y, int x) const {
    is_in_bounds(y, x);
    return pixels_[y][x].red;
}

int Image::get_green(int y, int x) const {
    is_in_bounds(y, x);
    return pixels_[y][x].green;
}

int Image::get_blue(int y, int x) const {
    is_in_bounds(y, x);
    return pixels_[y][x].blue;
}

void Image::is_in_bounds(int y, int x) const {
    if (y < 0 || y >= height_ || x < 0 || x >= width_) {
        throw std::invalid_argument("Error: pixel position is out of bounds.");
    }
}

int Image::Pixel::clamp(int value) const {
    if (value < 0) {
        return 0;
    } else if (value > 255) {
        return 255; 
    }
    return value;
}

void Image::show_image() const {
    Pixel pixel;
    for (int y = 0; y < height_; ++y) {
        for (int x = 0; x < width_; ++x) {
            pixel = pixels_[y][x];
            std::cout << '(' << pixel.red << ", " << pixel.green << ", " << pixel.blue << ")\t";
        }
        std::cout << std::endl;
    }
}

Image::~Image() = default;