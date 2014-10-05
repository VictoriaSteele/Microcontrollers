/*!
 * @file
 * @brief Switch Slew Controller module
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef SWITCHSLEWCONTROLLER_H
#define SWITCHSLEWCONTROLLER_H

void SwitchSlewController_Init();
void SwitchSlewController_SetUpdateCallback(void (*callback)(uint8_t));

#endif
