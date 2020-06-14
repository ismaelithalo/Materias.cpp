#include <iostream>
#include <windows.h>

typedef enum{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE} COLORS;
static int __BACKGROUND = 1;
static int __FOREGROUND = LIGHTGRAY;

using namespace std;

void cores (int letras, int fundo ){
	
__FOREGROUND = letras;
    __BACKGROUND = fundo;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
    letras + (__BACKGROUND << 4));
    
}
void meteoro (int speed) {
	Sleep (speed);
cores (BLUE, BLACK);
cout << R"(

`                              
````````                       
 :++/-.`                      
 ooo/.`                    
 +?+/o-````                
 ??//o:``.+`              
   ?+:/o+.-?/.             
    .??+:-/+?+o?oo/-          
    ..:?o/-://o??o/+o?+-       
   ``.-..-o?/--:-:///-.-/o?:`    
     :/o?+o?+:.``..`````.-+?.   
       -o?o?o/.`  ```.---:/?`  
      ```/?o/:.`.```..--:++o/  
        ``-?o:.`-...---:/+oo+  
           `+?/`--:::::/o?+o.  
             `/o///+++oo??o-   
                `:/+o??o+:     
                               
                                        )"
											 << endl;
cores (GREEN, BLACK);											 
cout << R"(

                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;
Sleep (speed);
system ("cls");
cores (BLUE, BLACK);
cout << R"(


````                                
  ````````````                       
   ```.:++/-.`                      
      ``.+ooo/.`                    
      ` ``+?+/o-````                
       ```:??//o:``.+`              
  ````   `:??+:/o+.-?/.             
     ````:.??+:-/+?+o?oo/-          
    ``   ..:?o/-://o??o/+o?+-       
  ``````.-..-o?/--:-:///-.-/o?:`    
      `.-:/o?+o?+:.``..`````.-+?.   
            -o?o?o/.`  ```.---:/?`  
           ```/?o/:.`.```..--:++o/  
             ``-?o:.`-...---:/+oo+  
                `+?/`--:::::/o?+o.  
                  `/o///+++oo??o-   
                     `:/+o??o+:     
)"
											 << endl;
											 
cores (GREEN, BLACK);											 
cout << R"(

                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;
Sleep (speed);
system ("cls");
cores (BLUE, BLACK);											 
cout << R"(



                                           
   ``````                                
      ````````````                       
        ```.:++/-.`                      
           ``.+ooo/.`                    
           ` ``+?+/o-````                
            ```:??//o:``.+`              
       ````   `:??+:/o+.-?/.             
  `       ````:.??+:-/+?+o?oo/-          
  ```    ``   ..:?o/-://o??o/+o?+-       
       ``````.-..-o?/--:-:///-.-/o?:`    
           `.-:/o?+o?+:.``..`````.-+?.   
                 -o?o?o/.`  ```.---:/?`  
                ```/?o/:.`.```..--:++o/  
                  ``-?o:.`-...---:/+oo+  
                     `+?/`--:::::/o?+o.  
                       `/o///+++oo??o-   
                          `:/+o??o+:     
)"
											 << endl;
cores (GREEN, BLACK);											 
cout << R"(
                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;
Sleep (speed);
system ("cls");
cores (BLUE, BLACK);
cout << R"(
  

                                               
       ``````                                
          ````````````                       
            ```.:++/-.`                      
               ``.+ooo/.`                    
               ` ``+?+/o-````                
                ```:??//o:``.+`              
           ````   `:??+:/o+.-?/.             
      `       ````:.??+:-/+?+o?oo/-          
      ```    ``   ..:?o/-://o??o/+o?+-       
           ``````.-..-o?/--:-:///-.-/o?:`    
               `.-:/o?+o?+:.``..`````.-+?.   
                     -o?o?o/.`  ```.---:/?`  
                    ```/?o/:.`.```..--:++o/  
                      ``-?o:.`-...---:/+oo+  
                         `+?/`--:::::/o?+o.  
                           `/o///+++oo??o-   
                              `:/+o??o+:     
)" 
											;
 cores (GREEN, BLACK);											 
cout << R"(
                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;

Sleep (speed);
system ("cls");
cores (BLUE, BLACK);
cout << R"(
	  
	
	
	                                               
	       ``````                                
	          ````````````                       
	            ```.:++/-.`                      
	               ``.+ooo/.`                    
	               ` ``+?+/o-````                
	                ```:??//o:``.+`              
	           ````   `:??+:/o+.-?/.             
	      `       ````:.??+:-/+?+o?oo/-          
	      ```    ``   ..:?o/-://o??o/+o?+-       
	           ``````.-..-o?/--:-:///-.-/o?:`    
	               `.-:/o?+o?+:.``..`````.-+?.   
	                     -o?o?o/.`  ```.---:/?`  
	                    ```/?o/:.`.```..--:++o/  
	                      ``-?o:.`-...---:/+oo+  
	                         `+?/`--:::::/o?+o.  
	                           `/o///+++oo??o-   
	                              `:/+o??o+:     
)" 
											;
 cores (GREEN, BLACK);											 
cout << R"(
                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;

Sleep (170);
system ("cls");

system ("color 7");
system ("color f7"); 
 
system ("color 4");
system ("color f4");


}
/* void planeta (int cor) {
cores (cor);
 cout << R"(
                                              
                     ```                     
              -/+oyssssssso+/:.              
          `:+ooyyyyssssyyyyyyyys/.           
        .+ssooossssyyssssssssyyyyss:         
      `/ssssssso++++osyyyyyyyyhhhyysy:       
     .sossoooooo++ooossssyyyyyhhyyhyhho      
    -yysssoooooooossoosssyyyyyyyhhhyyhhs`    
   `yyyyo+oooooooosssyyyyyyyyyhhyyyyyhhh+    
   +yyyyo+++oossssssyyyyyyyyyyhyyyyyyhhhh.   
   shyyyyssooooosssssyyyyyyyyyssssssyhhhh/   
   yyyyyyyyyysoooosssyysssyyyssssyyyhyhhh+   
   syyyyyyyyyyysssssssyyyyyyssyyyyyhhhhhd/   
   /yyyyhhhhhyyhhhyyyyyyyyyyyyssyyhhhhhhh.   
   `ssyhhhyyhhyyhyyyyyyyysssssyhhhhhhhhh+`   
    .yyhhyyyyhysssyyyyyyyyyyyyhhddhhhhho`    
     `yhhhhhhyyyyyyyyyysssyyhhhddhhdhh+`     
       /hhhhhyyyhhhhhhhhhhhhhhhhhhddy:`      
        `+hhhhhhhhhhhhhhhhhhhhhhhhs/`        
           -oyhdddddhhhhhhhhhhhy+-`          
              .:+syyhhhhyyso+:.`             
                    ``````                   )" << endl;
}*/

int main () {
	
meteoro (600);


                                    
return 0;
										}
