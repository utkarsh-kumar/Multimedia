#include "Multimedia_tool.h"
extern CvSize frame_size;

CvMat* RGB_Mat;
void Init_Matrix(CvMat** matrix,IplImage* frame_local)
{	
	*matrix=(CvMat*)malloc(sizeof(CvMat));
	cvInitMatHeader( *matrix,frame_local->width,frame_local->height, CV_8SC3,NULL,CV_AUTOSTEP);
	(*matrix)->data.ptr=(uchar*)malloc((frame_local->imageSize)*(sizeof(uchar)));
}
void Init_RGB_Matrix(IplImage* frame_local)
{
	Init_Matrix(&RGB_Mat,frame_local);
}

