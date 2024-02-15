#ifndef IMAGE_H_
#define IMAGE_H_

#include <iostream>
#include <vector>

class Image {
public:
    Image(int height, int width);
    void set_red(int y, int x, int value);
    void set_green(int y, int x, int value);
    void set_blue(int y, int x, int value);
    int get_red(int y, int x) const;
    int get_green(int y, int x) const;
    int get_blue(int y, int x) const;
    void set_pixel(int y, int x, int r, int g, int b);
    void show_image() const;
    ~Image();
private:
    void is_in_bounds(int y, int x) const;
private:
    struct Pixel {
        Pixel();
        Pixel(int r, int g, int b);
        int clamp(int value) const; // clamp a value to the range [0, 255]
        int red;
        int green;
        int blue;
    };
    int height_;
    int width_;
    std::vector<std::vector<Pixel>> pixels_;
};

#endif // IMAGE_H_