#include <iostream>
#include <vector>

void dfs(std::vector<std::vector<char>>& image, int i, int j) {
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] == '0') {
        return;
    }
    image[i][j] = '0';
    dfs(image, i + 1, j);
    dfs(image, i - 1, j);
    dfs(image, i, j + 1);
    dfs(image, i, j - 1);
}

int num_objects(std::vector<std::vector<char>>& image) {
    int count = 0;
    int m = image.size();
    if (m == 0) {
        return 0;
    }
    int n = image[0].size();
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (image[i][j] == '1') {
                ++count;
                dfs(image, i, j);
            }
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<char>> image = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '1', '1'},
        {'0', '0', '1', '0', '0'},
        {'1', '1', '0', '1', '1'}
    };
    std::cout << "Number of objects: " << num_objects(image) << std::endl;
}
