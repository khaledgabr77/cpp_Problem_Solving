/*
Define a class FullName and Player with the following specifications:
FullName
---
- FirstName: string
- MiddleName: string
- LastName: string
---
<<constructor>> + FullName()
<<destructor>> +~ FullName()
+ setFirstName(string)
+ getFirstName(): string
+ setMiddleName(string)
+ getMiddleName(): string
+ setLastName(string)
+ getLastName(): string

Player
---
-Player_ID: string
-Player_Name: FullName
-Matches_Played: int
-Goals_Scored: int
---
<<constructor>> + Player()
<<destructor>> +~ Player()
+ setPlayer_ID(string)
+ getPlayer_ID(): string
+ setMatches_Played(int)
+ getMatches_Played(): int
+ setGoals_Scored(int)
+ getGoals_Scored(): int
+ setPlayer_Name(FullName)
+ getPlayer_Name()
<<friend>> + Increase_GoalsScored(Player, int)
Increase_GoalsScored(int) is friend function for Player:
This function will increase Goal_scored by some int every time when called.

Write C++ create object pointer(through new) to Class Player and menu driven program
to add player details (allocate memory for object and get player details),
display player details, increase player goal scored delete player from memory.
*/

#include <iostream>
#include <string>

class FullName{
    private:
        std::string firstName;
        std::string middelName;
        std::string lastName;


    public:
        FullName(){
            firstName = "Khaled";
            middelName = "Hammad";
            lastName = "Gabr";

        }
        void setFirstName(const std::string& first_name){
            firstName = first_name;
        }
        std::string getFirstName(){return firstName;}
        void setMiddleName(const std::string& middel_name) {
            middelName = middel_name;
        }
        std::string getMiddleName(){return middelName;}
        void setLastName(const std::string& last_name) {
            lastName = last_name;
        }
        std::string getLastName(){return lastName;}

        ~FullName(){}
};

class Player{
    private:
        std::string playerID;
        int matches_Played;
        FullName player_Name;

    public:
        static int goal_Scored;

        Player(){
            playerID = "FC19921609";
            matches_Played =200;            
        }
        Player(std::string id, int matches){
            playerID = id; 
            matches_Played = matches;}

        
        void setPlayer_ID(const std::string& player_id)
        {playerID = player_id;}
        std::string getPlayer_ID(){return playerID;}
        void setMatches_Played(int match_played)
        { matches_Played = match_played;}
        int getMatches_Played(){return matches_Played;}
        void setGoals_Scored(int goals_scored) {goal_Scored = goals_scored;}
        int getGoals_Scored(){return goal_Scored;}
        friend void Increase_GoalsScored(Player);

 
         ~Player(){}
 };
 int Player::goal_Scored;
 void Increase_GoalsScored(Player player)
 {
    player.goal_Scored++;
 }

 int main(){

    std::string first, second, third;
    std::string id;
    int matches,goals;
    int choice;
    while(true){
        
        FullName fullname;
        std::cout << "Enter your FullName:\n ";
        std::cout << "Enter First Name: \n";
        std::cin >> first;
        std::cout << "Enter Second Name: \n";
        std::cin >> second;
        std::cout << "Enter Last Name: \n";
        std::cin >> third;
        
        fullname.setFirstName(first);
        fullname.setMiddleName(second);
        fullname.setLastName(third);
        std::cout << fullname.getFirstName() << " ";
        std::cout << fullname.getMiddleName() << " ";
        std::cout << fullname.getLastName() << " ";

        Player player;
        std::cout << "\nWelcome Menu:\n ";
        std::cout << "[1] Add details\n";
        std::cout << "[2] Display details\n";
        std::cout << "[3] No. of goals\n";
        std::cout << "[4] Delete details\n";
        std::cout << "[0] Exit\n";
        std::cin >> choice;

        switch (choice){
            case 1:
                std::cout << "We have entered in the beginning!\n" ;
                fullname.setFirstName(first);
                fullname.setMiddleName(second);
                fullname.setLastName(third);
                
                break;
            case 2:
                std::cout << "Player Details:\n " ;
                std::cout << "Player ID: \n";
                std::cin >> id;
                std::cout << "Matches Played: \n";
                std::cin >> matches;
                std::cout << "Goals Scored: \n";
                std::cin >> goals;
                player.setPlayer_ID(id);
                player.setGoals_Scored(goals);
                player.setMatches_Played(matches);
                std::cout << "\n"; 
                std::cout << player.getPlayer_ID() "\n";
                std::cout << fullname.getFirstName() << " " << fullname.getMiddleName() << " " << fullname.getLastName() << "\n";
                std::cout << player.getMatches_Played();
                break;
            
            case 3:
            std::cout << "Numbers of Goals: \n";
            Increase_GoalsScored(player);
            break;
        
        
            case 4:
                std::cout << "Delete player: \n";
                break;
            
            case 5:
                system("exit");
            


        }
    }
    

    return 0;
 }