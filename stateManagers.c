
#include "stateManagers.h"

extern void doState01(void) {
	if (settings == pressed_key) {}
	if (trainRunningNumber == pressed_key) {}
	change state to
}
extern void doState02(void) {}
extern void doState03(void) {}
extern void doState04(void) {}
extern void doState05(void) {}
extern void doState06(void) {}
extern void doState07(void) {}

extern bool shouldPacketGetSent01() {}
extern bool shouldPacketGetSent02() {}
extern bool shouldPacketGetSent03() {}
extern bool shouldPacketGetSent04() {}
extern bool shouldPacketGetSent05() {}
extern bool shouldPacketGetSent06() {}
extern bool shouldPacketGetSent07() {}

extern void manage_state_s1() {
	if (event1 == event) {
		state = new_state;
		is_p1_needed = true;
		is_p2_needed = true;
	} else if (event2 == event) {
		is p1_needed = true;
		is p3_needed = true;
		is p4_needed = true;
	} else {
		//no transition event
		//check for update conditions
	}
}

extern void manage_states(){
	manage_state_s1();
	manage_state_s2();
	manage_state_s3();
	manage_state_s4();
	manage_state_s5();
	manage_state_s6();
	manage_state_s7();
}

