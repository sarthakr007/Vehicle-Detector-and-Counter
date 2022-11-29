/*
----------------------------------------------
--- Author         : Sarthak Rawat and Abhishek Saini
--- Mail           : 211374@juitsolan.in and 211389@juitsolan.in
--- Date           : 28 November 2022
--- Version        : 1.0
----------------------------------------------
*/
#ifndef MY_BLOB
#define MY_BLOB
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

class Blob {
public:
	// member variables
	std::vector<cv::Point> currentContour;
	cv::Rect currentBoundingRect;
	std::vector<cv::Point> centerPositions;
	double dblCurrentDiagonalSize;
	double dblCurrentAspectRatio;
	bool blnCurrentMatchFoundOrNewBlob;
	bool blnStillBeingTracked;
	int intNumOfConsecutiveFramesWithoutAMatch;
	cv::Point predictedNextPosition;

	// function prototypes
	Blob(std::vector<cv::Point> _contour);
	void predictNextPosition(void);
};

#endif    // MY_BLOB

