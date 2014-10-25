/*!
 * @file
 * @brief Switch Slew Controller module
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef SWITCHSLEWCONTROLLER_H
#define SWITCHSLEWCONTROLLER_H

/*!
 * Initialize the Switch Slew Controller
 */
void SwitchSlewController_Init(void);

/*!
 * Set the callback method for slew controller updates
 * @param callback The method to be called when the slew controller updates
 */
void SwitchSlewController_SetUpdateCallback(void (*callback)(uint8_t));

#endif
