# Online-Quiz-

#include<stdio.h>

#include<time.h>

#include<stdlib.h>

int main()

{
int score=0;

  int ans;
 
  int negative_mark=-1;

  int ques[5]=[0,1,2,3,4};

  srand(time(0)); 

  for(int i=4;i>0;i--)
  { int j=rand()/(i+1);

  int temp=ques[i];
  
  ques[i]=ques[j];

  ques[j]=temp;

  }

  printf(" Jay's Online Quiz " );

  printf("Rules\n");

  printf("+1 for correct answer\n"); 
  
  printf("-1 for wrong answer\n");
  
  printf("Enter only numbers 1 to 4\n");

  for(int i =0;i<5;i++){

  int q=ques[i];
  
  int correct_answer;

  if(q==0){

  printf("Q%d. What is the capital of France?\n", i+1);
  
  printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n"); 
  
  correct_answer = 3;

  }

  else if(q==1){

printf("Q%d. Which language is used for system programming?\n", i+1); 

printf("1. Python\n2. C\n3. Java\n4. HTML\n"); 

correct_answer = 2;

}

else if (q==2)
{
printf("\nQ%d. Who developed the C language?\n", i+1); 

printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n"); 

correct_answer = 1;

  }

  else if (q == 3) { 
  
  printf("\nQ%d. What is 5 + 3 * 2?\n", i+1); 
  
  printf("1. 16\n2. 11\n3. 13\n4. 10\n"); 
  
  correct_answer = 2;
  
  }
  
  else if (q == 4) {
  
  printf("\nQ%d. Which symbol is used for comments in C?\n", i+1);
  
  printf("1. //\n2. #\n3. <!-- -->\n4. **\n");
  
  correct_answer = 1; 
  
  }

  do{
  printf("Enter answer(1-4): " );
  
  scanf("%d",&ans);

  } while(ans<1 || ans >4 );

  if(ans==correct_ans)

  {

  score++;

  }

  else

  score+=negative_mark;

  if(score<0)

  {

  score=0;

  }

  printf(" YAH! YOU COMPLETED QUIZ \n");

  
  printf("Final score is %d out of 5 \n",score);

  return 0;

  }

  

  

  

  

  
  

  

  
