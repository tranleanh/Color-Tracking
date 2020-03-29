#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
	VideoCapture cap(0);
	if (!cap.isOpened())
		return -1;

	for (;;) {
		Mat frame;
		cap >> frame;
		imshow("Webcam", frame);

		if (waitKey(30) >= 5)
			break;
	}
	
	return 0;
}