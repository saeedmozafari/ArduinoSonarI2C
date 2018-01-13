#ifndef _MedianFilter_H
	#define _MedianFilter_H
	#include "ArduinoSort.h"

	class MedianFilter {
		public:

			void SetWindowSize(int WindowSize_in);
			void PushMedian(float newEntry);
			float GetMedian();


		private:
			int WindowSize;
			float *window;
			float *sortedwindow;
			int crrindex=0;
	};

#endif // _MedianFilter_H
