#ifndef cli
#define cli

void def(std::string key) {
   struct List {
      std::string head;
      std::vector<std::string> lists;
      std::string desc;
      
      void print(bool isWithDescription) {
         if(isWithDescription == true) {
            std::cout<<head<"\n\n";
            for(std::string list : lists) {
               std::cout<<list<<"\n";
            }
            std::cout<<"\n"<<desc<<"\n\n";
         } else {
            std::cout<<head<"\n\n";
            for(std::string list : lists) {
               std::cout<<list<<"\n";
            }
            std::cout<<"\n";
         }
      }
   };
   
   if(key == "main") {
      List cvtr;
      cvtr.name = "Main Menu";
      cvtr.list = {
         "(1) Length       |  (2) Area",
         "(3) Volume       |  (4) Weight",
         "(5) Temperature  |  (6) Speed",
         "(7) Pressure     |  (8) Power",
         "(9) Data Size    |  (0) Exit Program"
      };
      cvtr.desc = "Enter a choice from one of the available unit options above.";
      cvtr.print(true);
   } else if(key == "length") {
      List length;
      length.name = "Length";
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
      length.desc = "Select one of the units that will be used as the conversion keyeter for all units.";
      length.print(true);
   } else if(key == "area") {
      List area;
      area.name = "Area";
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
      area.desc = "Select one of the units that will be used as the conversion keyeter for all units.";
      area.print(true);
   } else if(key == "volume") {
      List volume;
      volume.name = "Unit Converter";
      volume.list = {
         "(1) Cb. Kilometer(m3)     |  (2) Cb. Hectometer(hm3)",
         "(3) Cb. Decameter(dam3)   |  (4) Cb. Meter(m3)",
         "(5) Cb. Decimeter(dm3)    |  (6) Cb. Centimeter(cm3)",
         "(7) Cb. Millimeter(m3)    |  (8) Kiloliter(kl)",
         "(8) Hectoliter(hl)",
         "(9)     |  (-1) Previous",
         "(0) Exit Program"
      };
      volume.desc = "Select one of the units that will be used as the conversion keyeter for all units.";
      volume.print(true);
   } else exit(0);
}

#endif