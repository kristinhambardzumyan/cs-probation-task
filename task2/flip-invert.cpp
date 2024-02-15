#include <iostream>
#include <vector>

std::vector<std::vector<int>> flip_and_invert_image(std::vector<std::vector<int>>& image) {
    int n = image.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (n + 1) / 2; ++j) {
            int temp = image[i][j];
            image[i][j] = !image[i][n - 1 - j];
            image[i][n - 1 - j] = !temp;
        }
    }
    return image;
}

void show_image(const std::vector<std::vector<int>>& image) {
    for (int i = 0; i < image.size(); ++i) {
        for (int j = 0; j < image[i].size(); ++j) {
            std::cout << image[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> image = {
        {1, 1, 0, 1},
        {0, 1, 1, 0},
        {1, 1, 0, 1},
        {0, 0, 0, 0}
    };
    std::cout << "Input image:" << std::endl;
    show_image(image);
    std::vector<std::vector<int>> output_image = flip_and_invert_image(image);
    std::cout << "\nFlipped and inverted Image:" << std::endl;
    show_image(output_image);
}
