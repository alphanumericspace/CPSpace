#ifndef cli
#define cli

const std::string S = "\033[0m";
const std::string BG = "\033[48;5;15m\033[38;5;0m";

void defn(const std::string param) {
   struct Prefix {
      void prefix(const int key) {
         switch(key) {
            case 1:
               std::cout<<BG<<" >> "<<S<<" ";
               break;
            case 2:
               std::cout<<BG<<" << "<<S<<" ";
               break;
            case 3:
               std::cout<<BG<<" !! "<<S<<" ";
               break;
            case 4:
               std::cout<<BG<<" <> "<<S<<" Exit Progam\n\n";
               exit(0);
            default:
               std::string _key = std::to_string(key);
               std::cout<<"Unavailable key"<<_key<<"\n\n";
               exit(0);
         }
      }
   };
   
   struct Menu {
      std::string name;
      std::vector<std::string> contents;
      std::string description;
      void menu(void) {
         Prefix menu;
         menu.prefix(1);
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
   
   if(param == "main_header") {
      std::cout<<BG<<" CPSPace Project "<<S<<"\n\nThis tool is designed to seamlessly convert\nvarious units and simplify your calculations.\n\n";
   } else if(param == "main") {
      Menu main;
      main.name = "Main Menu";
      main.contents = {
         "(1) Unit Converter",
         "(2) Information",
         "(0) Exit Program"
      };
      main.description = "Enter available options.";
      main.menu();
   } else if(param == "cvtr") {
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
      cvtr.menu();
   } else if(param == "length") {
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
      length.description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      length.menu();
   } else if(param == "area") {
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
      area.description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      area.menu();
   } else if(param == "volume") {
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
      volume.description = "Enter available options. Select one of the units that will be used as the conversion parameter for all units.";
      volume.menu();
   } else if(param == "info") {
      std::cout<<"Done\n\n";
   } else if(param == "input") {
      Prefix input;
      input.prefix(2);
   } else if(param == "exit") {
      Prefix ext;
      ext.prefix(4);
   } else if(param == "err_opt") {
      Prefix unop;
      unop.prefix(3);
      std::cout<<"Unavailable option\n\n";
   } else if(param == "line") {
      std::cout<<"\n";
   } else {
      std::cout<<"Unavailable '"<<param<<"' parameter!\n\n";
      exit(0);
   }
}

#endif