#include "/usr/include/opencv-2.3.1/opencv/highgui.h"

int main(void)
{

  IplImage* img = cvLoadImage("./files/1.jpg");
  cvNamedWindow( "Example1", CV_WINDOW_AUTOSIZE );
  cvShowImage( "Example1", img );
  cvWaitKey(0);
  cvReleaseImage( &img );
  cvDestroyWindow ("Example1");
  return 0;
}


