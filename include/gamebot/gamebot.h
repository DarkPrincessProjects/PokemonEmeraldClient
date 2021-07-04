#ifndef GUARD_GAMEBOT_H
#define GUARD_GAMEBOT_H

// We add specific numbers here to make it easy to copy and paste into
// NodeJS. I understand it's not needed in enums.
enum {

	// No action has been set
	// Also set to NONE to indicate the action has been consumed and ready for
	// another action
	GAMEBOT_ACTION_NONE = 0,

	// Give an item
	GAMEBOT_ACTION_GIVE_ITEM = 1,

	// Heal a Pokemon
	GAMEBOT_ACTION_HEAL_POKEMON = 2
} GamebotActions;

// 16-bit Action Bye (Heal Pokemon, Give Item)
extern volatile u16 gGamebot_action;

// 16-bit Argument Byte (Which pokemon, which item, etc...)
extern volatile u16 gGamebot_parameter;

// A player has 7 letters in their name
// This is the name of the person who invoked the action trimmed to 7 characters
extern volatile u8 gGamebot_byName[7];

// A pokemon has 10 letters in their name
// This is the name to use for renaming a Pokemon or Trainer
extern volatile u8 gGamebot_toName[10];

#endif // GUARD_GAMEBOT_H
