struct item {
	//member functions
	//data members
	unsigned long bulletproof_glass=0;
	unsigned long computer=0;
	unsigned long construction_component=0;
	unsigned long detector_components=0;
	unsigned long display=0;
	unsigned long explosives=0;
	unsigned long girder=0;
	unsigned long gravity_generator_components=0;
	unsigned long interior_plate=0;
	unsigned long medical_components=0;
	unsigned long metal_grid=0;
	unsigned long motor=0;
	unsigned long radio_communcations_components=0;
	unsigned long reactor_components=0;
	unsigned long steel_plate=0;
	unsigned long large_steel_tube=0;
	unsigned long small_steel_tube=0;
	unsigned long solar_cell =0;
	unsigned long thruster_components=0;
};
//nonmember interface functions
item add(const item&, const item&);
item mult(const, const item&);