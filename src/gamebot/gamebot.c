#include "global.h"
#include "gamebot/gamebot.h"

////////////////////////////////////////////////////////////////////////////////
// 
// IWRAM Data
// This data is checked rapidly and therefore needs to be in IWRAM for speed
// 
////////////////////////////////////////////////////////////////////////////////

// 16-bit Action Bye (Heal Pokemon, Give Item)
volatile u16 gGamebot_action;

////////////////////////////////////////////////////////////////////////////////
// 
// EWRAM Data
// This data is not checked rapidly and so doesn't need to be in IWRAM
// 
////////////////////////////////////////////////////////////////////////////////

// 16-bit Argument Byte (Which pokemon, which item, etc...)
EWRAM_DATA volatile u16 gGamebot_parameter;

// A player has 7 letters in their name
// This is the name of the person who invoked the action trimmed to 7 characters
EWRAM_DATA volatile u8 gGamebot_byName[7];

// A pokemon has 10 letters in their name
// This is the name to use for renaming a Pokemon or Trainer
EWRAM_DATA volatile u8 gGamebot_toName[10];
