#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <png.h>

void* minilib_png_create()
{
    png_imagep image = (png_imagep) calloc(sizeof(png_image), 1);
    image->version = PNG_IMAGE_VERSION;
    return image;
}

void minilib_png_destroy(void* pv_image)
{
    png_imagep image = (png_imagep) pv_image;
    png_image_free(image);
    free(image);
}

void minilib_png_set_size(void* pv_image, uint32_t width, uint32_t height)
{
    png_imagep image = (png_imagep) pv_image;
    image->width = width;
    image->height = height;
}

void minilib_png_set_format(void* pv_image, uint32_t format)
{
    png_imagep image = (png_imagep) pv_image;
    image->format = format;
}

int minilib_png_write_to_file(void* pv_image, 
    const char *file, int convert_to_8bit, const void *buffer,
    png_int_32 row_stride, const void *colormap)
{
    png_imagep image = (png_imagep) pv_image;
    return png_image_write_to_file(image, file, convert_to_8bit, buffer, row_stride, colormap);
}

int minilib_png_write_to_memory(void* pv_image,
    void *memory,
    png_alloc_size_t * PNG_RESTRICT memory_bytes,
    int convert_to_8_bit, const void *buffer, ptrdiff_t row_stride,
    const void *colormap)
{
    png_imagep image = (png_imagep) pv_image;
    return png_image_write_to_memory(image, memory, memory_bytes, convert_to_8_bit, buffer, row_stride, colormap);
}

uint32_t minilib_png_get_warning_or_error(void* pv_image)
{
    png_imagep image = (png_imagep) pv_image;
    return image->warning_or_error;
}

char* minilib_png_get_message(void* pv_image)
{
    png_imagep image = (png_imagep) pv_image;
    return image->message;
}
