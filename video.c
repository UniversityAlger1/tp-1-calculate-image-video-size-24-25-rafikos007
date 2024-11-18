float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {

    // Size of the colored movie

    int totalFramesMovie = durationMovie * fps;
    int totalFramesCredits = durationCredits * fps;
    int totalPixels1 = w * h * 3;
    int totalPixels2 = w * h ;
    int movieSizeBytes = totalFramesMovie * totalPixels1  ; 
    int creditsSizeBytes = totalFramesCredits * totalPixels2 ; 
    int totalSize = movieSizeBytes + creditsSizeBytes ;

    // Convertion
    float size;
    if (strcmp(unit, "bt") == 0) {
        size = totalSize;
    } else if (strcmp(unit, "ko") == 0) {
        size = totalSize / 1024.0f; // 1 KB = 1024 bytes
    } else if (strcmp(unit, "mo") == 0) {
        size = totalSize / (1024.0f * 1024.0f); // 1 MB = 1024 KB
    } else if (strcmp(unit, "go") == 0) {
        size = totalSize / (1024.0f * 1024.0f * 1024.0f); // 1 GB = 1024 MB
    } else {
        return 0; 
    }

    return size;
}
