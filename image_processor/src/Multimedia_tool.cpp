// Multimedia_tool.cpp : Defines the entry point for the console application.
//
#include "Multimedia_tool.h"
using namespace std;
extern CvMat* RGB_Mat;
int main( void ) 
{	
	IplImage* frame;
	CvCapture* capture = cvCreateCameraCapture(-1);
	const char* win_title="Example_2";
	cvNamedWindow( win_title, CV_WINDOW_AUTOSIZE );

	frame = cvQueryFrame( capture );
	//frame = cvLoadImage("./files/real_image.png");
	Init_RGB_Matrix(frame);
	while(1) 
	{
		frame = cvQueryFrame( capture );
		if( !frame ) break;
		Fill_RGB_Matrix(frame);
		frame->imageData=(char*)RGB_Mat->data.ptr;
		cvShowImage( win_title, frame );
		char c = cvWaitKey(24);
		if( c == 27 ) break;
	}
cvReleaseCapture( &capture );
cvDestroyWindow( win_title);
} 
