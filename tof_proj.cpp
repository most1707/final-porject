/*
Name: Mustafa Abdulgadir
Class: 2
department: computer engineering
*/

#include <bits/stdc++.h> 
using namespace std;
// include files from the library that has everything we need
class Contact {
// create a class data type and declare access specifiers public
    public:
    string data;
    Contact *next;
};
// add new contact to program by pointers
void push(Contact** head_ref, string new_data){
    Contact* new_contact = new Contact();
    new_contact->data = new_data;
    new_contact->next = (*head_ref);
    (*head_ref) = new_contact;
};
// add after a contact also pointers
void insertAfter (Contact* prev_contact, string new_data){
    if (prev_contact == NULL){
		cout<<"the given previous node cannot be NULL"; 
        return;
    }
    Contact* new_contact = new Contact();
    new_contact->data = new_data;
    new_contact->next = prev_contact->next;
    prev_contact->next = new_contact;
};
// show contacts added to program
void append(Contact** head_ref, string new_data){
    Contact* new_contact = new Contact();
    Contact *last = *head_ref;
    new_contact->data = new_data;
    new_contact->next = NULL;
    if (*head_ref == NULL){
        *head_ref = new_contact;
        return;
    }
// while loop to keep show contacts
    while (last->next != NULL)
        last = last->next;
        last->next = new_contact;
        return;
       
    
};
// prints contacts to board in queue
void printInfo(Contact *c){
    while (c != NULL)
    {
        cout<< c->data << "\n\n";
        c = c->next;
    }
    
};
// starting the main program that is necessary and it requires return integer
int main(){
    string x,y,z, L, J, K, H, G;
// define variables
    
   cout<<"Contact data : \n***********\n";
cout<<"********************** \n***************\n***************\n\n";
                                         
// program starts with everything empty
    Contact* head = NULL;
    Contact* second = NULL;
    Contact* third = NULL;
    Contact* forth = NULL;
    Contact* fifth = NULL;
    Contact* sixth = NULL;
    Contact* seventh = NULL;
    Contact* eighth = NULL;
    Contact* ninth = NULL;
    Contact* tenth = NULL;
    Contact* eleventh = NULL;
    Contact* twelfth = NULL;
    Contact* thirteenth = NULL;
    Contact* fourteenth = NULL;
    Contact* fifteenth = NULL;
    Contact* sixteenth = NULL;
    Contact* seventeenth = NULL;
    Contact* eighteenth = NULL;
    Contact* nineteenth = NULL;
    Contact* twentieth = NULL;
    Contact* twentyFirst = NULL;
    Contact* twentySecond = NULL;
    Contact* twentyThird = NULL;
    Contact* twentyForth = NULL;
    Contact* twentyFifth = NULL;
    Contact* twentySixth = NULL;
    Contact* twentySeventh = NULL;
    Contact* twentyEighth = NULL;
    Contact* twentyNinth = NULL;
    Contact* thirty = NULL;
    Contact* thirtyFirst = NULL;
    Contact* thirtySecond = NULL;
    Contact* thirtyThird = NULL;
    Contact* thirtyForth = NULL;
    // Contact* thirtyFifth = NULL;
    // Contact* thirtySixth = NULL;
    // Contact* thirtySeventh = NULL;
    // Contact* thirtyEighth = NULL;
    // Contact* thirtyNinth = NULL;
    // Contact* forty = NULL;
    // Contact* fortyFirst = NULL;
    // Contact* fortySecond = NULL;
    // Contact* fortyThird = NULL;
    // Contact* fortyForth = NULL;
    // Contact* fortyFifth = NULL;
    // Contact* fortySixth = NULL;
    // Contact* fortySeventh = NULL;
    // Contact* fortyEighth = NULL;
    // Contact* fortyNinth = NULL;
    // Contact* fiftieth = NULL;
    // Contact* fiftiethFirst = NULL;
    
// now program assigns everything need to add with pointer
// then starts add values
    head = new Contact();
    second = new Contact();
    third = new Contact();
    forth = new Contact();
    fifth = new Contact();
    sixth = new Contact();
    seventh = new Contact();
    eighth = new Contact();
    ninth = new Contact();
    tenth = new Contact();
    eleventh = new Contact();
    twelfth = new Contact();
    thirteenth = new Contact();
    fourteenth = new Contact();
    fifteenth = new Contact();
    sixteenth = new Contact();
    seventeenth = new Contact();
    eighteenth = new Contact();
    nineteenth = new Contact();
    twentieth = new Contact();
    twentyFirst = new Contact();
    twentySecond = new Contact();
    twentyThird = new Contact();
    twentyForth = new Contact();
    twentyFifth = new Contact();
    twentySixth = new Contact();
    twentySeventh = new Contact();
    twentyEighth = new Contact();
    twentyNinth = new Contact();
    thirty = new Contact();
    thirtyFirst = new Contact();
    thirtySecond = new Contact();
    thirtyThird = new Contact();
    thirtyForth = new Contact();
    // thirtyFifth = new Contact();
    // thirtySixth = new Contact();
    // thirtySeventh = new Contact();
    // twentyEighth = new Contact();
    // thirtyNinth = new Contact();
    // forty = new Contact();
    // fortyFirst = new Contact();
    // fortySecond = new Contact();
    // fortyThird = new Contact();
    // fortyForth = new Contact();
    // fortyFifth = new Contact();
    // fortySixth = new Contact();
    // fortySeventh = new Contact();
    // fortyEighth = new Contact();
    // fortyNinth = new Contact();
    // fiftieth = new Contact();
    // fiftiethFirst = new Contact();

// added pre data by my name contact
// and data will be stored in the program
    head->data="Name: Mustafa";
    head->next=second;
    second->data="Given Name: Most";
    second->next=third;
    third->data="Additional Name: None";
    third->next=forth;
    forth->data="Family Name: Algdal";
    forth->next=fifth;
    fifth->data="Yomi Name: abdalgader ";
    fifth->next=sixth;
    sixth->data="Given Name Yomi: algdal";
    sixth->next=seventh;
    seventh->data="Additional Name Yomi: None";
    seventh->next=eighth;
    eighth->data="Family Name Yomi: None";
    eighth->next=ninth;
    ninth->data="Name Prefix: M";
    ninth->next=tenth;
    tenth->data="Name Suffix: A";
    tenth->next=eleventh;
    eleventh->data="Initials: MUS";
    eleventh->next=twelfth;
    twelfth->data="Nickname: Most";
    twelfth->next=thirteenth;
    thirteenth->data="Short Name: Most";
    thirteenth->next=fourteenth;
    fourteenth->data="Maiden Name: Abdalgder";
    fourteenth->next=fifteenth;
    fifteenth->data="Birthday: 15/8/1999";
    fifteenth->next=sixteenth;
    sixteenth->data="Gender: Male";
    sixteenth->next=seventeenth;
    seventeenth->data="Location: omudrman";
    seventeenth->next=eighteenth;
    eighteenth->data="Billing Information: None";
    eighteenth->next=nineteenth;
    nineteenth->data="Directory Server: None";
    nineteenth->next=twentieth;
    twentieth->data="Mileage: None";
    twentieth->next=twentyFirst;
    twentyFirst->data="Occupation: None";
    twentyFirst->next=twentySecond;
    twentySecond->data="Hobby: Football, music";
    twentySecond->next=twentyThird;
    twentyThird->data="Sensitivity: Single";
    twentyThird->next=twentyForth;
    twentyForth->data="Priority: None";
    twentyForth->next=twentyFifth;
    twentyFifth->data="Subject: Computer eng.";
    twentyFifth->next=twentySixth;
    twentySixth->data="Notes: Sweetheart";
    twentySixth->next=twentySeventh;
    twentySeventh->data="Language: English, arabic";
    twentySeventh->next=twentyEighth;
    twentyEighth->data="Photo: None";
    twentyEighth->next=twentyNinth;
    twentyNinth->data="Group Membership: Wide";
    twentyNinth->next=thirty;
    thirty->data="E-mail 1 - Type: G-mail";
    thirty->next=thirtyFirst;
    thirtyFirst->data="E-mail 1 - Value: most11239@gmail.com";
    thirtyFirst->next=thirtySecond;
    thirtySecond->data="E-mail 2 - Type: Hotmail";
    thirtySecond->next=thirtyThird;
    thirtyThird->data="E-mail 2 - Value: ygjghrrr@hotmail.com";
    thirtyThird->next=thirtyForth;
    thirtyForth->data="Phone 1 - Type: Mobile";
    // thirtyForth->next=thirtyFifth;
    // thirtyFifth->data="Phone 1 - Value: 0016586515";
    // thirtyFifth->next=thirtySixth;
    // thirtySixth->data="Phone 2 - Type: Internet call";
    // thirtySixth->next=thirtySeventh;
    // thirtySeventh->data="Phone 2 - Value: 0920034485";
    // thirtySeventh->next=thirtyEighth;
    // thirtyEighth->data="Phone 3 - Type: Home0907875575";
    // thirtyEighth->next=thirtyNinth;
    // thirtyNinth->data="Phone 3 - Value: 0";
    // thirtyNinth->next=forty;
    // forty->data="Phone 4 - Type: None";
    // forty->next=fortyFirst;
    // fortyFirst->data="Phone 4 - Value: None";
    // fortyFirst->next=fortySecond;
    // fortySecond->data="Organization 1 - Type: Non-profit";
    // fortySecond->next=fortyThird;
    // fortyThird->data="Organization 1 - Name: None";
    // fortyThird->next=fortyForth;
    // fortyForth->data="Organization 1 - Yomi Name:NONE";
    // fortyForth->next=fortyFifth;
    // fortyFifth->data="Organization 1 - Title: NONE";
    // fortyFifth->next=fortySixth;
    // fortySixth->data="Organization 1 - Department: NONE";
    // fortySixth->next=fortySeventh;
    // fortySeventh->data="Organization 1 - Symbol: NONE";
    // fortySeventh->next=fortyEighth;
    // fortyEighth->data="Organization 1 - Location: New York, New York, US";
    // fortyEighth->next=fortyNinth;
    // fortyNinth->data="Organization 1 - Job Description: NONE";
    // fortyNinth->next=fiftieth;
    // fiftieth->data="Website 1 - Type: NONE";
    // fiftieth->next=fiftiethFirst;
    // fiftiethFirst->data="Website 1 - Value: NONE";
    // fiftiethFirst->next=NULL;
   
    printInfo(head);
// the code to show all that information

    cout<<"Which operation do you want to do?\n(add, delete, edit, combine, search): \n";
// ask the user what he wants to do
    cin>> L;
    if (L == "add"){
// if execute code when condition is right
        cout<<"do you want to,push, insert after, append: ";
        cin>> K;
        if (K == "push"){
            cout<<"Insert your field: ";
            cin>> J;
            push(&head, J);cout<<endl;
// add contact info by user choise
        }else if(K == "insert after"){
            cout<<"Insert your field: ";
            cin>> G;
            insertAfter(head->next, G);cout<<endl;
// add contact information after contact
        }else if (K == "append"){
            cout<<"Insert your field: ";
            cin>> H;
            append(&head, H);cout<<endl;
        }
    }
    printInfo(head);
// show all info


    return 0;
// program is ended successful now

}














