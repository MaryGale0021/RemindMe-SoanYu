#include<iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <windows.h>


using namespace std;


	class data {
			public: 
			char code[50];
			char codee[50];
			char codeee[50];
   			char day[50];
   			char days [50];
   			char dayss [50];
   			char time[50];
   			char topics[50];
		};	

	class data student[50];
	int subject;
	int number;
	int numberr;
	int i,j,k;
	
	int ask(){
	 	cout<<"\n\nHow many subjects are you enrolled to that has FINALS: ";
		cin>>subject;	
			if (subject == 0){
   				cout<<"Noted!";
			   }
			else{
			for(i=1;i<=subject;i++){
   				cout<<"\n\nSubject Code: ";
   				cin>>student[i].code;
   				cout<<"When is your finals? (ex. 05/21/2021) ";
   				cin>>student[i].day;
   				cout<<"What time (1-4PM): ";
   				cin>>student[i].time;
   				cout<<"What are the topics Covered? (Avoid-using-spaces) ";
   				cin>>student[i].topics;
   				cout<<"Noted!";
   			}
   		}
   		cout<<"\n\n\nHow many subjects do you have PROJECT? " ;
   		cin>>number;
   			if (number == 0){
   				cout<<"Noted!";
			   }
			else{
   			for(j=1;j<=number;j++){
   				cout<<"\n\nSubject Code: ";
   				cin>>student[j].codee;
   				cout<<"When is the submission? ";
   				cin>>student[j].days;
   				cout<<"Noted!";
			   }
		}
		cout<<"\n\n\nHow many subjects do you still have an ASSIGNMENT? " ;
   		cin>>numberr;
   			if (numberr == 0){
   				cout<<"Good Job!";
			   }
			else{ 
   			for(k=1;k<=numberr;k++){
   				cout<<"\n\nSubject Code: ";
   				cin>>student[k].codeee;
   				cout<<"When is the submission? ";
   				cin>>student[k].dayss;
   				cout<<"Noted!";
			   }
			}   
		}
		
		
int main()
{
	ofstream myfile;
	myfile.open("Rem!nd Me.txt");
	

	string name;
	string course;
	string year;
	int term;
	
	// to have a copy of the data inputted

	cout<<"Welcome to Rem!nd Me, Lasallian Engineer!\nYour everyday guide towards success.\n\n";
	
	cout<<"Name: ";
	getline(cin, name);
	cout<<"Course (ex.IE-IT): ";
	cin>>course;
	cout<<"Academic Year: ";
	cin>>year;
	cout<<"Term Number: ";
	cin>>term;
	

	ask ();
	
	int hour=0;
	int min=0;
	int sec=0;
	char time;
	char reminder;
	do{
	
	printf("\n\n\nEnter time now HH:MM:SS (24 hour format)\n");
			scanf("%d",&hour);
			scanf("%d",&min);
			scanf("%d",&sec);
	int hour1=0;
	int min1=0;
	int sec1=0;
		start:
			printf("\nSet Alarm in HH:MM:SS\n");
			scanf("%d",&hour1);
			scanf("%d",&min1);
			scanf("%d",&sec1);
		
		
																	
		if(hour<24 && min<60 && sec<60)
		{	
				for(hour; hour<24; hour++){
					for(min; min<60; min++){
						for(sec;sec<60;sec++){
							system("CLS");	
							printf("\nToday's time is\n");
							printf("%d:%d:%d", hour, min, sec);	
																	
							if (hour>12){
								printf("PM");
								}
							else {
								printf("AM");
								}				
									if(hour == hour1 && min == min1 && sec == sec1){
									//printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									Beep (1568,200);
									cout<<"\nDo you want to preview your reminders (Y/N): ";
								  	cin>>reminder;
								  		if (reminder == 'Y' || reminder == 'y'){
								  		break;
									  }
										else  {
										goto start;
								}

								}
								for(double i=0;i<99999999;i++){
								i++;
								i--;
								}
							}
					sec = sec1;
					break;
					}
				min = min1;
				break;
				}
			hour = hour1;
			break;
		}
	else {
		printf("Enter correct time format in HH:MM:SS\n");
	}
}

while (reminder == 'Y' || 'y'); 
	cout<<"\n\nName: "<<name;
	cout<<"\nCourse (ex.IE-IT): "<<course;
	cout<<"\nAcademic Year: "<<year;
	cout<<"\nTerm Number: "<<term;
	
	myfile<<"\n\nName: "<<name;
	myfile<<"\nCourse (ex.IE-IT): "<<course;
	myfile<<"\nAcademic Year: "<<year;
	myfile<<"\nTerm Number: "<<term;
	
			cout<<"\n\n\nYour FINALS schedule: \n";
			myfile<<"\n\n\nYour FINALS schedule: \n";
			if (subject == 0){
   				cout<<"You don't have any Finals for this term";
			   }
			else{ 
			for(int i=1;i<=subject;i++){
					cout<<"\n\nSubject: "<<student[i].code;
					cout<< "\nDate: " << student[i].day<< "\nTime: " <<student[i].time;
					cout<<"\nTopics Covered: \n" <<student[i].topics;
					myfile<<"\n\nSubject: "<<student[i].code;
					myfile<< "\nDate: " << student[i].day<< "\nTime: " <<student[i].time;
					myfile<<"\nTopics Covered: \n" <<student[i].topics;
					
			}
		}
			cout<<"\n\n\nSubjects you have PROJECTS with: ";
			myfile<<"\n\n\nSubjects you have PROJECTS with: ";
			if (number == 0){
   				cout<<"You have no project!";
			   }
			else{ 
			for(j=1;j<=number;j++){
   					cout<<"\n\nSubject: "<<student[j].codee;
   					cout<<"\nSubmission day: "<<student[j].days;
   					myfile<<"\n\nSubject: "<<student[j].codee;
   					myfile<<"\nSubmission day: "<<student[j].days;
   				}
   			]	
   			cout<<"\n\n\nSubjects you have ASSIGNMENTS with: ";
			myfile<<"\n\n\nSubjects you have ASSIGNMENTS with: ";	
				if (numberr == 0){
   				cout<<"No pending assignment";
			   }
			else{ 	
   			for(k=1;k<=numberr;k++){
   					cout<<"\n\nSubject: " <<student[k].codeee;
   					cout<<"\nSubmission day: "<<student[k].dayss;
   					myfile<<"\n\nSubject: " <<student[k].codeee;
   					myfile<<"\nSubmission day: "<<student[k].dayss;   	
			   	}	 
		}
cout<<"\n\nYou're almost there, Don't give up on your dreams future Engineer!";


	myfile.close();
	return 0;

}
	

	
