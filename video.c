#include <string.h>

// Parameters:
//   w: width of the image
//   h: height of the imag
//   durationMovie: duration in seconds of the movie (colored image)
//   durationCredits: duration in seconds of credits (black/white image)
//   unit: Unit of the output value. It could be 'bt' for bytes, 'ko' for kilobits, 'mo' for megabits, 'go' for gigabits
// Return value
//   colored video size (based on the unit passed parameter)


float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {

   // YOUR CODE HERE - BEGIN
   
    // Calculate totalsize 

    
    long coloredVideoSize = (long)(durationMovie * fps * w * h * 3) + (durationCredits * fps * w * h);

    // Convert size 
    
   if (strcmp(unit, "bt") == 0) {
    return coloredVideoSize; 
} else if (strcmp(unit, "ko") == 0) {
    return (8 * coloredVideoSize / 1024.0); 
} else if (strcmp(unit, "mo") == 0) {
    return (8 * coloredVideoSize / (1024.0 * 1024)); 
} else if (strcmp(unit, "go") == 0) {
    return (8 * coloredVideoSize / (1024.0 * 1024 * 1024)); 
} else {
    return -1.0f; // Invalid unit
}

    // YOUR CODE HERE - END

    
}
