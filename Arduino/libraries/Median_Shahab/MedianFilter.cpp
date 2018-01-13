#include"MedianFilter.h"

 void MedianFilter::SetWindowSize(int WindowSize_in){
		WindowSize=WindowSize_in;
		window 		 = new float[WindowSize]; // dynamically allocate memory using new
		sortedwindow = new float[WindowSize]; // dynamically allocate memory using new
 }

 void MedianFilter::PushMedian(float newEntry){

        window[crrindex]=newEntry;
        crrindex++;
        crrindex%=WindowSize;


 }


 float MedianFilter::GetMedian(){

	for(int i=0;i<WindowSize;i++){
		sortedwindow[i]=window[i];
	}
	sortArray(sortedwindow,WindowSize);
	return sortedwindow[WindowSize/2+1];

 }
