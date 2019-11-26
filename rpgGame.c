//Contributors
//G. Poppe
//
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int numgen();

void main(void)
{
	srand(time(NULL));
	int x,y,z,i,h,g,k,choice=0, ran = 0, be = 0, watermelon = 0, choose, path, pack, guard, keep, bag, num1, answer = 64, num2;
	char name[256];
	char ba[256];
	char story[256];
	char ch;
	int boxNum=0;
	FILE *rptr;
	FILE *wptr;

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{

				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
				{ 
				}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find a hideous cat. It's wearing a cloak to hide from the bright light.\n");
							puts("It's so ugly you stare amazed, and forget to close the door.");
							puts("Choice 1: Say hello\n.");
							puts("Choice 2: Tell the cat your a dog person.\n");
							puts("Choice 3: Tell the cat your on a search for treasure..\n");
							puts("Choice 4: Just stare... like a weirdo\n");
							puts("What do you do?");
							scanf("%d",&choice);

							if(choice == 1)
							{
								puts("Leave me be, stranger.\n.");
								puts("You decide to stay, you tell the cat you need help on your quest. \nThe cat decides to help you on your quest... on one condition.");
								puts("You must first tell her you story, she will then decide if you are worthy.");
								puts("SYSTEM MESSAGE: TYPE A QUICK STORY NO MORE THAN 256 CHARACHTERS LONG.");
								wptr = fopen("YourStory.txt", "w");
								scanf("%s", story);
								fgets(story, sizeof(story), stdin);
								fprintf(wptr, "%s", story);
								puts("So this is what you wrote...\n");
								printf("%s", story);
								fclose(wptr);
								puts("\nGood, I guess you can spell, but can you do basic math?");
								puts("Lets play a game, all you have to do is answer correctly... \n");
								puts("How many times would you have to multiply 8 to get 64?");
								scanf("%d", &num1);
								num2 = pow(8, num1);
								if(num2 == answer){
									puts("Correct!");
								}
								else if(num2 != answer){
									puts("Wrong. Leave.");
								}
								puts("Alright, I have seen your worth. I know the questions can be a drag, but someone has to ask them.\n");
								puts("You chose incorectly, try again. Here's a hint... I respond better when your more forward.");
							}
							
							else if(choice == 2)
							{
								puts("About a year ago, I came upon a wishing well and approached it with the few coins I had left. I wished to be turned in to a great husky.");
								puts("Tell me do you know a spell to turn me into a dog?\n 0 for yes or 1 for no.");
								scanf("%d",&be);

								if(be == 0){
									puts("Then do it! Change me!\n You tell her it has a 50 percent chance of working, she stands hopefull it will work.");
									puts("You cast the spell....... ");
									int numgen();

									if(ran == 0){
										puts("It worked! I'll never forget this stanger. I will finally see the light again.");
									}
									else if(ran == 1){
										puts("I guess I'll never leave, the dark is where I'm meant to be.");

									}
								}
								if(be == 1){
									puts("Then I do not need you.");
								}
							}
							
							else if(choice == 3)
							{
								puts("Your search ends here, you seem to have searched far and wide. I'll tell you the treasure is hidden further inside. The dungeon is filled withvrooms, your search is almost over.\n");
								puts("If you can answer correctly I'll tell you where your treasure lies.\n");
								puts("Let's start off easy... If a woman has 20 watermelons in her cart but needs to get 10 more how many will she have?");
								puts("Honestly, I'm hunting treasure so I don't have to do stuff like this... The cat just stares. You answer: ");
								scanf("%d", &watermelon);
								if(watermelon == 30){
									puts("Correct! Although if you had failed that I doubt you would know how much treasure is in here... she mumbles.\n Let's continue!\n");
									puts("I like games. She states. Solve this riddle from one of my favorites.\n");
									puts("What is the beginning of eternity, the end of time and space, the beginning of every end and the end of every race?\n");
									puts("Here's a clue, the answer is only 1 charachter long... good luck.");
									puts("SYSTEM MESSAGE: ANSWER MUST BE LOWERCASE.");
									scanf("%s", &ch);
									if(ch == 'e'){
										puts("Correct! Now I'm impressed. Just one last little thing, if you get this than we are done.");
										puts("Just choose correctly and you win. There is a diamond at the center of the next room it shines bright but the room is filled with traps. You have a backpack on, it's heavy. There are three paths to the diamond, one to the left, one to the right, and down the center.\nThe center seems clear, but the easy path isn't always the best...\nThe path on the left seems to have a pit of spikes you would have to jump, a thin path that requires great balance, and then a rope(that seems old) that dangles from the roof that you need to swing from in order to reach the jewel.\nThe path on the right is like a speed test you need to hit a button that opens a gate across the room(if you don't get to it in time that door will never open again) if you make it there is a guard you must sneak past, and a room full of mines that will end you journey if you aren't careful.\nSo which path do you choose. Path 1(Left), 2(Center), or 3(Right).");
										puts("SYSTEM MESSAGE: ANSWER MUST BE EITHER 1, 2, OR 3.");
										scanf("%d", &path);
										if(path == 1){
											puts("The left path it is. The journey ahead seems like it requires precision do you keep your backpack on? Yes or no?");
											puts("SYSTEM MESSAGE: 0 FOR NO, 1 FOR YES.");
											scanf("%d", &pack);
											if(pack ==0){
												puts("You throw your bag aside and continue on\n");
												puts("Without the bag weighing you down you quickly clear the gap and easily keep balance on the wall, the rope doesn't break because you're light and nimble. The jewel is yours.\n");
												puts("Congragualtions! Your treasure awaits just beyond this door.\nYou walk in to see more gold than even a king has ever lied their eyes on.");
											}
											else if(pack == 1){
												puts("Good luck. You approach the jump and well what do you know your way too heavy, your stubborness has landed you in a pit of spikes.\n");
												puts("Wrong answer! Those who are greedy are not worthy of the treasure that I hold.\n");
											}
										}
										else if(path == 2){
											puts("I'll tell you now you chose... poorly. You walk down the center path and fall through the false floor, plumetting down a fall not even a god could survive...\n");
											puts("Wrong answer! Those who are not willing to work for it are not deserving of it.\n");
										}
										else if(path == 3){
											puts("The RIGHT path it is. Your bag might weigh you down during this test of speed what do you do? Keep it on or take it off.\n");
											puts("SYSTEM MESSAGE: ENTER 0 TO KEEP IT ON, 1 TO TAKE IT OFF.\n");
											scanf("%d", &pack);
											if(pack == 0){
												puts("You chose to keep it on interesting...\n");
												puts("Before hitting the button you realize the bag will weigh you down. You think maybe you should throw it across before hitting the button, but maybe risking it is best.\n");
												puts("Do you throw it across or risk it and keep it on.\n");
												puts("SYSTEM MESSAGE: 0 TO THROW IT, 1 TO KEEP IT\n");
												scanf("%d", &keep);
												if(keep == 1){
													puts("Lets Hope luck is on your side... This could go either way.\n");
													int numgen();
													if(ran == 0){
														puts("Success! Looks like you just made it throgh with that pesky bag.\n");
														puts("You enter a room with a guard pacing back and forth, you can sneek past or throw your bag as a distraction.\n");
														puts("SYSTEM MESSAGE: TO SNEEK ENTER 0, TO DISTRACT ENTER 1.\n");
														scanf("%d", &bag);
														if(bag == 0){
															puts("You try to sneek by, but you bag gives you away... you got caught!\n");
															puts("Looks like you aren't worthy. Those who are careless are bound to fail.\n");
														}
														else if(bag == 1){
															puts("You throw your bag across the room! The guard rushes over to see what caused the commotion, you see your chance and run past entering the next room. You quickly manuever past the mine and retrieve the jewel... THE TREASURE IS YOURS!\n");
															puts("Your treasure awaits you adventurer.\nYou enter the room to see treaseure stacked so high even the moon seems closer.\n");
														}
													}
													else if(ran != 0){
														puts("Looks like you aren't as lucky as you look. The gate closes before you can get past it. Your journey ends here.\n");
													}
												}
												else if(keep == 0){
													puts("You throw it and make it across just in time. You enter a room with a guard pacing back and forth, do you sneek past or run?\n");
													puts("SYSTEM MESSAGE: 0 TO RUN, 1 TO SNEEK");
													scanf("%d", &guard);
													if(guard == 0){
														puts("You run past but in your haste you trip and land right on the mines.\n");
														puts("Looks like your search ends here. Those who are not willing to wait are not rewarded.\n");
												}
													else if(guard == 1){
														puts("Success! You sneek past with no issues and the mines aren't a problem... the jewels are yours!\n");
														puts("You enter the room and see so much treasure you think even the sea isn't this vast.\n");
														puts("Looks like your journey has come to a satisfying end.");
													}

											}
											if(pack == 1){
												puts("You throw it to the side, hit the button and run! Your speed is incredible you clear the gate with time to spare...\n");
												puts("You see a guard pacing back and forth. Do you sneek past or run by?\n");
												puts("SYSTEM MESSAGE: 0 TO SNEEK BY, 1 TO RUN\n");
												scanf("%d", &guard);
												if(guard == 0){
													puts("Success! You sneek past with no issues. And the mines aren't a problem the jewel is yours!\n");
													puts("Looks like you win stranger. Your treasure awaits you just beyond this door.\n");
													puts("You enter the door and see the treasure is so massive it will keep you family fed throgh the ages.\n");
												}
												else if(guard == 1){
													puts("Honestly you're too hasty... you run past the guard only to trip and land right on the mines.\n");
													puts("Those who are unwilling to wait for it cannot be rewarded.\nYou fail.");
												}
											}
										}
									}
									else if(ch != 'e'){
										puts("Got to admit that one is a bit tricky, maybe next time. For now you're not worthy.");
									}
								}
								else if(watermelon != 30){
									puts("Just get out.\n");
								}

							}
							
							else if(choice == 4)
							{
								puts("If you're just going to stand there I'll put you to work. Read me my favorite story..");
								puts("She hands you a book.\n");
								puts("Green Eggs And Ham? I've seen this somewhere before... you begin to read\n");
								rptr = fopen("GreenEggsAndHam.txt", "r");
								while(!feof(rptr)){
									char be[10];
									fscanf(rptr, "%s", be);
									printf("%s ", be);
								}
								puts("\nThat was great... kinda feels like a knock off.\n");
								puts("It is. You reply.\n");
								puts("She says you caught me. I can't ever leave this cursed placce, I wrote it from memory.\n");
								puts("You think maybe there's something else you could have done...\n");
							}
							break;

								
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;




			}
		}	
	}
	 int numgen(){
		ran = rand() % 2;
		return ran;
	}
    }
}

