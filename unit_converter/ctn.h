#ifndef ctn
#define ctn

#define B "\033[34m"// Blue
#define G "\033[32m" // Green
#define C "\033[36m" // Cyan
#define R "\033[31m" // Red
#define S "\033[0m" // Reset
#define BD "\033[1m" // Bold

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

void defn(std::string param, std::string input) {
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
   } else if(param == "length_units") {
      Menu length_units;
      length_units.menu_name = "Length";
      length_units.menu_contents = {
         "(1) Kilometer          |  (2) Hectometer",
         "(3) Decameter          |  (4) Meter",
         "(5) Decimeter          |  (6) Centimeter",
         "(7) Millimeter         |  (8) Micrometer",
         "(9) Nanometer          |  (10) Picometer",
         "(11) Mile              |  (12) Yard",
         "(13) Foot              |  (14) Inch",
         "(15) Nautical Mile     |  (16) Light Year",
         "(17) Astronomical Unit |  (18) Parsec",
         "(19) Lunar Distance    |  (-1) Previous",
         "(0) Exit Program"
      };
      length_units.menu_description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      printMenu(length_units);
   } 
   else if(param == "information") {
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