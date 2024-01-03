#ifndef interface
#define interface

void defn(std::string param, std::string input) {
   std::string B = "\033[34m" // Blue
   std::string G = "\033[32m" // Green
   std::string C = "\033[36m" // Cyan
   std::string R = "\033[31m" // Red
   std::string S = "\033[0m" // Reset
   std::string BD = "\033[1m" // Bold
   struct Header {
      std::string name;
      std::string icon;
      std::string color;
      std::string style = BD;
      std::string reset = S;
   };
   struct Menu {
     std::string menu_name;
     std::vector<std::string> menu_contents;
     std::string menu_description;
   };
   void printHeader(Header details) {
      std::cout<<style<<color<<name<<" "<<icon<<reset<<" ";
   }
   void printMenu(Menu details) {
      Header head;
      head.name = "HEAD";
      head.icon = ">>";
      head.color = G;
      printHeader(head);
      std::cout<<details.menu_name<<"\n\n";
      for(std::string content : details.menu_contents) {
         std::cout<<content<<"\n";
      }
      std::cout<<"\n"<<details.menu_description<<"\n\n"
   }
   
   if(param == "main_header") {
      std::cout<<"CPSPace Project\n\nThis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
   } else if(param == "main_menu") {
      Menu main_menu;
      main_menu.menu_name = "Main Menu";
      main_menu.menu_contents = {
         "(1) Unit Converter",
         "(2) Information",
         "(0) Exit Program"
      };
      main_menu.menu_description = "Enter available options.";
      printMenu(main_menu);
   } else if(param == "unit_converter") {
      Menu unit_converter;
      unit_converter.menu_name = "Unit Converter";
      unit_converter.menu_contents = {
         "(1) Length       |  (2) Area",
         "(3) Volume       |  (4) Weight",
         "(5) Temperature  |  (6) Speed",
         "(7) Pressure     |  (8) Power",
         "(9) Data Size    |  (-1) Previous",
         "(0) Exit Program"
      };
      unit_converter.menu_description = "Enter available options.";
      printMenu(unit_converter);
   } else if(param == "information") {
      std::cout<<"Done\n\n";
   } else if(param == "input_header") {
      Header input;
      input.name = "INPUT";
      input.icon = "<<"
      input.color = B;
      printHeader(input);
   } else if(param == "exit_header") {
      Header ext;
      ext.name = "EXIT";
      ext.icon = "<>";
      ext.color = C;
      printHeader(ext);
      std::cout<<"Exit Program\n\n";
   } else if(param == "error_header") {
      Header error;
      error.name = "ERROR";
      error.icon = "><";
      error.color = R;
      printHeader(error);
      std::cout<<"Unavailable option '"<<input<<"'\n\n";
   } else {
      std::cout<<"\n\n"<<B<<R<<"Parameter '"<<param<<"' Unavailable!"<<S<<"\n\n";
   }
}

#endif