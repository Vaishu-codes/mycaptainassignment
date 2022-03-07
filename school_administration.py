#basic school administration tool
import csv

def write_into_csv(info_list):
    with open('student_info.csv','a',newline=' ')as csv_file:
        writer = csv.writerow(csv_file)
        
        if csv_file.tell()==0:
             writer.writerow(["Name","Age","Contact number","E-mail ID"])
            
        writer.writerow(info_list)
if__name__ == "__main__":
    condition=True 
        
while(condition):
    student_info=input("Enter student information in the following format(Name Age Contact_number E-mail_ID):")
    print("Entered information:"+student_info)
    
    #split
    student_info_list = student_info.split(' ')
    print("Entered split up information is:"+str(student_info_list))
    
    print("\nThe entered infromation is -\nName: {}\nAge:{}\nContact_number: {}\nE-mail ID:{}"
          .format(student_info_list[0], student_info_list[1],student_info_list[2],student_info_list[3]))
    
    choice_check=input("Is the entered information correct?(yes/no:")
    
    if choice_check=="yes":
        write_into_csv(student_info_list)
    
        condition_check=input("Enter (yes/no) if you want to enter information for another student: ")
        if condition_check=="yes":
            condition=True
        elif condition_check=="no":
            condition=False
    elif condition_check=="no":
        print("\nPlease re-enter the values!")