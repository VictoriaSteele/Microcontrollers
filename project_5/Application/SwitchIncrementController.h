/*!
 * @file
 * @brief Module to control the switch increments for user options
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef SWITCHINCREMENTCONTROLLER_H_
#define SWITCHINCREMENTCONTROLLER_H_

/*!
 * Initialize the switch increment controller
 */
void SwitchIncrementController_Init(void);

/*!
 * Set the callback method for switch increment updates
 * @param callback The method to be called when the increment controller updates
 */
void SwitchIncrementController_SetUpdateCallback(void (*callback)(uint8_t));

#endif
