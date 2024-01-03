#ifndef menu
#define menu

#define B "\033[34m" // Blue
#define G "\033[32m" // Green
#define C "\033[36m" // Cyan
#define R "\033[31m" // Red
#define S "\033[0m" // Reset
#define BD "\033[1m" // Bold
#define FI "INPUT << "
#define FD "HEAD >> "
#define EX "STOP <> "
#define ER "ERROR >< "

void main_menu(void) {
   std::cout<<BD<<G<<FD<<S<<"Main Menu\n\n";
   
   std::vector<std::string> list_menu {
		"(1) Unit Converter",
		"(2) Information",
		"(0) Exit Program"
	};
	
	for(std::string list : list_menu) {
		std::cout<<list<<std::endl;
	}
	std::cout<<"\nEnter available options.\n\n";
}

void unit_converter(void) {
   std::cout<<BD<<G<<FD<<S<<"Unit Converter\n\n";
   
   std::vector<std::string> units {
      "(1) Length       |  (2) Area",
      "(3) Volume       |  (4) Weight",
      "(5) Temperature  |  (6) Speed",
      "(7) Pressure     |  (8) Power",
      "(9) Data Size    |  (-1) Previous",
      "(0) Exit Program"
   };
   
   for(std::string unit : units) {
      std::cout<<unit<<std::endl;
   }
   std::cout<<"\nEnter available options.\n\n";
}

void length_units(void) {
   std::cout<<BD<<G<<FD<<S<<"Length\n\n";
   
   std::vector<std::string> length_units {
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
   
   for(std::string unit : length_units) {
      std::cout<<unit<<std::endl;
   }
   std::cout<<"\nEnter available options. Select one of the units that will be used as the conversion parameter for all units.\n\n";
}

std::string exitProgram() {
   std::cout<<BD<<C<<EX<<S<<"Exit Program\n\n";
}

#endif