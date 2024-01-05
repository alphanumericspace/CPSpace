#ifndef cli
#define cli

const std::string highl(const std::string key) {
   return std::cout<<"\033[48;5;15m\033[38;5;0m "<<key<<" \033[0m ";
}

const std::string prefix(const std::string key) {
   if(key == "head") return highl(">>");
   if(key == "input") return highl("<<");
   if(key == "error") return highl("!!");
   if(key == "exit") return highl("<>");
   std::cout<<"Unavailable key"<<key<<"\n\n";
   return exit(0);
}

const void def(const std::string key, const std::string input = "") {
   /*struct Prefix {
      void highl(std::string icon) {
         std::cout<<"\033[48;5;15m\033[38;5;0m "<<icon<<" \033[0m ";
      }
      void prefix(int key) {
         switch(key) {
            case 1:
               highl(">>");
               break;
            case 2:
               highl("<<");
               break;
            case 3:
               highl("!!");
               break;
            case 4:
               highl("<>");
               std::cout<<"Exit Program\n\n";
               exit(0);
            default:
               std::string _key = std::to_string(key);
               std::cout<<"Unavailable key"<<_key<<"\n\n";
               exit(0);
         }
      }
   };*/
   
   struct Menu {
      std::string name;
      std::vector<std::string> contents;
      std::string description;
      void printMenu(void) {
         prefix("head");
         if(!name.empty()) {
            std::cout<<name<<"\n\n";
         } else std::cout<<"Unknown\n\n";
         
         if(contents.size() > 1) {
            for(std::string content : contents) {
               std::cout<<content<<"\n";
            }
         } else std::cout<<contents[0]<<"\n";
         
         if(!description.empty()) {
            std::cout<<"\n"<<description<<"\n\n";
         } else std::cout<<"\n";
      }
   };
   
   if(key == "header") {
      std::cout<<"CPSPace Project\n\nThis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
   } else if(key == "main") {
      Menu main;
      main.name = "Main Menu";
      main.contents = {
         "(1) Unit Converter",
         "(2) Information",
         "(0) Exit Program"
      };
      main.description = "Enter available options.";
      main.printMenu();
   } else if(key == "cvtr") {
      Menu cvtr;
      cvtr.name = "Unit Converter";
      cvtr.contents = {
         "(1) Length       |  (2) Area",
         "(3) Volume       |  (4) Weight",
         "(5) Temperature  |  (6) Speed",
         "(7) Pressure     |  (8) Power",
         "(9) Data Size    |  (-1) Previous",
         "(0) Exit Program"
      };
      cvtr.description = "Enter available options.";
      cvtr.printMenu();
   } else if(key == "length") {
      Menu length;
      length.name = "Length";
      length.contents = {
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
      length.description = "Enter available options. Select one of the units that will be used as the conversion keyeter for all units.";
      length.printMenu();
   } else if(key == "area") {
      Menu area;
      area.name = "Area";
      area.contents = {
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
      area.description = "Enter available options. Select one of the units that will be used as the conversion keyeter for all units.";
      area.printMenu();
   } else if(key == "volume") {
      Menu volume;
      volume.name = "Unit Converter";
      volume.contents = {
         "(1) Cb. Kilometer(m3)     |  (2) Cb. Hectometer(hm3)",
         "(3) Cb. Decameter(dam3)   |  (4) Cb. Meter(m3)",
         "(5) Cb. Decimeter(dm3)    |  (6) Cb. Centimeter(cm3)",
         "(7) Cb. Millimeter(m3)    |  (8) Kiloliter(kl)",
         "(8) Hectoliter(hl)",
         "(9)     |  (-1) Previous",
         "(0) Exit Program"
      };
      volume.description = "Enter available options. Select one of the units that will be used as the conversion keyeter for all units.";
      volume.printMenu();
   } else if(key == "info") {
      std::cout<<"Done\n\n";
   } else if(key == "input") {
      prefix("input");
   } else if(key == "exit") {
      prefix("exit");
   } else if(key == "err_opt") {
      prefix("error");
      std::cout<<"Unavailable option '"<<input<<"'\n\n";
   } else if(key == "ln") {
      std::cout<<"\n";
   } else {
      std::cout<<"Unavailable '"<<key<<"' parameter!\n\n";
      exit(0);
   }
}

#endif