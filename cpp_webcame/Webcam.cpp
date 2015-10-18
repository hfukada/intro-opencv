#include "opencv2/opencv.hpp"
#include "iostream"
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
  VideoCapture cap;

  if( !cap.open(0) ){
    cout << "No Video device found";
  }
  while( true ){
    Mat frame;
    cap >> frame;
    if( frame.empty() ){
      break;
    }
    imshow("some text here", frame);
    if( waitKey(1)==27 ){
      break;
    }
  }
  return 0;
}
