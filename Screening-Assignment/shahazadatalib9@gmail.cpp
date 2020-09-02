
//shahazadatalib9@gmail.com

/*
Shahazada Talib from Jalpaiguri Goverment Engineering College
*/

#include <iostream> //for input output
#include <cstdlib>  //for convert data type and mathematical function
#include <fstream> //it contain ifstream,ofstream,fstream classes
#include <string>  //for playing with string 
#include <ctime>  //clock() in this header file

using namespace std;

int main()
{   //clock starts running ,user is promoted to enter word on-screen
    clock_t start,end;
    start=clock(); //this function doesnot accept any parameter and return approx processor  time and on failure it return -1
    cout<<"Enter the following:\n \n";
    string sentence;
    
    //Program "reads" test.text through file streaming ,clock still running
    
    string line;
    ifstream myfile("text.txt");//read from file
    if (myfile.is_open())
    {
        while(myfile.good())//good() is method of ios class, it return bool type and take no input.
        {
            getline (myfile,line);//read line from file
            cout<<line<<endl;  //print line
          cout<<"\n";
          cin>>sentence;
        }
    myfile.close();    
    }
        // code to determine input accuracy      

    //Clock ends running ,data gathered is displayed to user
    
    end=clock();//stop the clock
    double seconds=(double)(end-start) /CLOCKS_PER_SEC;  //calutlate time in second
    cout<<"\nTyping speed is"<<seconds<<"seconds.\n \n";
    cout<<"Your typing speed is "<<(seconds/6)<<"words per second or"<<(seconds/6)*60<<"words per minute. \n \n";
    cout<<"Your typing accuracy though is unknown.\n \n ";
     
     system("PAUSE"); //it execute pause command and wit for screen wait for key
     return EXIT_SUCCESS;
    return 0;
}
