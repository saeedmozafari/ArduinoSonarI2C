

 #include"RMSFilter.h"

 void RMSFilter::SetWindowSize(int WindowSize_in){
		WindowSize=WindowSize_in;
		window 		 = new float[WindowSize]; // dynamically allocate memory using new
 }

 void RMSFilter::PushRMS(float newEntry){

	//	RMSSUM-=(window[crrindex]*window[crrindex]);
        window[crrindex]=newEntry;
      //  RMSSUM+=(window[crrindex]*window[crrindex]);
        crrindex++;
        crrindex%=WindowSize;


 }


 float RMSFilter::GetRMS(){
	float newRMS=0;
	for (int i=0;i<WindowSize;i++){
		newRMS+=(window[i]*window[i]);
	}
	float RMS_Avg=newRMS/WindowSize;
    return sqrt(RMS_Avg);

 }
