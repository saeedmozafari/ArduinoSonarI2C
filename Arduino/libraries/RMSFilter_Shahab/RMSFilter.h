#ifndef _RMSFilter_H
	#define _RMSFilter_H
	#include <arduino.h>
	class RMSFilter {
		public:

			void SetWindowSize(int WindowSize_in);
			void PushRMS(float newEntry);
			float GetRMS();


		private:
			int WindowSize;
			float *window;
			int crrindex=0;
			float RMSSUM=0;
	};

#endif // _RMSFilter_H
