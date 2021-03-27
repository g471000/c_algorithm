To start the program
```
gcc nameCard.c -o nameCard.o
./nameCard.o
```

This will show options like below
```
Namecard Manager Menu
1. Create
2. Delete
3. Search
4. Print All
5. Exit
Select option[1 - 5]: 
```

Type 1, then it will ask options to create a namecard like below:
Please insert info below to add a new namecard.
```
Name: pichu
Company: pokemon
Phone: 010-1234-7777
Updated [nameCard.txt]
```

Type 2, then it will show all list to show list of namecards. Choose one to delete.
Enter 7 will delete the pichu that we just entered.
```
Namecard Manager Menu
1. Create
2. Delete
3. Search
4. Print All
5. Exit
Select option[1 - 5]: 2


  #   Name           Company        Phone
--------------------------------------------------
  1   jieun          tappytoon      010-1234-1111  
  2   heize          pnation        010-1234-2222  
  3   kano           dogs           010-1234-4444  
  4   ameri          dogs           010-1234-5555  
  5   bambi          dogs           010-1234-6666  
  6   pikachu        pokemon        010-1234-3333  
  7   pichu          pokemon        010-1234-7777  

Please select name card number to delete: 7
Deleted #7(pichu, pokemon, 010-1234-7777)
  #   Name           Company        Phone
--------------------------------------------------
  1   jieun          tappytoon      010-1234-1111  
  2   heize          pnation        010-1234-2222  
  3   kano           dogs           010-1234-4444  
  4   ameri          dogs           010-1234-5555  
  5   bambi          dogs           010-1234-6666  
  6   pikachu        pokemon        010-1234-3333  
```

Type 3, to search namecard. you can find by using name, company or phone.
```
Please enter name (type - to skip): -
Please enter company (type - to skip): dogs
Please enter phone number (type - to skip): -
  #   Name           Company        Phone
--------------------------------------------------
  3   kano           dogs           010-1234-4444  
  4   ameri          dogs           010-1234-5555  
  5   bambi          dogs           010-1234-6666  

Please enter name (type - to skip): kano
Please enter company (type - to skip): -
Please enter phone number (type - to skip): -
  #   Name           Company        Phone
--------------------------------------------------
  3   kano           dogs           010-1234-4444  
```

Type 4 to print all list of the name card
```
Namecard Manager Menu
1. Create
2. Delete
3. Search
4. Print All
5. Exit
Select option[1 - 5]: 4


  #   Name           Company        Phone
--------------------------------------------------
  1   jieun          tappytoon      010-1234-1111  
  2   heize          pnation        010-1234-2222  
  3   kano           dogs           010-1234-4444  
  4   ameri          dogs           010-1234-5555  
  5   bambi          dogs           010-1234-6666  
  6   pikachu        pokemon        010-1234-3333  
```

Type 5 to exit the program
```
Namecard Manager Menu
1. Create
2. Delete
3. Search
4. Print All
5. Exit
Select option[1 - 5]: 5


Thank you. Good bye!
```
