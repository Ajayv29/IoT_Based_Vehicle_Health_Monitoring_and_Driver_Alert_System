


#include<stdio.h>
#include<stdlib.h>


  typedef struct {

	   char patient_name[20];
	   char gender;
	   int mobile_number;
	   int patient_id;
	   char doctor_name[20];
  }patient;
 

  void Add(patient**,int *count);
  void Display(patient*,int);
  void get_info (patient*,int);
  void find_patient(patient*,int);


  int main(){
          
	  patient *p1;

	  p1 = (patient*) malloc (sizeof(patient));

	  if(p1 == NULL){
		  printf("Memory allocation failed!\n");
		  exit(-1);
	  }

	  else{
		  printf("Memory allocated successfully!\n");


	  int key;
   
          int count = 0;




	  do{
		  printf("*****Menu******\n");
		  printf("1. Add patient\n");
		  printf("2. Display the patient details\n");
		  printf("3. Search the patient\n");
		  printf("4. find the patient\n");
		  printf("5. Exit\n");


		  scanf("%d", &key);

		  switch(key){

			  case 1: 
				  Add(&p1,&count);
				  break;
		          case 2: 
				  Display(p1,count);
				  break;
			  case 3: 
			         get_info(p1,count);
		                  break;
		          case 4: 
		                 find_patient(p1,count);			 

		  
		  }
	  }while(key !=5);

                 return 0;

	  }


	  void Add(patient **p1, int *count){

		    int i;

		    *p1 = realloc(*p1, sizeof(patient)*(count+1));
                    if(*p1 == NULL){
			    printf("Memory allocation failed!");
			    exit(-1);
	            else{
			    printf("Memory allocated successfully!");
		    }

		    i = *count;
                   
		    printf("Enter patient name");
		    scanf("%[^\n]", (*p1)[i].patient_name);
		    printf("Enter age: ");
		    scanf("%d", &(*p1)[i].age);
		    printf("Enter doctor name: ");
		    scanf("%s", *p1[i].doctor_name);
		    printf("Enter patient id");
		    scanf("%d", (*p1)[i].patient_id);
		    printf("enter patient mobile_number number");
		    scanf("%d", &(*p1)[i].mobile_number);

		    }	
	  }

       void Display(patient *p1,int count){


	       for(int i=0; i<count; i++){

                       printf("*******printing patient details****");
		       printf("%s", p1[i].name);
		       printf("age %d", p1[i].age);
		       printf("patient_id %d", p1[i].patient_id);
		       printf("doctor_name %s", p1[i].doctor_name);
		       printf("mobile_number no %d", p1[i].mobile_number_number);
	       }




	  }











