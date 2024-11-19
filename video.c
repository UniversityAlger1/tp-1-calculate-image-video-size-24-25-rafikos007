#include <string.h>

float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
    if (unit == NULL) {
        return 0; // Return 0 if unit is NULL
    }

    // Calculate total frames
    long long totalFramesMovie = (long long)durationMovie * fps;
    long long totalFramesCredits = (long long)durationCredits * fps;

    // Calculate size for colored movie and black-and-white credits
       // 1 byte for grayscale

    long long movieSizeBytes = totalFramesMovie * (long long)w * h * 3;
    long long creditsSizeBytes = totalFramesCredits * (long long)w * h ;
    long long totalSize = movieSizeBytes + creditsSizeBytes;

    // Convert size to the requested unit
    float size = 0.0f;
    if (strcmp(unit, "bt") == 0) {
        size = (float)totalSize; // Size in bytes
    } else if (strcmp(unit, "ko") == 0) {
        size = totalSize / 1024.0f; // Size in kilobytes
    } else if (strcmp(unit, "mo") == 0) {
        size = totalSize / (1024.0f * 1024.0f); // Size in megabytes
    } else if (strcmp(unit, "go") == 0) {
        size = totalSize / (1024.0f * 1024.0f * 1024.0f); // Size in gigabytes
    } else {
        return 0; // Invalid unit
    }

    return size;
}
