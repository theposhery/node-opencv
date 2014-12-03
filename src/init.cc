#include "OpenCV.h"

#include "Point.h"
#include "Matrix.h"
#include "CascadeClassifierWrap.h"
#include "VideoCaptureWrap.h"
#include "Contours.h"
#include "CamShift.h"
#include "HighGUI.h"
#include "FaceRecognizer.h"
#include "BackgroundSubtractor.h"
#include "Constants.h"


extern "C" void
init(Handle<Object> target) {
    NanScope();
    OpenCV::Init(target);
    
    Point::Init(target);
    Matrix::Init(target);
    CascadeClassifierWrap::Init(target);
    VideoCaptureWrap::Init(target);
    BackgroundSubtractorWrap::Init(target);
    Contour::Init(target);
	TrackedObject::Init(target);
    NamedWindow::Init(target);
    Constants::Init(target);


   #if CV_MAJOR_VERSION >= 2 && CV_MINOR_VERSION >=4
     FaceRecognizerWrap::Init(target);
   #endif

};

NODE_MODULE(opencv, init)
