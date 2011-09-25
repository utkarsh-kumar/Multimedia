#include "Multimedia_tool.h"

extern CvMat* RGB_Mat;
uchar* data_ptr;
uchar* ptr;
void Fill_RGB_Matrix(IplImage* frame)
{	
	memcpy(RGB_Mat->data.ptr,frame->imageData,frame->imageSize);
	RGB_Mat->height=frame->height;
	RGB_Mat->width=frame->width;
	RGB_Mat->step=frame->widthStep;

}
