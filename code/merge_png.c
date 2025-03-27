#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *image_paths[] = {"image1.png", "image2.png", "image3.png"};
    int num_images = sizeof(image_paths) / sizeof(image_paths[0]);

    // 使用固定大小数组存储指针（避免动态分配二级指针）
    unsigned char *img_ptrs[num_images];
    int widths[num_images], heights[num_images];
    int max_width = 0, total_height = 0, channels = 0;

    // 加载图片
    for (int i = 0; i < num_images; i++) {
        img_ptrs[i] = stbi_load(image_paths[i], &widths[i], &heights[i], &channels, 0);
        if (!img_ptrs[i]) {
            printf("Error loading %s\n", image_paths[i]);
            return -1;
        }
        if (widths[i] > max_width) max_width = widths[i];
        total_height += heights[i];
    }

    // 创建画布（填充白色）
    unsigned char *result = malloc(max_width * total_height * channels);
    memset(result, 255, max_width * total_height * channels);

    // 拼接图片（居中）
    int current_y = 0;
    for (int i = 0; i < num_images; i++) {
        int offset_x = (max_width - widths[i]) / 2;
        for (int y = 0; y < heights[i]; y++) {
            memcpy(
                &result[(current_y + y) * max_width * channels + offset_x * channels],
                &img_ptrs[i][y * widths[i] * channels],
                widths[i] * channels
            );
        }
        current_y += heights[i];
    }

    // 保存结果
    stbi_write_png("output.png", max_width, total_height, channels, result, max_width * channels);

    // 释放内存
    for (int i = 0; i < num_images; i++) stbi_image_free(img_ptrs[i]);
    free(result);

    return 0;
}