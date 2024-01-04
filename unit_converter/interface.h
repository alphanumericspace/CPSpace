#ifndef interface
#define interface

const std::string B = "\033[34m";// Blue
const std::string G = "\033[32m"; // Green
const std::string C = "\033[36m"; // Cyan
const std::string R = "\033[31m"; // Red
const std::string S = "\033[0m"; // Reset
const std::string BD = "\033[1m"; // Bold
const std::string BG = "\033[48;5;15m\033[38;5;0m"; // Background white & teks black

struct Header {
   std::string name;
   std::string icon;
   std::string color;
   std::string style = BD;
   std::string reset = S;
   void printHeader(void) {
      std::cout<<style<<color<<name<<" "<<icon<<reset<<" ";
   } 
};

struct Menu {
   std::string menu_name;
   std::vector<std::string> menu_contents;
   std::string menu_description = "\n";
   void printMenu(void) {
      Header head;
      head.name = "HEAD";
      head.icon = ">>";
      head.color = G;
      head.printHeader();
      std::cout<<BG<<" "<<menu_name<<" "<<S<<"\n\n";
      for(std::string content : menu_contents) {
         std::cout<<content<<"\n";
      }
      std::cout<<"\n"<<menu_description<<"\n\n";
   }
};

void defn(const std::string param, const std::string input = "") {
   if(param == "main_header") {
      std::cout<<BG<<"CPSPace Project"<<S<<"\n\nThis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
   } else if(param == "main_menu") {
      Menu main_menu;
      main_menu.menu_name = "Main Menu";
      main_menu.menu_contents = {
         "(1) Unit Converter",
         "(2) Information",
         "(0) Exit Program"
      };
      main_menu.menu_description = "Enter available options.";
      main_menu.printMenu();
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
      unit_converter.printMenu();
   } else if(param == "length_units") {
      Menu length_units;
      length_units.menu_name = "Length";
      length_units.menu_contents = {
         "(1) Kilometer(km)          |  (2) Hectometer(hm)",
         "(3) Decameter(dam)         |  (4) Meter(m)",
         "(5) Decimeter(dm)          |  (6) Centimeter(cm)",
         "(7) Millimeter(mm)         |  (8) Micrometer(μm)",
         "(9) Nanometer(nm)          |  (10) Picometer(pm)",
         "(11) Mile(mi)              |  (12) Yard(yd)",
         "(13) Foot(ft)              |  (14) Inch(in)",
         "(15) Nautical Mile(nm)     |  (16) Light Year(ly)",
         "(17) Astronomical Unit(au) |  (18) Parsec(pc)",
         "(19) Lunar Distance(ld)    |  (-1) Previous",
         "(0) Exit Program"
      };
      length_units.menu_description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      length_units.printMenu();
   } else if(param == "area_units") {
      Menu area_units;
      area_units.menu_name = "Area";
      area_units.menu_contents = {
         "(1) Sq. Kilometer(km2)   |   (2) Sq. Hectometer(hm2)",
         "(3) Sq. Decameter(dam2)  |   (4) Sq. Meter(m2)",
         "(5) Sq. Decimeter(dm2)   |   (6) Sq. Centimeter(cm2)",
         "(7) Sq. Millimeter(mm2)  |   (8) Hectare(ha)",
         "(9) Are(a)               |   (10) Centiare(ca)",
         "(11) Sq. Mile(mi2)       |   (12) Sq. Yard(yd2)",
         "(13) Sq. Foot(ft2)       |   (14) Sq. Inch(in2)",
         "(15) Sq. Rod(rd2)        |   (-1) Previous",
         "(0) Exit Program"
      };
      area_units.menu_description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      area_units.printMenu();
   } else if(param == "volume_units") {
      Menu volume_units;
      volume_units.menu_name = "Unit Converter";
      volume_units.menu_contents = {
         "(1) Cb. Kilometer(m3)     |  (2) Cb. Hectometer(hm3)",
         "(3) Cb. Decameter(dam3)   |  (4) Cb. Meter(m3)",
         "(5) Cb. Decimeter(dm3)    |  (6) Cb. Centimeter(cm3)",
         "(7) Cb. Millimeter(m3)    |  (8) Kiloliter(kl)",
         "(8) Hectoliter(hl)",
         "(9)     |  (-1) Previous",
         "(0) Exit Program"
      };
      volume_units.menu_description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      volume_units.printMenu();
   } else if(param == "information") {
      std::cout<<"Done\n\n";
   } else if(param == "input_header") {
      Header input;
      input.name = "INPUT";
      input.icon = "<<";
      input.color = B;
      input.printHeader();
   } else if(param == "exit_header") {
      Header ext;
      ext.name = "EXIT";
      ext.icon = "<>";
      ext.color = C;
      ext.printHeader();
      std::cout<<BG<<" Exit Program "<<S<<"\n\n";
      exit(0);
   } else if(param == "error_header") {
      Header error;
      error.name = "ERROR";
      error.icon = "><";
      error.color = R;
      error.printHeader();
      std::cout<<BG<<" Unavailable option '"<<input<<"' "<<S<<"\n\n";
   } else if(param == "newline") {
      std::cout<<"\n";
   } else {
      std::cout<<BD<<R<<"Parameter '"<<param<<"' Unavailable!"<<S<<"\n\n";
      exit(0);
   }
}

#endif