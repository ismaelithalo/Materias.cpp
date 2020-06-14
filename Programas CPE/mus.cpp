#include <iostream> 
#include <windows.h> 

    using namespace std;
     
    int main()
    {
        int n = 150;
        int time = 350;
        
        int C1 = 33;
        int A1 = 55.00;
        int F2 = 87.31;
        int B3	= 247;
        int D4	= 293.66;
        int Ds4 = 311.13;
        int E4	= 330;
        int F4	= 349.23;
        int Fs4  = 370;
        int G4	= 392.00;
        int A4	= 440.00;
        int B4	= 494;
        int D5	= 587.33;
        int Fs5  = 740;
        int G5	= 784;
        int A5	= 880.00;
        int B5	= 987.77;

	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,3*n);
	Beep (D4, 5*n);
					
	Beep (F2, 2*n); 
	Beep (F2, 2*n);
	Beep (F2, n);
	Beep (F2, 2*n);
	
	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,2*n);
	Beep (A4, 3*n);
	Beep (G4, n);
	Beep (Fs4, n);
	Beep (Ds4, 3*n);
	
	Sleep(2*time); Beep (F2, 2*n);
	Beep (F2, 2*n);
	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,3*n);
	Beep (D4, 5*n);
					
	Beep (F2, 2*n); 
	Beep (F2, 2*n);
	Beep (F2, n);
	Beep (F2, 2*n);	
	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,2*n);
	Beep (A4, 3*n);
	Beep (G4, n);
	Beep (Fs4, n);
	Beep (Ds4, 3*n);
	
	
        return 0;
    }
