#include <iostream>

using namespace std;

int main()
{
int playerHealth;
string playAgain;
while(playerHealth>=1 || playAgain=="X" || playAgain=="x")
{
    string playerName;
    string choice1;
    string choice2;
    string choice3;
    string choice4;
    string choice5;
    string choice6;
    string choice7;
    string choice8;
    string choice9;
    string choice10;
    string choice11;
    string choice12;
    string choice13;
    string choice14;
    string choice15;
    string choice16;
    string choice17;
    string choice18;
    string choice19;
    string choice20;
    string choice21;
    string choice22;
    string choice23;
    string choice24;
    string choice25;
    string choice26;
    string choice27;
    string choice28;
    string choice29;
    int playerHealth=100;
   cout<<"Hello traveler! You're finally awake! What shall I call you?"<<endl;
   cout<<" "<<endl;

   cout<<"What's my name again?  ";cin>>playerName;
   cout<<" "<<endl;

   cout<<"Ah, "<<playerName<<". What a powerful name! A name like that is sure to bring the peace we need to this land! Well "<<playerName<<", this world will need your bravery. Go forth and fight!"<<endl;
    cout<<" "<<endl;


///////////////SCENARIO 1///////////////////////////////////////
   cout<<"You begin walking on a desolate gravel path. Watch out! An enemy goblin has appeared! What attack do you hit them with?"<<endl;
   cout<<" "<<endl;

   cout<<"A. Punch \t B. Kick \t C. Slap"<<endl;
   cin>>choice1;

   if(choice1=="A" || choice1=="a")
   {
       cout<<"You dealt critical damage and defeated the goblin!"<<endl;
        cout<<" "<<endl;
   }
      else if(choice1=="B" || choice1=="b")
   {
       cout<<"You hit the goblin! Alas, it was not enough to defeat him. Try another attack."<<endl;
       cout<<" "<<endl;
   }
      else if(choice1=="C" || choice1=="c")
   {
       cout<<"The goblin dodged your attack! He retaliated and struck a fatal blow against you. You lost 100 health. "<<endl;
       playerHealth=100-100;
   }


//////////////SCENARIO 2/////////////////////////////////////////////////
   if(choice1=="A" || choice1=="a")
   {
       cout<<"You continue to walk on the path and reach a fork in the road. Do you turn left or right?"<<endl;
       cout<<""<<endl;
       cout<<"A. Turn left into the dark forest \t B. Turn right into the open field \t C. Turn back"<<endl;
       cin>>choice2;

////////////SCENARIO 2A/////////////////////////////////////////////////////
    if(choice2=="A" || choice2=="a" )
    {
        cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
        cout<<""<<endl;
        cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
        cout<<""<<endl;
         cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
         cin>>choice3;
          if(choice3=="A" || choice3=="a")
         {
             cout<<" "<<endl;
             cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
            goto win;
         }
         else if(choice3=="B" || choice3=="b")
         {
             cout<<" "<<endl;
             cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
             playerHealth= playerHealth-70;
             goto lose;
         }
         else if(choice3=="C" || choice3=="c")
         {
             cout<<" "<<endl;
             cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
             playerHealth= playerHealth-100;

         }


    }
    /////^^READY

    else if(choice2=="B" || choice2=="b")
    {
        cout<<"You turn right into the vast, open plain. You feel vulnerable as you continue to walk, like somebody is watching you..."<<endl;
        cout<<""<<endl;
        cout<<"As you walk you suddenly hear the rustling of leaves behind you. An ambush of gnomes sprints full force at you!"<<endl;
        cout<<""<<endl;
        cout<<"A. Stay and fight \t B. Run away \t "<<endl;
        cin>>choice4;
         if(choice4=="A" || choice4=="a")
            {
                cout<<"You attempt to fight of the hoard of gnomes. Unfortunately their mighty wrath is too much and you lose 50 health and are sent running. You lose 50 health."<<endl;
                playerHealth= playerHealth-50;
                cout<<" "<<endl;
                cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
                cout<<" "<<endl;
                cout<<"A. Turn left into the dark forest \t  "<<endl;
                cin>>choice5;
                if(choice5=="A" || choice5=="a" )
                {
                    cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                    cout<<""<<endl;
                    cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                    cout<<""<<endl;
                    cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                    cin>>choice6;
                    if(choice6=="A" || choice6=="a")
                    {
                        cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                        goto win;
                    }
                    else if(choice6=="B" || choice6=="b")
                    {
                        cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                        playerHealth= playerHealth-70;
                        goto lose;
                    }
                    else if(choice6=="C" || choice6=="c")
                    {
                        cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                        playerHealth= playerHealth-100;
                    }

                }
            }
         else if(choice4=="B" || choice4=="b")
        {
            cout<<"You sense that you are outmatched in this and decide to retreat."<<endl;
            cout<<" "<<endl;
            cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
            cout<<" "<<endl;
            cout<<"A. Turn left into the dark forest "<<endl;
            cin>>choice7;
              if(choice7=="A" || choice7=="a" )
            {
                cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                cout<<""<<endl;
                cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                cout<<""<<endl;
                cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                cin>>choice8;
                    if(choice8=="A" || choice8=="a")
                    {
                        cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                        goto win;
                    }
                    else if(choice8=="B" || choice8=="b")
                    {
                        cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                        playerHealth= playerHealth-70;
                        goto lose;
                    }
                    else if(choice8=="C" || choice8=="c")
                    {
                        cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                        playerHealth= playerHealth-100;
                    }
            }
         }
    }
    /////^^READY

//////SCENARIO 2B//////////////////////////
    else if(choice2=="C" || choice2=="c")
    {
        cout<<"You turn back the way you came and get sneak attacked by another goblin. You lose 80 health."<<endl;
        playerHealth= playerHealth-80;
        cout<<"You retreat back to the fork in the road. Which way do you turn."<<endl;
       cout<<""<<endl;

       cout<<"A. Turn left into the dark forest \t B. Turn right into the open field \t "<<endl;

       cin>>choice9;
       if(choice9=="A" || choice9=="a" )
        {
            cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
            cout<<""<<endl;
            cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
            cout<<""<<endl;
            cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
            cin>>choice10;
            if(choice10=="A" || choice10=="a")
            {
                cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                goto win;
            }
            else if(choice10=="B" || choice10=="b")
            {
                cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                playerHealth= playerHealth-70;
                goto lose;
            }
            else if(choice10=="C" || choice10=="c")
            {
                cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                playerHealth= playerHealth-100;
            }
        }

        else if(choice9=="B" || choice9=="b")
        {
            cout<<"You turn right into the vast, open plain. You feel vulnerable as you continue to walk, like somebody is watching you..."<<endl;
            cout<<""<<endl;
            cout<<"As you walk you suddenly hear the rustling of leaves behind you. An ambush of gnomes sprints full force at you!"<<endl;
            cout<<""<<endl;
            cout<<"A. Stay and fight \t B. Run away \t"<<endl;
            cin>>choice11;
            if(choice11=="A" || choice11=="a")
            {
            cout<<"You attempt to fight of the hoard of gnomes. Unfortunately their mighty wrath is too much and you lose 50 health and are sent running. You lose 50 health."<<endl;
            playerHealth= playerHealth-50;
            if(playerHealth<1)
                goto death;
            cout<<" "<<endl;
            cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
            cout<<" "<<endl;
            cout<<"A. Turn left into the dark forest \t "<<endl;
            cin>>choice12;
                if(choice12=="A" || choice12=="a" )
                {
                cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                cout<<""<<endl;
                cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                cout<<""<<endl;
                cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                cin>>choice13;
                        if(choice13=="A" || choice13=="a")
                        {
                            cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                            goto win;
                        }
                        else if(choice13=="B" || choice13=="b")
                        {
                            cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                            playerHealth= playerHealth-70;
                            goto lose;
                        }
                        else if(choice13=="C" || choice13=="c")
                        {
                            cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                            playerHealth= playerHealth-100;
                        }
                }
            }
         else if(choice11=="B" || choice11=="b")
         {
            cout<<"You sense that you are outmatched in this and decide to retreat."<<endl;
            cout<<" "<<endl;
            cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
            cout<<" "<<endl;
            cout<<"A. Turn left into the dark forest "<<endl;
            cin>>choice14;
              if(choice14=="A" || choice14=="a" )
                {
                    cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                    cout<<""<<endl;
                    cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                    cout<<""<<endl;
                    cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                    cin>>choice15;
                    if(choice15=="A" || choice15=="a")
                    {
                        cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                        goto win;
                    }
                    else if(choice15=="B" || choice15=="b")
                    {
                        cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                        playerHealth= playerHealth-70;
                        goto lose;
                    }
                    else if(choice15=="C" || choice15=="c")
                    {
                        cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                        playerHealth= playerHealth-100;
                    }

        //////READY^^
                }

            }
        }
    }
   }


/////////////////////SCENARIO 3///////////////////////
//////ISSUE
   else if(choice1=="B" || choice1=="b")
   {
       cout<<"What attack do you hit him with?"<<endl;
       cout<<" "<<endl;

       cout<<"A. Slap \t B. Punch \t C. Kick"<<endl;
       cin>>choice16;

       if(choice16=="A" || choice16=="a")
       {
           cout<<"The goblin avoided your attack and swung a damaging blow. You lost 20 health."<<endl;
           playerHealth = playerHealth-20;
       }
       else if(choice16=="B" || choice16=="b")
       {
           cout<<"You strike the goblin! The goblin falls to ground and you have defeated him!"<<endl;
       }
       else if(choice16=="C" || choice16=="c")
       {
           cout<<"The goblin runs away out of fear before you can strike again."<<endl;
       }
   }




/////////////////SCENARIO 3A//////////////////////////////////////////////////////
//////ISSUE
    if(choice16=="A" || choice16=="a" || choice16=="B" || choice16=="b" || choice16=="C" || choice16=="c")
    {
        cout<<"You continue to walk on the path and reach a fork in the road. Do you turn left or right?"<<endl;
        cout<<""<<endl;
        cout<<"A. Turn left into the dark forest \t B. Turn right into the open field \t C. Turn back"<<endl;
        cin>>choice17;

        if(choice17=="A" || choice17=="a" )
        {
        cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
        cout<<""<<endl;
        cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
        cout<<""<<endl;
        cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
        cin>>choice18;
            if(choice18=="A" || choice18=="a")
            {
                cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                goto win;
            }
            else if(choice18=="B" || choice18=="b")
            {
                cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                playerHealth= playerHealth-70;
                goto lose;

            }
            else if(choice18=="C" || choice18=="c")
            {
                cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                playerHealth= playerHealth-100;
            }
        }

////READY^^
        else if(choice17=="B" || choice17=="b")
        {
            cout<<"You turn right into the vast, open plain. You feel vulnerable as you continue to walk, like somebody is watching you..."<<endl;
            cout<<""<<endl;
            cout<<"As you walk you suddenly hear the rustling of leaves behind you. An ambush of gnomes sprints full force at you!"<<endl;
            cout<<""<<endl;
            cout<<"A. Stay and fight \t B. Run away \t"<<endl;
            cin>>choice18;
          if(choice18=="A" || choice18=="a")
            {
                cout<<"You attempt to fight of the hoard of gnomes. Unfortunately their mighty wrath is too much and you lose 50 health and are sent running. You lose 50 health."<<endl;
                playerHealth= playerHealth-50;
                cout<<" "<<endl;
                cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
                cout<<" "<<endl;
                cout<<"A. Turn left into the dark forest \t "<<endl;
                cin>>choice19;
                    if(choice19=="A" || choice19=="a" )
                    {
                        cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                        cout<<""<<endl;
                        cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                        cout<<""<<endl;
                        cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                        cin>>choice20;
                        if(choice20=="A" || choice20=="a")
                        {
                            cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                            goto win;
                        }
                        else if(choice20=="B" || choice20=="b")
                        {
                            cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                            playerHealth= playerHealth-70;
                            goto lose;
                        }
                        else if(choice20=="C" || choice20=="c")
                        {
                            cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                            playerHealth= playerHealth-100;
                        }

                    }
            }

         else if(choice18=="B" || choice18=="b")
        {
            cout<<"You sense that you are outmatched in this and decide to retreat."<<endl;
            cout<<" "<<endl;
            cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
            cout<<" "<<endl;
            cout<<"A. Turn left into the dark forest "<<endl;
            cin>>choice21;
              if(choice21=="A" || choice21=="a" )
                {
                    cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                    cout<<""<<endl;
                    cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                    cout<<""<<endl;
                    cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                    cin>>choice22;
                    if(choice22=="A" || choice22=="a")
                    {
                        cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                        goto win;
                    }
                    else if(choice22=="B" || choice22=="b")
                    {
                        cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                        playerHealth= playerHealth-70;
                        goto lose;
                    }
                    else if(choice22=="C" || choice22=="c")
                    {
                        cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                        playerHealth= playerHealth-100;
                    }
            }
         }
        }
////READY^^

    else if(choice17=="C" || choice17=="c")
    {
        cout<<"You turn back the way you came and get sneak attacked by another goblin. You lose 80 health."<<endl;
        playerHealth= playerHealth-80;
        if(playerHealth<1)
        goto death;
        cout<<"You retreat back to the fork in the road. Which way do you turn."<<endl;
        cout<<""<<endl;
        cout<<"A. Turn left into the dark forest \t B. Turn right into the open field \t "<<endl;
        cin>>choice23;
       if(choice23=="A" || choice23=="a" )
        {
            cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
            cout<<""<<endl;
            cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
            cout<<""<<endl;
            cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
            cin>>choice24;
            if(choice24=="A" || choice24=="a")
            {
                cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                goto win;
            }
            else if(choice24=="B" || choice24=="b")
            {
                cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                playerHealth= playerHealth-70;
                goto lose;
            }
            else if(choice24=="C" || choice24=="c")
            {
                cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                playerHealth= playerHealth-100;
            }
        }

        else if(choice23=="B" || choice23=="b")
        {
            cout<<"You turn right into the vast, open plain. You feel vulnerable as you continue to walk, like somebody is watching you..."<<endl;
            cout<<""<<endl;
            cout<<"As you walk you suddenly hear the rustling of leaves behind you. An ambush of gnomes sprints full force at you!"<<endl;
            cout<<""<<endl;
            cout<<"A. Stay and fight \t B. Run away \t"<<endl;
            cin>>choice25;
            if(choice25=="A" || choice25=="a")
            {
                cout<<"You attempt to fight of the hoard of gnomes. Unfortunately their mighty wrath is too much and you lose 50 health and are sent running. You lose 50 health."<<endl;
                playerHealth= playerHealth-50;
                cout<<" "<<endl;
                cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
                cout<<" "<<endl;
                cout<<"A. Turn left into the dark forest \t "<<endl;
                cin>>choice26;
                if(choice26=="A" || choice26=="a" )
                {
                    cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                    cout<<""<<endl;
                    cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                    cout<<""<<endl;
                    cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                    cin>>choice27;
                        if(choice27=="A" || choice27=="a")
                        {
                            cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                            goto win;
                        }
                        else if(choice27=="B" || choice27=="b")
                        {
                            cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                            playerHealth= playerHealth-70;
                            goto lose;
                        }
                        else if(choice27=="C" || choice27=="c")
                        {
                            cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                            playerHealth= playerHealth-100;
                        }
                }
            }
            else if(choice25=="B" || choice25=="b")
            {
                cout<<"You sense that you are outmatched in this and decide to retreat."<<endl;
                cout<<" "<<endl;
                cout<<"You come back to the fork in the road. Do you turn left or right?"<<endl;
                cout<<" "<<endl;
                cout<<"A. Turn left into the dark forest "<<endl;
                cin>>choice28;
                if(choice28=="A" || choice28=="a" )
                {
                    cout<<"You continue left into the woods covered in a thick darkness. As you walk, something shiny catches your eye. It's a sword! You have now acquired a new weapon"<<endl;
                    cout<<""<<endl;
                    cout<<"You venture into the darkness with your new found. You then a hear loud, low grumble. A seven foot ogre appears in front of you! How do you attack?"<<endl;
                    cout<<""<<endl;
                    cout<<"A. Use Sword \t B. Punch \t C. Kick"<<endl;
                    cin>>choice29;
                    if(choice29=="A" || choice29=="a")
                    {
                        cout<<"You used your sword to slash the ogre. It was very effective! The ogre falls to ground in defeat."<<endl;
                        goto win;
                    }
                    else if(choice29=="B" || choice29=="b")
                    {
                        cout<<"You attempt to punch the ogre and he grabs your arm and breaks it. You lose 70 health."<<endl;
                        playerHealth= playerHealth-70;
                        goto lose;
                    }
                    else if(choice29=="C" || choice29=="c")
                    {
                        cout<<"While winding up your kick you lose your balance and fall resulting in you hitting your head. You lose 100 health."<<endl;
                        playerHealth= playerHealth-100;
                    }
                }
            }

         }
    }
        }



////READY^^











death:
if(playerHealth<1)
{
    cout<<"GAME OVER"<<endl;
}

if(choice3=="A" || choice3=="a" || choice6=="A" || choice6=="a" || choice8=="A" || choice8=="a" || choice10=="A" || choice10=="a" || choice13=="A" || choice13=="a" || choice15=="A" || choice15=="a" || choice18=="A" || choice18=="a" || choice20=="A" || choice20=="a" || choice22=="A" || choice22=="a" || choice24=="A" || choice24=="a" || choice27=="A" || choice27=="a" || choice29=="A" || choice29=="a" )
{
    win:
    cout<<""<<endl;
    cout<<"YOU BEAT THE OGRE! YOU WON!"<<endl;
}

if(choice3=="B" || choice3=="b" || choice6=="B" || choice6=="b" || choice8=="B" || choice8=="b" || choice10=="B" || choice10=="b" || choice13=="B" || choice13=="b" || choice15=="B" || choice15=="b" || choice18=="B" || choice18=="b" || choice20=="B" || choice20=="b" || choice22=="B" || choice22=="b" || choice24=="B" || choice24=="b" || choice27=="B" || choice27=="b" || choice29=="B" || choice29=="b" )
{

    lose:
    cout<<""<<endl;
    cout<<"YOU DID NOT DEFEAT THE OGRE! YOU LOST!"<<endl;

}


if(choice3=="A" || choice3=="a" || choice6=="A" || choice6=="a" || choice8=="A" || choice8=="a" || choice10=="A" || choice10=="a" || choice13=="A" || choice13=="a" || choice15=="A" || choice15=="a" || choice18=="A" || choice18=="a" || choice20=="A" || choice20=="a" || choice22=="A" || choice22=="a" || choice24=="A" || choice24=="a" || choice27=="A" || choice27=="a" || choice29=="A" || choice29=="a" || choice3=="B" || choice3=="b" || choice6=="B" || choice6=="b" || choice8=="B" || choice8=="b" || choice10=="B" || choice10=="b" || choice13=="B" || choice13=="b" || choice15=="B" || choice15=="b" || choice18=="B" || choice18=="b" || choice20=="B" || choice20=="b" || choice22=="B" || choice22=="b" || choice24=="B" || choice24=="b" || choice27=="B" || choice27=="b" || choice29=="B" || choice29=="b" || playerHealth<1 )
{
    cout<<""<<endl;
    cout<<"Play again?"<<endl;
    cout<<""<<endl;
    cout<<"Press X to continue"<<endl;
    cin>>playAgain;
}

}





return 0;
}
