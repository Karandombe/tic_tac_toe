#include<iostream>
using namespace std;
   

   //2nd step
  // position of the tic tac toe.
 char space [3] [3] = {{'1', '2','3'},{'4','5','6'},{'7','8','9'}};
 int row;
 int column;// in two dimentional array there is a rows and column
 
 // create variable tocken
 //4th step
 char token = 'x';
 
 int digit;
 /*step 10th|| for tie the match*/
 bool tie= false;

 string n1="";
 string n2="";

void functionOne() {

     
   //1st step
    
    

   

    // structure making
    //add multidimensional array we nned to add that positions inside the 
    // that clm
  

    cout<< "        |      |  \n";
    cout<< "        |      |  \n";
    cout<< "      "<<space[0][0]<<" | "  <<space[0][1]<<"    |  "<<space[0][2]<<"  \n";
    cout<< "        |      |  \n";
    cout<< " _______|______|_______\n";
    cout<< "        |      |  \n";
    cout<< "        |      |  \n";
    cout<< "      "<<space[1][0]<<" | "  <<space[1][1]<<"    |  "<<space[1][2]<<"  \n";
    cout<< "        |      |  \n";
    cout<< " _______|______|_______\n";
    cout<< "        |      |  \n";
    cout<< "        |      |  \n";
    cout<< "      "<<space[2][0]<<" | "  <<space[2][1]<<"    |  "<<space[2][2]<<"  \n";
    cout<< "        |      |  \n";
    cout<< "        |      |  \n";
    
}

void functionTwo() {
    //3rd step

    //now we can check for invalid value and make sure it is not there
    // now create variable digit so we can take from user
    
    int digit;

    if(token == 'x')
    {
        cout<<n1<<"please enter";
        cin>>digit;

        
    }

    if(token == '0')
    {
        cout<<n2<<"please enter";
        cin>>digit;

        
    }

 /*now just to check these digits for each and
  every row and clm one by one. and invalid value*/
  //5th step
  if(digit==1){  //declaring the position for the digits 1
    row=0;
    column=0;
  }

  if(digit==2){  //declaring the position for the digits 2
    row=0;
    column=1;
  }

  if(digit==3){  //declaring the position for the digits 3
    row=0;
    column=2;
  }

  if(digit==4){  //declaring the position for the digits 4
    row=1;
    column=0;
  }

  if(digit==5){  //declaring the position for the digits 5
    row=1;
    column=1;
  }

  if(digit==6){  //declaring the position for the digits 6
    row=1;
    column=2;
  }

  if(digit==7){  //declaring the position for the digits 7
    row=2;
    column=0;
  }

  if(digit==8){  //declaring the position for the digits 8
    row=2;
    column=1;
  }

  if(digit==9){  //declaring the position for the digits 9
    row=2;
    column=2;
  }

  else if(digit<1 || digit>9){
    
    // here if value other than these value then case is invalid
    //6th step
    cout<<"invalid !!!!!!"<<endl;
  }
  

  //7th step
  if(token== 'x' && space[row][column] != 'x' && space[row][column] != '0')
{
  space[row][column] = 'x';
  token = '0';

}


  // 
else if (token== '0' && space[row][column]!= 'x' && space[row][column] != '0')
{
     space[row][column] = '0';
  token = 'x';

}

else {

    cout<<" there is no empty space !"<<endl;

    functionTwo();

}

    functionOne();
}

bool functionThree()
{
    //8th step

    //conditions for game winning

    for(int i = 0;i<3; i++){

        // 1st row ele is same as the 1st row secound ele andd also for third position the it will be win
        if(space[i][0]==space[i][1] && space[i][0]== space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
        return true;
    }

    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
    {
        return true;
    }


    //9th step
    //for continueing match or not 

    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                if(space[i][j] != 'x' && space[i][j] != '0')
                {
                    return false;
                }
            }
    }
    tie = true;
    return false;
}




int main()
{
   // we are taking two players in this so taking two names of players
    
    cout<<"enter the name of the first player : \n ";
    getline(cin, n1);
    cout<<"enter the name of the secound player : \n";
    getline(cin, n2);

    cout<<n1<< " is player1 so he/she will play first \n";
    cout<<n2<< " is player2 so he/she will play secound \n";





 /*call function one by one
 this loop keep on returning until this fuction returns false
 or until playes 1 or player 2 wins the game 
 is not win  by any player then it repeats it self*/
{
  while(!functionThree())
  {
    functionOne();
    functionTwo();
    functionThree();

  }

  if(token == 'x' && tie == false)
  {
    cout<<n2<<"wins!!"<<endl;
  }

  else if(token == '0' && tie == false)
  {
    cout<<n1<<"wins!!"<<endl;

  }

  else{
    cout<<"It's a DRAW"<<endl;
      }

}

}




  










