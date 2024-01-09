#ifndef cli
#define cli

void def(std::string key, std::string opt="") {
   struct List {
      std::string head;
      std::vector<std::string> list;
      std::string desc;
      
      void Print(bool isWithDescription) {
         if(isWithDescription == true) {
            std::cout<<"\033[1m< "<<head<<"\033[0m\n\n";
            
            if(!list.empty()) {
               for(std::string item : list) {
                  std::cout<<"  "<<item<<"\n";
               }
            }
            else std::cout<<"\n";
            
            std::cout<<"\n  "<<desc<<"\n\n";
         }
         else {
            std::cout<<"\033[1m< "<<head<<"\033[0m\n\n";
            
            if(!list.empty()) {
               for(std::string item : list) {
                  std::cout<<"  "<<item<<"\n";
               }
            }
            else std::cout<<"\n";
            std::cout<<"\n";
         }
      }
   };
   
   if(key == "home") {
      List home;
      home.head = "Main Menu";
      home.list = {
         "(1) Unit Converter",
         "(2) Information About This Project",
         "(3) Documentation",
         "(4) Changelog",
         "(5) User Settings",
         "(6) License",
         "(0) Exit Program"
      };
      home.Print(false);
   }
   else if(key == "cvtr") {
      List cvtr;
      cvtr.head = "Unit Converter";
      cvtr.list = {
         "(1) Length       |  (2) Area",
         "(3) Volume       |  (4) Weight",
         "(5) Temperature  |  (6) Speed",
         "(7) Pressure     |  (8) Power",
         "(9) Data Size    |  (10) Date and Time",
         "(0) Exit Program"
      };
      cvtr.Print(false);
   }
   else if(key == "length") {
      List length;
      length.head = "Length";
      length.list = {
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
      length.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      length.Print(true);
   }
   else if(key == "area") {
      List area;
      area.head = "Area";
      area.list = {
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
      area.desc = "Select one of the units that will be used as\n  the conversion parameter for all units.";
      area.Print(true);
   }
   else if(key == "volume") {
      List volume;
      volume.head = "Volume";
      volume.list = {
         "(1) Cb. Kilometer(m3)     |  (2) Cb. Hectometer(hm3)",
         "(3) Cb. Decameter(dam3)   |  (4) Cb. Meter(m3)",
         "(5) Cb. Decimeter(dm3)    |  (6) Cb. Centimeter(cm3)",
         "(7) Cb. Millimeter(m3)    |  (8) Kiloliter(kl)",
         "(9) Hectoliter(hl)        |  (10) Liter(l)",
         "(11) Deciliter(dl)        |  (12) Milliliter(ml)",
         "(13) Cb. Foot(ft3)        |  (14) Cb. Inch(in3)",
         "(15) Cb. Yard(yd3)        |  (16) Acre Foot(af3)",
         "(17) Barrel(bbl)          |  (18) Cup(c)",
         "(19) Pint(pt)             |  (20) Quart(qt)",
         "(21) US Gallon(us gal)    |  (22) UK Gallon(uk gal)",
         "(23) Fluid Ounce (fl oz)  |  (24) Bushel (bu)",
         "(-1) Previous             |  (0) Exit Program"
      };
      volume.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      volume.Print(true);
   }
   else if(key == "weight") {
      List weight;
      weight.head = "Weight";
      weight.list = {
         "(1) Gigatonne(Gt)         |  (2) Megatonne(Mt)",
         "(3) Tonne(t)              |  (4) Kilogram(kg)",
         "(5) Gram(gr)              |  (6) Milligram(mg)",
         "(7) Microgram(μg)         |  (8) Nanogram(ng)",
         "(9) Picogram(pg)          |  (10) UK Ton(t)",
         "(11) US Ton(t)            |  (12) Hundredweight(cwt)",
         "(13) Quarter(qtr)         |  (14) Stone(st)",
         "(15) Pound(lb)            |  (16) Ounce(oz)",
         "(17) Dram(dr)             |  (18) Grain(grn)",
         "(19) Troy Pound(lb t)     |  (20) Troy Ounce(oz t)",
         "(21) Pennyweight(dwt)     |  (-1) Previous",
         "(0) Exit Program"
      };
      weight.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      weight.Print(true);
   }
   else if(key == "temp") {
      List temp;
      temp.head = "Temperature";
      temp.list = {
         "(1) Degrees Celsius(°C)   |  (2) Degrees Fahrenheit(°F)",
         "(3) Degrees Rankine(°R)   |  (4) Degrees Réaumur(°Re)",
         "(5) Kelvin(K)             |  (-1) Previous",
         "(0) Exit Program"
      };
      temp.desc = "Select one of the units that will be used as\n  the conversion parameter for all units.";
      temp.Print(true);
   }
   else if(key == "speed") {
      List speed;
      speed.head = "Speed";
      speed.list = {
         "(-1) Previous   |  (0) Exit Program"
      };
      speed.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      speed.Print(true);
   } 
   else if(key == "press") {
      List press;
      press.head = "Pressure";
      press.list = {
         "(-1) Previous   |  (0) Exit Program"
      };
      press.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      press.Print(true);
   }
   else if(key == "power") {
      List power;
      power.head = "Power";
      power.list = {
         "(-1) Previous   |  (0) Exit Program"
      };
      power.desc = "Select one of the units that will be used as\n  the conversion parameter for all units.";
      power.Print(true);
   }
   else if(key == "data") {
      List data;
      data.head = "Data Size";
      data.list = {
         "(-1) Previous   |  (0) Exit Program"
      };
      data.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      data.Print(true);
   }
   else if(key == "dttm") {
      List dttm;
      dttm.head = "Date and Time";
      dttm.list = {
         "(-1) Previous   |  (0) Exit Program"
      };
      dttm.desc = "Select one of the units that will be used as\n  the conversion parameter for all units";
      dttm.Print(true);
   }
   else if(key == "info") {
      List info;
      info.head = "A.S.P. @CPSpace - Unit Converter";
      info.desc = "This project is under development, check changelog for more details or check this project at GitHub.";
      info.desc = "GitHub";
      info.Print(true);
   }
   else if(key == "docs") {
      
   }
   else if(key == "clog") {
      
   }
   else if(key == "sett") {
      
   }
   else if(key == "licn") {
      
   }
   else if(key == "in") std::cout<<"\033[1m> Enter option: \033[0m";
   else if(key == "uo") std::cout<<"\033[91m\033[1m< Unavailable option: '"<<opt<<"'\033[0m\n\n";
   else if(key == "ex") {
      std::cout<<"\033[91m\033[1m< Exit Program...\033[0m\n\n";
      exit(0);
   }
   else if(key == "ln") std::cout<<"\n";
   else std::cout<<"\033[91m\033[1m< Unavailable key: '"<<key<<"'\033[0m\n\n";
}

#endif