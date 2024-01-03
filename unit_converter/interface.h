#ifndef interface
#define interface

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

void printHeader(Header det) {
   std::cout<<det.style<<det.color<<det.name<<" "<<det.icon<<det.reset<<" ";
}

void printMenu(Menu det) {
   Header head;
   head.name = "HEAD";
   head.icon = ">>";
   head.color = G;
   printHeader(head);
   std::cout<<det.menu_name<<"\n\n";
   for(std::string content : det.menu_contents) {
      std::cout<<content<<"\n";
   }
   std::cout<<"\n"<<det.menu_description<<"\n\n";
}

void defn(std::string param, std::string input = "") {
   if(param == "main_header") {
      std::cout<<BD<<"CPSPace Project"<<S<<"\n\nThis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
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
      printMenu(length_units);
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
      printMenu(area_units);
   } else if(param == "information") {
      std::cout<<"Done\n\n";
   } else if(param == "input_header") {
      Header input;
      input.name = "INPUT";
      input.icon = "<<";
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
      std::cout<<"\n"<<B<<R<<"Parameter '"<<param<<"' Unavailable!"<<S<<"\n\n";
   }
}

#endif