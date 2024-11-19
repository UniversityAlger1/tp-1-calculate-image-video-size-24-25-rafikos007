#include <string.h>

float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   
   
    // Calculate totalsize 

    
    long totalSize = (long)(durationMovie * fps * w * h * 3) + (durationCredits * fps * w * h);

    // Convert size 
    float size = 0.0f;
    if (strcmp(unit, "bt") == 0) {
        size = (float)totalSize; 
    } else if (strcmp(unit, "ko") == 0) {
        size = totalSize / 1024.0f; 
    } else if (strcmp(unit, "mo") == 0) {
        size = totalSize / (1024.0f * 1024.0f); 
    } else if (strcmp(unit, "go") == 0) {
        size = totalSize / (1024.0f * 1024.0f * 1024.0f); 
    } else {
        return 0; 
    }

    return 0;
}
