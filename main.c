
#include "./stateManagers.h"

#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

//state change:
//master
//button presses
//menu windows will have different checks

int state;
#define STATE01 1
#define STATE02 2
#define STATE03 3
#define STATE04 4
#define STATE05 5
#define STATE06 6
#define STATE07 7

extern void handle_state_transition_button_state_change(void) {}
extern void handle_state_transition_mdd_mode_change(void) {}


extern void handle_state_transition_internal(void) {
	handle_state_transition_button_state_change();
	handle_state_transition_mdd_mode_change();
}

extern void handle_state_transition_external(void) {
	if (STATE01 == state) {
		doState01();
	} else if (STATE02 == state) {
		doState02();
	} else if (STATE03 == state) {
		doState03();
	} else if (STATE04 == state) {
		doState04();
	} else if (STATE05 == state) {
		doState05();
	} else if (STATE06 == state) {
		doState06();
	} else if (STATE07 == state) {
		doState07();
	} //handle state change due to drivre action
}

extern void handle_state_transitions(void) {
	handle_state_transitions_internal();
	handle_state_transitions_external();
}

//check for changes in data and update the copy of the last packets sent
extern void handle_state_updates(void) {
	determine_if_data_update_required();
	//check for state changes
  update_last_copy();
}

extern void determine_state(void) {
	handle_state_transitions();
	handle_state_data_updates();
}

extern void determine_packets(void) {
	//if new packet button accessibility packet then populate jru message
  //if new packet sound info packet then populate jru message
  //if new update symbol info packet then populate jru message
  //update sent packets
}

extern void generate_output(void) {
	populate_packets(); //generate populated output message
	populate_juridical_messages(); //generate populated jru messages
}

#define __maybe_unused__ __attribute__((unused))

#pragma weak main
int main (int argc, char** argv) {
	determine_state();
	determine_packets();
	generate_output();
	return 0;
}

