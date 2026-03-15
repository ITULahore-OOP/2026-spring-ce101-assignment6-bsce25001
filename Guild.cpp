#include "Guild.h"
#include "Hero.h"

Guild::Guild(string name){
    guildName=name;
    memberCount = 0;
    for(int i = 0; i < 15; i++){
        roster[i] = nullptr;
    }
}

Guild::~Guild(){
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

int Guild::calculateTotalGuildPower(){
    int totalPower = 0;
    for(int i = 0; i < memberCount; i++){
        totalPower += roster[i]->getPower();
    }
    return totalPower;
}

void Guild::displayGuildStats(){
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}
ostream& operator<<(ostream& output, const Guild& guild){
    output << "Guild: " << guild.guildName << endl;
    output << "Members: " << guild.memberCount << endl;
    for(int i = 0; i < guild.memberCount; i++){
        output << "- " << guild.roster[i]->getName()
               << " (Power: " << guild.roster[i]->getPower() << ")" << endl;
    }
    return output;
}
void Guild::operator+=(Hero* newMember){
    if(memberCount< 15){
        roster[memberCount]=newMember;
        memberCount++;
    }    
    else{
        cout<<"Guild is at full capacity!"<<endl;
    }
    
 }
