#include <iostream>
#include <windows.h>
#include <numeric>
#include <string.h>
#include <conio.h>
using namespace std;

struct student
{
	char name[20], roll[20];
};
student st;

main() 
{
	int score = 0;
	int score1 = 0;
	int score2 = 0;
    string answer;






	system("color a1");
	cout << "\n\n\n\n\n\n\n\n\t\t\t        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   \n";
	cout << "\t\t\t       (                                                                    (      \n";
	cout << "\t\t\t        )            ___________________________________________             )  \n";
	cout << "\t\t\t       (            |   ______________________________________  |           (   \n";
	cout << "\t\t\t        )           |  |                                     |  |            )  ";
	cout << "\n\t\t\t       (            |  |    PAKISTAN  ARMY  INITIAL  TEST    |  |           ( \n";
	cout << "\t\t\t        )           |  |_____________________________________|  |            )  \n";
	cout << "\t\t\t       (            |___________________________________________|           (   \n";
	cout << "\t\t\t        )                                                                    )  \n";
	cout << "\t\t\t       (                                                                    (   \n";
	cout << "\t\t\t        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    \n  \n\n\n\n\n\n\n\n";
	system("PAUSE");
	system("CLS");
	










	system("color f2");
	cout << "\t\t\t                    ____________________________________________      \n";
	cout << "\t\t\t                    |   ______________________________________  |   \n";
	cout << "\t\t\t                    |  |                                     |  |";
	cout << "\n\t\t\t                    |  |    PAKISTAN  ARMY  INITIAL  TEST    |  |   \n";
	cout << "\t\t\t                    |  |_____________________________________|  |    \n";
	cout << "\t\t\t                    |___________________________________________|    \n";
	cout << "\n\n\t*************************************************************************************************************************\n\n";
	
	cout << "\t\t\t Enter Name:  ";
	gets(st.name);
	cout << "\n\t\t\t Enter Roll No:  ";
	gets(st.roll);
	cout << "\n\n\t*************************************************************************************************************************\n\n";
	
	cout << "\n\n\n\n\t  INSTRUCTIONS:";
	cout << "\n\t- This test is devided in 3 sections, Intelligence, Academic, General Knowledge.";
	cout << "\n\t- One should pass all sections of the test in order to pass the initial test.";
	cout << "\n\t- Passing criteria for the test is 50%. Student should give atleast half of correct answers in order to pass any section of test.";
	cout << "\n\t- Take your time and read the MCQs carefully and select from the given options.\n\n\n\n\n";
	
	cout << "\t\t\t\t\t\tEnter any key to start test";
	getch();
	system("CLS");
	
	


	
	
 	
 	
 	
 	
	
	
	
	
	system("color f1");
	cout << "\t\t\t                    ____________________________________________      \n";
	cout << "\t\t\t                    |   ______________________________________  |   \n";
	cout << "\t\t\t                    |  |                                     |  |";
	cout << "\n\t\t\t                    |  |    PAKISTAN  ARMY  INITIAL  TEST    |  |   \n";
	cout << "\t\t\t                    |  |_____________________________________|  |    \n";
	cout << "\t\t\t                    |___________________________________________|    \n";
	
	cout << "\n\n\t***********************************************   Intelligence Test   ********************************************\n\n";

cout << "\n\n\n\n\nQ1. Man is to Woman then Boy is to?" << endl;
    cout << "A. Child" << endl;
    cout << "B. Baby" << endl;
    cout << "C. Girl" << endl;
    cout << "D. Youngster" << endl;
    
   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score++;
	}
	





cout << "\n\n\nQ2. What number comes next in the following series? \n\t\t 0  2  4  6  8  " << endl;
    cout << "A. 9" << endl;
    cout << "B. 10" << endl;
    cout << "C. 11" << endl;
    cout << "D. 12" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score++;
	}
	


        
        

cout << "\n\n\nQ3. What letter comes next in the following series? \n\t\t ABCD  BCDE  CDEF  DEFG  " << endl;
    cout << "A. FGHI" << endl;
    cout << "B. JKLM" << endl;
    cout << "C. HIJK" << endl;
    cout << "D. EFGH" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "D" || answer == "d") {
    	score++;
	}
	


        
        
        
cout << "\n\n\nQ4. Which one of the following is different from the rest?" << endl;
    cout << "A. Boy" << endl;
    cout << "B. Infant" << endl;
    cout << "C. Child" << endl;
    cout << "D. Adult" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score++;
	}
	

        
        
        

cout << "\n\n\nQ5. Select the word which is different from the rest?" << endl;
    cout << "A. Year" << endl;
    cout << "B. Mounth" << endl;
    cout << "C. Mile" << endl;
    cout << "D. Day" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score++;
	}
	

        
        
        


cout << "\n\n\nQ6. Azra is older than Munir and Munir is younger than Javed than Azra is" << endl;
    cout << "A. Older than Javed" << endl;
    cout << "B. Just as Old as Javed" << endl;
    cout << "C. Younger than Javed" << endl;
    cout << "D. Can not say what" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score++;
	}
	

        
        
        


cout << "\n\n\nQ7. What comes after \n\t\t A  C  F  " << endl;
    cout << "A. G" << endl;
    cout << "B. J" << endl;
    cout << "C. K" << endl;
    cout << "D. H" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score++;
	}
	

        
        
        


cout << "\n\n\nQ8. Sailer is to Air Force than Airman is to" << endl;
    cout << "A. Army" << endl;
    cout << "B. Airforce" << endl;
    cout << "C. Rangers" << endl;
    cout << "D. Navy" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "D" || answer == "d") {
    	score++;
	}
	

        
        
        


cout << "\n\n\nQ9. Devide the largest of these numbers by the difference of two smaller numbers than answer will be? \n\t\t 8  10  3 " << endl;
    cout << "A. 2" << endl;
    cout << "B. 5" << endl;
    cout << "C. 8" << endl;
    cout << "D. 4" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score++;
	}
	

        
        
        


cout << "\n\n\nQ10. HOT is to BURN and COLD is to ?" << endl;
    cout << "A. OVEN" << endl;
    cout << "B. FREEZ" << endl;
    cout << "C. STREAM" << endl;
    cout << "D. ICE" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score++;
	}
	

        
        
        



    cout << "\n\n\n\n\t\tYour score is: " << score << "/10" << endl;
    if(score>=5)
	{
	cout << "\tYou have passed the Intelligenece Test.\n\n";
	cout << "\tEnter any key to start next test.\n\n";
	}
	else
	cout << "\tYou have failed the Intelligenece Test.\n\n";

	
	getch();
	system("CLS");
	
	
	
	
	















	system("color f5");
	cout << "\t\t\t                    ____________________________________________      \n";
	cout << "\t\t\t                    |   ______________________________________  |   \n";
	cout << "\t\t\t                    |  |                                     |  |";
	cout << "\n\t\t\t                    |  |    PAKISTAN  ARMY  INITIAL  TEST    |  |   \n";
	cout << "\t\t\t                    |  |_____________________________________|  |    \n";
	cout << "\t\t\t                    |___________________________________________|    \n";
	
	
	cout << "\n\n\t******************************************   General Knowledge Test   ********************************************\n\n";

cout << "\n\n\n\n\nQ1. Which country is responsible for the development of the AK-47 assault rifle?" << endl;
    cout << "A. Russia"<< endl;
    cout << "B. China"<< endl;
    cout << "C. Pakistan"<< endl;
    cout << "D. Germany"<< endl;

   while (true) 
   {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score1++;
	}
	
	

        
        
        


cout << "\n\n\nQ2. What is the capital city of Australia?" << endl;
    cout << "A. Sydney"<< endl;
    cout << "B. Canberra"<< endl;
    cout << "C. Melbourne"<< endl;
    cout << "D. Perth"<< endl;
    
   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score1++;
	}
	
 
        


cout << "\n\n\nQ3. Which branch of the Pakistan Armed Forces operates the country's naval forces?" << endl;
    cout << "A. Pakistan Army"<< endl;
    cout << "B. Pakistan Air Force"<< endl;
    cout << "C. Pakistan Navy"<< endl;
    cout << "D. Pakistan Coast Guard"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score1++;
	}
	
   
        



cout << "\n\n\nQ4. Which country is known as the 'Land of the Rising Sun'?" << endl;
    cout << "A. Japan"<< endl;
    cout << "B. China"<< endl;
    cout << "C. South Korea"<< endl;
    cout << "D. Thailand"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score1++;
	}
	
        


    
cout << "\n\n\nQ5. Who painted the Mona Lisa?" << endl;
    cout << "A. Vincent van Gogh"<< endl;
    cout << "B. Pablo Picasso"<< endl;
    cout << "C. Leonardo da Vinci"<< endl;
    cout << "D. Michelangelo"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score1++;
	}
	
        


    
cout << "\n\n\nQ6. Which country has the largest military budget in the world?" << endl;
    cout << "A. United States"<< endl;
    cout << "B. China"<< endl;
    cout << "C. Russia"<< endl;
    cout << "D. India"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score1++;
	}
	
        
        



cout << "\n\n\nQ7. Which planet is known as the 'Red Planet'?" << endl;
    cout << "A. Venus" << endl;
    cout << "B. Mars" << endl;
    cout << "C. Saturn" << endl;
    cout << "D. Jupiter" << endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score1++;
	}
	

        
        


    
cout << "\n\n\nQ8. Which war is often referred to as the 'Forgotten War'?" << endl;
    cout << "A. World War I"<< endl;
    cout << "B. World War II"<< endl;
    cout << "C. Korean War"<< endl;
    cout << "D. Vietnam War"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score1++;
	}
	

        
        


cout << "\n\n\nQ9. What is the name of the operation launched by the Pakistan Army in 2014 to eliminate militant strongholds in the North Waziristan region?" << endl;
    cout << "A. Operation Zarb-e-Azb"<< endl;
    cout << "B. Operation Rah-e-Nijat"<< endl;
    cout << "C. Operation Swift Retort"<< endl;
    cout << "D. Operation Rah-e-Rast"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score1++;
	}
	

        
        


cout << "\n\n\nQ10. Who invented the telephone?" << endl;
    cout << "A. Thomas Edison"<< endl;
    cout << "B. Alexander Graham Bell"<< endl;
    cout << "C. Nikola Tesla"<< endl;
    cout << "D. Isaac Newton"<< endl;

   while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score1++;
	}
	

        
        



    cout << "\n\n\n\n\t\tYour score is: " << score1 << "/10" << endl;
    if(score1>=5){
	cout << "\tYou have passed the General Knowledge Test.\n\n";
	cout << "\tEnter any key to start next test.\n\n";}
	else
	cout << "\tYou have failed the General Knowledge Test.\n\n";
	
	getch();
	system("CLS");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("color f3");
	cout << "\t\t\t                    ____________________________________________      \n";
	cout << "\t\t\t                    |   ______________________________________  |   \n";
	cout << "\t\t\t                    |  |                                     |  |";
	cout << "\n\t\t\t                    |  |    PAKISTAN  ARMY  INITIAL  TEST    |  |   \n";
	cout << "\t\t\t                    |  |_____________________________________|  |    \n";
	cout << "\t\t\t                    |___________________________________________|    \n";
	
	cout << "\n\n\t******************************************   Academic Test   ********************************************\n\n";


cout << "\n\n\n\nQ1. The SI unit of power is" << endl;
    cout << "A. Watt"<< endl;
    cout << "B. Joule"<< endl;
    cout << "C. Ampere"<< endl;
    cout << "D. Volt"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score2++;
	}
	

        
        



cout << "\n\nQ2. Turning Affect of a body is called" << endl;
    cout << "A. Velocity"<< endl;
    cout << "B. Distance"<< endl;
    cout << "C. Torque"<< endl;
    cout << "D. Displacement"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ3. Seesaw is _____ kind of liver." << endl;
    cout << "A. First"<< endl;
    cout << "B. Second"<< endl;
    cout << "C. Third"<< endl;
    cout << "D. None"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ4. Hydrogen has _____ isotopes" << endl;
    cout << "A. One"<< endl;
    cout << "B. Four"<< endl;
    cout << "C. Three"<< endl;
    cout << "D. Five"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ5. Which gas is used in Rafrigerator?" << endl;
    cout << "A. Carbon"<< endl;
    cout << "B. Hydrogen"<< endl;
    cout << "C. Nitrogen"<< endl;
    cout << "D. Freon"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "D" || answer == "d") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ6. If a line bisect the other line with 90 degree angle, that is called" << endl;
    cout << "A. Bisector"<< endl;
    cout << "B. Perpendicular Bisector"<< endl;
    cout << "C. Altitude"<< endl;
    cout << "D. None"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ7. If set A has four members than the set A.A has how many members?" << endl;
    cout << "A. 35"<< endl;
    cout << "B. 16"<< endl;
    cout << "C. 20"<< endl;
    cout << "D. 8"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ8. If |A|=0 than A is called " << endl;
    cout << "A. Singular"<< endl;
    cout << "B. Identity"<< endl;
    cout << "C. Non-Singular"<< endl;
    cout << "D. None"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "A" || answer == "a") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ9. Here is ___ pen, you give me yesterday." << endl;
    cout << "A. an"<< endl;
    cout << "B. the"<< endl;
    cout << "C. a"<< endl;
    cout << "D. all is correct"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "B" || answer == "b") {
    	score2++;
	}
	

        
        

cout << "\n\n\nQ10. Which one is correct in spellings?" << endl;
    cout << "A. Laeutenant"<< endl;
    cout << "B. Laftenant"<< endl;
    cout << "C. Lieutenant"<< endl;
    cout << "D. Liautenent"<< endl;

	while (true) {
        cout << "Answer: ";
        cin >> answer;
		
		int ansLength = answer.length();
		
		if(ansLength>1 || ansLength<1){
			cout << "Select any one option.\n";
		}else{
			if (answer == "A" || answer == "a" || answer == "B" || answer == "b" ||
            answer == "C" || answer == "c" || answer == "D" || answer == "d") {
            break;
	        } else {
	            cout << "Invalid input. Please enter from the given options.\n";
	        }
		}
    }
    
    if (answer == "C" || answer == "c") {
    	score2++;
	}
	

        
        


    cout << "\n\n\n\n\t\tYour score is: " << score2 << "/10" << endl;
    if(score2>=5)
    {
	cout << "\tYou have passed the Intelligenece Test.\n\n";
	cout << "\tEnter any key to start next test.\n\n";
	}
	else
	cout << "\tYou have failed the Academic Test.\n\n";
	getch();
	system("CLS");
	
	
	
	system("color a1");
	if(score>=5 || score1>=5 || score>=5)
	{
	cout << "\n\n\n\n\n\n\t\t\t  ****** Congraturations! You have passed the initial test  ******\n\n\n\n\n\n\n";
	cout <<"\t Instructions: \n";
	cout <<"\t- Don't leave your seat. Call the invilegilator and show him this screen.\n";
	cout <<"\t- After stamping your roll number slip, the person will guide you about the next procedure.\n";
	cout <<"\t- Prepare your self for the physical test and initial interview\n";
	cout <<"\t- Best of luck.\n\n\n\n\n";
	}
	
	
	else
	{
	cout << "\n\n\n\n\n\n\t\t\t  ******  You have failed the initial test  ******\n\n\n\n\n\n\n";
	cout <<"\t Instructions: \n";
	cout <<"\t- Don't leave your seat. Call the invilegilator and show him this screen.\n";
	cout <<"\t- After stamping your roll number slip, the person will guide you about the next procedure.\n";
	cout <<"\t- Best of luck for next time.\n\n\n\n\n";
}
	
}
