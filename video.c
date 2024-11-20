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
    
    if (strcmp(unit, "bt") == 0) return coloredVideoSize;                  
    if (strcmp(unit, "ko") == 0) return coloredVideoSize / 1024.0;             
    if (strcmp(unit, "mo") == 0) return coloredVideoSize / (1024.0 * 1024);    
    if (strcmp(unit, "go") == 0) return coloredVideoSize / (1024.0 * 1024 * 1024);

    // YOUR CODE HERE - END

    return 0;
}
