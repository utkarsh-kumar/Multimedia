#ifndef _GLOBAL_H
#define _GLOBAL_H

IplImage* frame;
bool first_run=true;
/************************************/
/*Begin SPECIFIC FRAME DATA POINTERS*/

CvSize frame_size; //Two elements containing the width and height of frame

CvMat* RGB_Mat;
// Matrices to isolate the RGB Params out of the frame instantaneously.
/*End SPECIFIC FRAME DATA POINTERS*/
/************************************/

#endif